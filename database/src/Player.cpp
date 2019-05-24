#include "Player.h"

Player::Player(string nickname, string name, string lastname,string country,int age, int gender ){
    this->nickname = nickname;
    this->name = name;
    this->lastname = lastname;
    this->country = country;
    this->age=age;
    this->gender=gender;
}
string getNickname(){
    return this->nickname;
}
string getName();{
    return this->name;
}
string getLastname(){
    return this->lastname;
}
string getCountry(){
    return this->country;
}
int getAge(){
    return this->age;
}
int getGender(){
    return this->gender;
}

void setNickname(string nickname){
    this->nickname = nickname;
}
void setName(string name){
    this->name = name;
}
void setLastname(string lastname){
    this->lastname = lastname;
}
void setCountry(string country){
    this->country = country;
}
void setAge(int age){
    this->age = age;
}
void setGender (int gender){
    this->gender = gender;
}

Player::~Player()
{
    //dtor
}
