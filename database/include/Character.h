#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
//#include <Person.h>


class Character // public Person
{
    public:
        Character();
        Character(int damage, int hit_points, int defense_opt, int stunt, int attack_range, int projectile);
        ~Character();
        int total_value();

    protected:




    private:
        //      string namee;
        ///valores del 1 al 10
        int damage;
        int hit_points;
        int defense_opt;
        int stunt;
        int attack_range;
        int projectile;

};

#endif // CHARACTER_H
