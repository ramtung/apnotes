#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define DIR_LEFT 0
#define DIR_RIGHT 1
#define MAX_STAMINA 9

class Arena;

class Robot {
public:
    Robot(char i, int stm, int loc, Arena* a) 
        : stamina(stm), location(loc), dead(false), arena(a), id(i) {}

    void play_turn();
    void die();
    void print();
    int get_location() { return location; }
    bool is_dead() { return dead; }
private:
    void move_to(int dest);
    void get_tired();
    void fight_with(Robot*);

    char id;
    int stamina;
    int location;
    bool dead;
    Arena *arena;
};

class Arena {
public:
    Arena(int size, int num_of_robots);

    bool not_finished();
    Robot* robot_at(int loc);
    bool invalid_loc(int loc);
    void round();
    void print();
    void cleanup();
private:
    vector<Robot*> robots;
    int arena_size;
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

    if (arena->invalid_loc(destination))
        return;

    Robot* other = arena->robot_at(destination);

    if (other == NULL)
        move_to(destination);
    else {
        fight_with(other);
        if (!dead)
            move_to(destination);
    }
}

void Robot::die() { 
    dead = true; 
}

void Robot::move_to(int dest) {
    location = dest;
}

void Robot::get_tired() {
    stamina--;
    if (stamina == 0)
        die();
}

void Robot::fight_with(Robot* j) {
    int r = rand() % (stamina + j->stamina);
    if (r < stamina) {
        j->die();
        get_tired();
    } else {
        die();
        j->get_tired();
    }
}

void Robot::print() {
    cout << id << stamina << ' ';
}

Arena::Arena(int size, int num_of_robots) 
{
    arena_size = size;
    for (int i = 0; i < num_of_robots; i++) {
        int loc = rand() % size;
        while (robot_at(loc))
            loc = rand() % size;

        robots.push_back(new Robot('a'+i, rand() % MAX_STAMINA + 1, loc, this));
    }
}

bool Arena::invalid_loc(int loc) {
    return (loc < 0) || (loc >= arena_size);
}

Robot* Arena::robot_at(int loc) {
    for (Robot* robot : robots)
        if (robot->get_location() == loc && !robot->is_dead())
            return robot;
    return NULL;
}

bool Arena::not_finished() {
    bool seen_alive = false;
    for (Robot* robot : robots) {
        if (!robot->is_dead()) {
            if (seen_alive)
                return true;
            else
                seen_alive = true;
        }
    }
    return false;
}

void Arena::round() {
    for (Robot* robot : robots)
        robot->play_turn();
}

void Arena::print() {
    for (int i = 0; i < arena_size; i++) {
        Robot* r = robot_at(i);
        if (r && !r->is_dead())
            r->print();
        else
            cout << "__ ";
    }
    cout << endl;
}

void Arena::cleanup() {
    for (Robot* robot : robots)
        delete robot;
}

int main() {
    time_t seed = time(0);
    cout << "seed = " << seed << endl;
    srand(seed);

    Arena arena(15, 5);

    while (arena.not_finished()) {
        arena.print();
        arena.round();
        cin.get();
    }
    arena.print();
    arena.cleanup();
}