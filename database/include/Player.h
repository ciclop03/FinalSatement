#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
    public:
        Player(string nickname, string name, string lastname, string country,
               int age, int gender );
        ~Player();
        /// get y set para todo 12 prototipos.
        /// print datos del jugador



    protected:

    private:
        string nickname;
        string name;
        string lastname;
        string country;
        int age;
        int gender;

};

#endif // PLAYER_H
