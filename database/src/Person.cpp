#include "Person.h"
#include <string>
using namespace std;

Person::Person(string name, string lastname, int gender, int age)
{
    this->name = name;
    this->lastname = lastname;

    this->age=age;
    this->gender=gender;
}

string Player::getName(){
    return this->name;
}
string Player::getLastname(){
    return this->lastname;
}

int Player::getAge(){
    return this->age;
}
int Player::getGender(){
    return this->gender;
}

void Player::setName(string name){
    this->name = name;
}
void Player::setLastname(string lastname){
    this->lastname = lastname;
}

void Player::setAge(int age){
    this->age = age;
}
void Player::setGender (int gender){
    this->gender = gender;
}

Person::~Person()
{
    //dtor
}
