/*
    CH08-320142
    a4_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <string.h>
#include "Creature.h"

using namespace std;
int main()
{
    string obj;

    while(1)
    {
      cout << "Enter an object (w/1/2) : ";
      getline(cin,obj);
      if(obj == "quit")
        {
            return 0;
        }
      else
        {
            if(obj == "w")
            {
                Wizard* w = new Wizard();
                w->run();
                w->hover();
                delete w;
                cout<<endl;
            }
            else
                if(obj == "1")
                {
                    Archer* a = new Archer();
                    a->run();
                    a->range();
                    delete a;
                    cout<<endl;
                }
                else
                    if(obj == "2")
                    {
                        Soldier* s = new Soldier();
                        s->run();
                        s->fight();
                        delete s;
                        cout<<endl;
                    }
                    else
                    {
                    cout << "No valid option was entered" << endl;
                    }
      }
    }

    return 0;
}
