#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define DIR_LEFT 0
#define DIR_RIGHT 1
#define MAX_POWER 9

class Roboline;

class Robot {
public:
    Robot(char i, int stm, int loc, Roboline* line) 
        : stamina(stm), location(loc), dead(false), rl(line), id(i) {}

    virtual void play_turn();
    void die();

protected:
    void move_to(int dest);
    void get_tired();
    void fight_with(Robot&);

    char id;
    int stamina;
    int location;
    bool dead;
    Roboline *rl;

    friend ostream& operator<<(ostream&, const Robot&);
};

class Roboline {
public:
    Roboline(int size, int num_of_robots);

    bool more_than_one_robot();
    Robot* peek_at(int loc);
    bool invalid_loc(int loc);
    void robot_moved(int from, int to);
    void robot_died_at(int loc);
    void remove_all();
    void turn();

private:
    vector<Robot*> robots;
    vector<Robot*> line;

    friend ostream& operator<<(ostream&, const Roboline&);
};

void Robot::play_turn() {
    if (dead)
        return;
    int dir = rand() % 2;
    int destination = location;
    if (dir == DIR_LEFT) 
        destination = location - 1;
    else if (dir == DIR_RIGHT)
        destination = location + 1;

    if (rl->invalid_loc(destination))
        return;

    Robot* other = rl->peek_at(destination);

    if (other == NULL)
        move_to(destination);
    else {
        fight_with(*other);
        if (!dead)
            move_to(destination);
    }
}

void Robot::die() { 
    dead = true; 
    rl->robot_died_at(location);
}

void Robot::move_to(int dest) {
    rl->robot_moved(location, dest);
    location = dest;
}

void Robot::get_tired() {
    stamina--;
    if (stamina == 0)
        die();
}

void Robot::fight_with(Robot& j) {
    int r = rand() % (stamina + j.stamina);
    if (r < stamina) {
        j.die();
        get_tired();
    } else {
        die();
        j.get_tired();
    }
}

ostream& operator<<(ostream& out, const Robot& j) {
    out << j.id << j.stamina;
    return out;
}

Roboline::Roboline(int size, int num_of_robots) 
        : line(size)
{
    for (int i = 0; i < num_of_robots; i++) {
        int loc = rand() % size;
        while (line[loc] != NULL)
            loc = rand() % size;

        Robot* new_robot = new Robot('a'+i, rand() % MAX_POWER + 1, loc, this);

        robots.push_back(new_robot);
        line[loc] = new_robot;  
    }
}

bool Roboline::invalid_loc(int loc) {
    return (loc < 0) || (loc >= line.size());
}

Robot* Roboline::peek_at(int loc) {
    if ((loc >= 0) && (loc < line.size()))
        return line[loc];
    else return NULL;
}

void Roboline::robot_moved(int from, int to) {
    line[to] = line[from];
    line[from] = NULL;
}

void Roboline::robot_died_at(int loc) {
    line[loc] = NULL;
}

void Roboline::remove_all() {
    for (int i = 0; i < robots.size(); i++)
        delete robots[i];
}

bool Roboline::more_than_one_robot() {
    bool seen_any = false;
    for (int i = 0; i < line.size(); i++)
        if (line[i] != NULL)
            if (seen_any)
                return true;
            else
                seen_any = true;
    return false;
}

void Roboline::turn() {
    for (int i = 0; i < robots.size(); i++)
        robots[i]->play_turn();
}

ostream& operator<<(ostream& out, const Roboline& rl) {
    for (int i = 0; i < rl.line.size(); i++)
        if (rl.line[i] == NULL)
            out << "__ ";
        else
            out << *(rl.line[i]) << ' ';
    return out;
}

int main() {
    srand(time(0));
    Roboline rl(15, 5);

    while (rl.more_than_one_robot()) {
        cout << rl << endl;
        rl.turn();
        cin.get();
    }
    cout << rl << endl;
    rl.remove_all();
}