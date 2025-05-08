#include <iostream>
using namespace std;

class Round {
public:
  virtual void what_are_you() { cout << "Gerd\n"; }
};

class Walnut : public Round {
public:
  virtual void what_are_you() { cout << "Gerdoo\n"; }
  void crack() {}
};

int main() {
  Round r;
  Walnut w;
  Round* rp;
  Walnut* wp;

  // up-casting:
  rp = &w;

  // compile error:
  // wp = rp;

  // unsafe down-casting:
  wp = (Walnut*)rp;

  // safe down-casting:
  wp = dynamic_cast<Walnut*>(rp);
  if (wp == nullptr)
    cerr << "Sorry, not a Gerdoo!";
  else
    wp->crack(); // do some Gerdoo thing
}