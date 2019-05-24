#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
    public:
        Player(string nickname, string name, string lastname, string country,int age, int gender ){};
        ~Player(){};
        /// get y set para todo 12 prototipos.
        /// print datos del jugador
        string getNickname();
        string getName();
        string getLastname();
        string getCountry();
        int getAge();
        int getGender();

        void setNickname(string nickname);
        void setName(string name);
        void setLastname(string lastname);
        void setCountry(string country);
        void setAge(int age);
        void setGender (int gender);

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
