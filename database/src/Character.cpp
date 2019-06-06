#include "Character.h"

Character::Character(){
this-> hit_points=0;
this -> stunt=0;
this->damage=0;
this->defense_opt=0;
this->projectile=0;
this->attack_range=0;
}
Character::Character(int damage, int hit_points, int defense_opt, int stunt, int attack_range, int projectile ){
this-> hit_points=hit_points;
this -> stunt=stunt;
this->damage=damage;
this->defense_opt=defense_opt;
this->projectile=projectile;
this->attack_range=attack_range;
}


///--------------------------------------------------------------------------------------------------------------------

int Character::total_value(){
    return hit_points+ stunt+ damage+ defense_opt+projectile+attack_range;
}

Character::~Character()
{
    //dtor
}
