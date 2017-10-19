/*
    CH08-320142
    a2_p4.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    string s;
    string list[]={"computer", "television", "keyboard", "magazine", "book", "superman", "science", "waffle", "hoodie", "money", "grade", "pizza", "eagle", "green", "hat"};
    int j;
    int randomGenerator, k;
    srand(static_cast<unsigned int> (time(0)));
    randomGenerator = rand();
    // Random number mod by 100 and add 1 to remainder
    k = (randomGenerator % 15) + 1;
    string c;
    c=list[k];
    string original_c=c;
    for(j=0; (unsigned)j<c.length();j++)
            {
                if(c[j]=='a' || c[j]=='e' || c[j]=='i' || c[j]=='o' || c[j]=='u')
                    c[j]='_';
            }
    int ok=1, cnt=0;
    string ans;
    while(ok==1)
    {
        cout<<"Try to guess the word: "<<c<<endl;
        cin>>s;
        if(s=="quit")
            ok=0;
        else
            if(s==original_c)
                {
                cout<<"Congratulations! You guessed the word after "<<cnt<<" tries"<<endl;
                cout<<"Do you want to play the game?"<<endl;
                cin>>ans;
                //If the players enters no or quit, the game will stop
                if(ans=="no" || ans=="quit")
                        exit(1);
                    else
                       {int randomGenerator, k;
                        srand(static_cast<unsigned int> (time(0)));
                        randomGenerator = rand();
                        // Random number mod by 100 and add 1 to remainder
                        k = (randomGenerator % 15) + 1;
                        c=list[k];
                        original_c=c;
                        for(j=0; (unsigned)j<c.length();j++)
                        {
                            if(c[j]=='a' || c[j]=='e' || c[j]=='i' || c[j]=='o' || c[j]=='u')
                                c[j]='_';
                        }
                    }}
        cnt++;
    }
    return 0;
}
