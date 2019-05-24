#include "Player.h"

Player::Player(string nickname, string name, string lastname,string country,int age, int gender ){
    this->nickname = nickname;
    this->name = name;
    this->lastname = lastname;
    this->country = country;
    this->age=age;
    this->gender=gender;
}
Player::getNickname(){
    return this->nickname;
}
Player::getName();{
    return this->name;
}
Player::getLastname(){
    return this->lastname;
}
Player::getCountry(){
    return this->country;
}
Player::getAge(){
    return this->age;
}
Player::getGender(){
    return this->gender;
}

Player::setNickname(string nickname){
    this->nickname = nickname;
}
Player::setName(string name){
    this->name = name;
}
Player::setLastname(string lastname){
    this->lastname = lastname;
}
Player::setCountry(string country){
    this->country = country;
}
Player::setAge(int age){
    this->age = age;
}
Player::setGender (int gender){
    this->gender = gender;
}

Player::~Player()
{
    //dtor
}
