#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

const string CMD_START_DAY = "start_day";
const string CMD_SHOW_DAY = "show_day";
const string CMD_SHOW_LONGEST_DAY = "show_the_longest_day";
const string CMD_SHOW_BEST_DAY = "show_the_best_day";

const int SUMMARY_LENGTH = 20;

class PositiveWords {
public:
    PositiveWords(string filename) {
        ifstream pw_file(filename);
        string word;
        while (pw_file >> word) {
            positive_words.push_back(word);
        }
        pw_file.close();
    }
    bool contains(string word) {
        for (string pw : positive_words) {
            if (pw == word)
                return true;
        }
        return false;
    }
private:
    vector<string> positive_words;
};

class DiaryDay {
public:
    DiaryDay(string _date, string line) : date(_date), lines(1, line) {}
    bool has_date(string _date) { return _date == date; }
    void print() {
        for (int i = 0; i < lines.size(); i++) {
            cout << lines[i] << endl;
        }
    }
    void print_summary() {
        int output_size = 0;
        for (int i = 0; i < lines.size(); i++) {
            if (output_size + lines[i].length() < SUMMARY_LENGTH) {
                cout << lines[i] << endl;
                output_size += lines[i].length();
            } else  {
                cout << lines[i].substr(0, SUMMARY_LENGTH - output_size) << "..." << endl;
                return;
            }
        }
    }
    void add_line(string line) { lines.push_back(line); }
    int length() {
        int total_length = 0;
        for (int i = 0; i < lines.size(); i++)
            total_length += lines[i].length();
        return total_length;
    }
    int positive_word_count(PositiveWords& positive_words) {
        int positive_count = 0;
        for (int i = 0; i < lines.size(); i++) {
            for (int j = 0; j < lines[i].length(); j++) {
                if (!isalpha(lines[i][j])) {
                    lines[i][j] = ' ';
                } else {
                    lines[i][j] = tolower(lines[i][j]);
                }
            }
            string word;
            istringstream iss(lines[i]);
            while (iss >> word) {
                if (positive_words.contains(word))
                    positive_count++;
            }
        }
        return positive_count;
    }
    bool comes_before(const DiaryDay& dd) {
        return date < dd.date;
    }
private:
	string date;
	vector<string> lines;
};

class Diary {
public:
    void print(string date) {
        int diary_day_index = find_diary_day(date);
        if (diary_day_index != -1)
            diary[diary_day_index].print();
    }
    void add_line_to_date(string date, string line) {
        int diary_day_index = find_diary_day(date);
        if (diary_day_index != -1)
            diary[diary_day_index].add_line(line);
        else {
            diary.push_back(DiaryDay(date, line));
        }
    }
    void show_longest_day() {
        int longest_index;
        int max_length = 0;
        for (int i = 0; i < diary.size(); i++) {
            if (diary[i].length() > max_length) {
                longest_index = i;
                max_length = diary[i].length();
            }
        }
        diary[longest_index].print_summary();
    }
    void show_best_day(PositiveWords& positive_words) {
        int best_index;
        int max_positive_cnt = -1;
        for (int i = 0; i < diary.size(); i++) {
            int positive_count = diary[i].positive_word_count(positive_words);
            if ((positive_count > max_positive_cnt) ||
                ((positive_count == max_positive_cnt) && (diary[i].comes_before(diary[best_index])))) {
                best_index = i;
                max_positive_cnt = positive_count;
            }
        }
        diary[best_index].print_summary();
    }
private:
    vector<DiaryDay> diary;

    int find_diary_day(string date) {
        for (int i = 0; i < diary.size(); i++) {
            if (diary[i].has_date(date))
                return i;
        }
        return -1;
    }
};

bool starts_with(string str, string prefix) {
	return str.substr(0, prefix.length()) == prefix;
}


int main() {
    PositiveWords positive_words("positive-words.txt");

	string line;
	string current_day;
	Diary diary;

	while (getline(cin, line)) {
		if (starts_with(line, CMD_START_DAY)) {
            string &currentDay = current_day;
            currentDay = line.substr(CMD_START_DAY.length() + 1);
        } else 	if (starts_with(line, CMD_SHOW_DAY)) {
            diary.print(line.substr(CMD_SHOW_DAY.length() + 1));
        } else 	if (starts_with(line, CMD_SHOW_LONGEST_DAY)) {
			diary.show_longest_day();
        } else 	if (starts_with(line, CMD_SHOW_BEST_DAY)) {
            diary.show_best_day(positive_words);
		} else {
			diary.add_line_to_date(current_day, line);
		}
	}
}