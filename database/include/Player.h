#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player : virtual public Person /**llamaremos al consturctor de persona
                                    que seteara age, lastname, name y gender.*/
{
    friend ArrayGlobal;
    public:

        Player(string nickname, string name, string lastname, string country,int age, int gender );
        virtual ~Player();

        /// get y set para todo 12 prototipos.
        /// print datos del jugador
        string getNickname();
        string getCountry();


        void setNickname(string nickname);
        void setCountry(string country);



    protected:

    private:

        int wins;
        int looses;
        int top8times;
        int CPT_points;
        character fighter;
        int firsplacewins;
        string nickname;
        string country;



};

#endif // PLAYER_H
