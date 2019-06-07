#include "Person.h"

#include <string>
using namespace std;

Person::Person(string name, string lastname, int age, int gender)
{
    this->name = name;
    this->lastname = lastname;

    this->age=age;
    this->gender=gender;
}
Person::Person(){
    this->name="-UNKNOWN-";
    this->gender=1;
    this->age=-1;
    this->lastname= "-UNKNOWN-";
}
string Person::getName(){
    return this->name;
}
string Person::getLastname(){
    return this->lastname;
}

int Person::getAge(){
    return this->age;
}
int Person::getGender(){
    return this->gender;
}

void Person::setName(string name){
    this->name = name;
}
void Person::setLastname(string lastname){
    this->lastname = lastname;
}

void Person::setAge(int age){
    this->age = age;
}
void Person::setGender (int gender){
    this->gender = gender;
}

Person::~Person()
{
    //dtor
}

