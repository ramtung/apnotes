#include <iostream>
#include <vector>
#include "person.hpp"
using namespace std;
                                                                                
int main()
{
    vector<Person> vp;
    vp.push_back(Person("gholam", 2, 7, 1370));
    vp.push_back(Person("ghamar", 3, 12, 1368));
    vp.push_back(Person("alaleh", 12, 2, 1360));

    Date today = str_to_date("02/07/1401");
    
    for (int i = 0; i < vp.size(); i++)
        if (vp[i].get_bdate().get_day() == today.get_day() &&
        	vp[i].get_bdate().get_month() == today.get_month())
            cout << "Happy Birth Day " << vp[i].get_name() << "!\n";

}



