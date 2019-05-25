#ifndef PERSON_H
#define PERSON_H


class Person
{
    public:
        Person(string name, string lastname, int gender, int age);
        virtual ~Person();

        void setName(string name);
        void setLastname(string lastname);
        void setAge(int age);
        void setGender (int gender);

        string getName();
        string getLastname();
        int getAge();
        int getGender();

    protected:
        string name;
        string lastname;
        int age;
        int gender;

    private:


};

#endif // PERSON_H
