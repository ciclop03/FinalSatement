#include "Player.h"
using namespace std;
/// modificar los parametros y metodos

Player::Player(string nickname,string country,int wins, int looses,int top8s, int CPT_points,
                Character main_chracter,int tournament_wins ):Person(name,lastname,gender,age){

    this->nickname=nickname;
    this->country=country;
    this->wins=wins;
    this->looses=looses;
    this->top8s=top8s;
    this->CPT_points=CPT_points;
    this->main_character=main_chracter;
    this->tournament_wins=tournament_wins;
    ///INHERITANCE:
    this->name=name;
    this->lastname=lastname;
    this->gender=gender;
    this->age=age;
}
int probabilityOfWinning(player a, player b){
}

string Player::getNickname(){
    return this->nickname;
}
/*string Player::getName(){
    return this->name;
}
string Player::getLastname(){
    return this->lastname;
}
*/
string Player::getCountry(){
    return this->country;
}
int Player::get
/*
int Player::getAge(){
    return this->age;
}
int Player::getGender(){
    return this->gender;
}
*/
int Player::getWins(){
    return this->wins;
}
int Player::getLooses(){
    return this->looses;
}
int Player::getTop8s(){
    return this->top8s;
}
int




void Player::setNickname(string nickname){
    this->nickname = nickname;
}
/*
void Player::setName(string name){
    this->name = name;
}
void Player::setLastname(string lastname){
    this->lastname = lastname;
}
*/
void Player::setCountry(string country){
    this->country = country;
}
/*
void Player::setAge(int age){
    this->age = age;
}
void Player::setGender (int gender){
    this->gender = gender;
}
*/
Player::~Player()
{
    //dtor
}
