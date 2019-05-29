#include "Player.h"
using namespace std;
/// modificar los parametros y metodos

Player::Player(string nickname, string name, string lastname,string country,int age, int gender,
               int wins, int looses, int top8s )
:Person(name,lastname,gender,age){
    this->nickname = nickname;
    this->name = name;
    this->lastname = lastname;
    this->country = country;
    this->age=age;
    this->gender=gender;
    this->

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
}




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
