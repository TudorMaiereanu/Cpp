/*
    CH08-320142
    a4_p2.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>



using namespace std;

class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

//class of wizard
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n"<<endl;
}

//class of archer
class Archer : public Creature{
    public:
        Archer();
        Archer(int newStrength);
        ~Archer();
        void range();

    private:
        int strengthFactor;
};

Archer::Archer() : strengthFactor(4){
    cout<<"Creating Archer"<<endl;
}

Archer::Archer(int newStrength){
    strengthFactor=newStrength;
    cout<<"Giving strength to the Archer"<<endl;
}

Archer::~Archer(){
    cout<<"Deconstruction of Archer"<<endl;
}

void Archer::range(){
    cout<<"The Archer has a range of "<<(distance*strengthFactor)<<" meters."<<endl;
}

//class of Soldier
class Soldier : public Creature{
    public:
        Soldier();
        Soldier(int newResistance);
        ~Soldier();
        void fight();

    private:
        int resistanceFactor;
};

Soldier::Soldier() : resistanceFactor(2){
    cout<<"Creating Soldier"<<endl;
}

Soldier::Soldier(int newResistance){
    resistanceFactor=newResistance;
    cout<<"Giving resistance to the Soldier"<<endl;
}

Soldier::~Soldier(){
    cout<<"Deconstruction of Soldier"<<endl;
}

void Soldier::fight(){
    cout<<"The Soldier can fight for "<<(distance*resistanceFactor)<<" meters."<<endl;
}


int main()
{
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout<<"\nCreating an Archer"<<endl;
    Archer a(5);
    a.run();
    a.range();

    cout<<"\nCreating a Soldier"<<endl;
    Soldier s(2);
    s.run();
    s.fight();

    return 0;
}
