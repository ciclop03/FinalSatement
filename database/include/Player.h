#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <Character.h>

using namespace std;

class Player : virtual public Person { /**llamaremos al consturctor de persona;
                                    que seteara age, lastname, name y gender.*/

    friend class ArrayGlobal;
    public:


        Player(string nickname, string name, string lastname, string country,int age, int gender,
               int wins, int looses, int top8s, int CPT_points, Character main_character, int tournament_wins);
       /// HEADRE?
       // : Person(name, lastname, age, gender);

        Player();
        virtual ~Player();

        /// get y set para todo 12 prototipos.
        /// print datos del jugador
        string getNickname();
        string getCountry();
        int getWins();
        int getLooses();
        int getTop8s();
        int getCPT_point();
        int getTournament_wins();
        Character getMain_character();


        void setNickname(string nickname);
        void setCountry(string country);
        void setWins(int wins);
        void setLooses(int looses);
        void setTop8s(int top8times);
        void setCPTpoins(int CPTpoints);
        void setMain_character(Character main_character);
        void setTournament_wins(int tournament_wins);



    protected:

    private:

        int wins;
        int looses;
        int top8s;
        int CPT_points;
        Character main_character;
        int tournament_wins;
        string nickname;
        string country;



};

#endif // PLAYER_H
