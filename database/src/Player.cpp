#include "Player.h"
using namespace std;
/// modificar los parametros y metodos

Player::Player(string name,string lastname,int age,int gender,string nickname,string country,
               int wins,int looses,int top8s,int CPT_points,Character main_character,int tournament_wins)
    :Person(name,lastname,age,gender){

    this->nickname=nickname;
    this->country=country;
    this->wins=wins;
    this->looses=looses;
    this->top8s=top8s;
    this->CPT_points=CPT_points;
    this->main_character=main_chracter;
    this->tournament_wins=tournament_wins;
    ///INHERITANCE:
    /*

    this->name=name;
    this->lastname=lastname;
    this->gender=gender;
    this->age=age;
    */

}
Player::Player():Person(){
    this->nickname="-UNKNOWN-";
    this->country="-UNKNOWN";
    this->wins=0;
    this->looses=0;
    this->top8s=0;
    this->CPT_points=0;
    this->main_character=C_001_RYU;
    this->tournament_wins=0;
    /*
    this->name0="-UNKNOWN-";
    this->lastname="-UNKNOWN-";
    this->gender="-UNKNOWN-(F or M)";
    this->age="-UNKNOWN-";
    */
}
int guess_result(player a, player b){
    return;
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
    return wins;
}
int Player::getLooses(){
    return looses;
}
int Player::getTop8s(){
    return top8s;
}
int Player::getCPTpoints(){
    return CPTpoints;
}
Character Player::getMain_character(){
    return main_character;
}
int Player::getTournament_wins(){
    return tournament_wins;
}

///-----SETS------

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
void Player::setWins(int wins){
    this->wins =wins;
}
void Player::setLooses(int looses){
    this->looses=looses;
}
void Player::setTop8s(int top8s){
    this->top8s=top8s;
}
void Player::setCPTpoints(int CPTpoints){
    this->CPTpoints=CPTpoints;
}
void Player::setMain_haracter(Character main_character){
    this->main_character=main_character;
}
void Player::setTournament_wins(int tournament_wins){
    this->tournament_wins=tournament_wins;
}
Player::~Player()
{
    //dtor
}
