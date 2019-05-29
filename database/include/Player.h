#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player : virtual public Person /**llamaremos al consturctor de persona
                                    que seteara age, lastname, name y gender.*/
{
    friend ArrayGlobal;
    public:


        Player(string nickname, string name, string lastname, string country,int age, int gender,
               int wins, int looses, int top8s, int CPT_points, character main_character, int tournament_wins,
                ): Person(name, lastname, age, gender);
        virtual ~Player();

        /// get y set para todo 12 prototipos.
        /// print datos del jugador
        string getNickname();
        string getCountry();
        int getWins();
        int getLooses();
        int getTop8s();
        int CPT_point();
        int getTournament_wins();
        character getMain_character();

        void setNickname(string nickname);
        void setCountry(string country);
        void setWins(int wins);
        void setLooses(int looses);
        void setTop8s(int top8times);
        void setCPTpoins(int CPTpoints);
        void setMain_character(character main_character);
        void setTournament_wins(int tournament_wins);



    protected:

    private:

        int wins;
        int looses;
        int top8s;
        int CPT_points;
        character main_character;
        int tournament_wins;
        string nickname;
        string country;



};

#endif // PLAYER_H
