/*
    CH08-320142
    a4_p3.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <string>


class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

//class of wizard
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

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
