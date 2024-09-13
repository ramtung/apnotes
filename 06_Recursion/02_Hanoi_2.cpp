// Using typedef to improve readability
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Peg;

Peg peg_a;
Peg peg_b;
Peg peg_c;

void print_peg(Peg peg)
{
    for (int disc: peg)
        cout << disc << ' ';
    cout << '\n';
}

void print_pegs()
{
    cout << "A: ";
    print_peg(peg_a);
    cout << "B: ";
    print_peg(peg_b);
    cout << "C: ";
    print_peg(peg_c);
    cout << endl;
}

void move(Peg& from_peg, Peg& to_peg)
{
    to_peg.push_back(from_peg.back());
    from_peg.pop_back();
    print_pegs();
}

void hanoi(Peg& from_peg, Peg& to_peg,
           Peg& using_peg, int num_of_discs)
{
    if (num_of_discs == 1)
        move(from_peg, to_peg);
    else {
        hanoi(from_peg, using_peg, to_peg, num_of_discs - 1);
        move(from_peg, to_peg);
        hanoi(using_peg, to_peg, from_peg, num_of_discs - 1);
    }   
}

int main()
{
    int num_of_discs;
    cout << "How many discs? ";
    cin >> num_of_discs;

    for (int i = num_of_discs; i >= 1; i--)
        peg_a.push_back(i);

    print_pegs();
    hanoi(peg_a, peg_b, peg_c, num_of_discs);
}