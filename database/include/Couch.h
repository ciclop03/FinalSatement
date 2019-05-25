#ifndef COUCH_H
#define COUCH_H

#include <Person.h>


class Couch :virtual public Person
{
    public:
        Couch(string lastname, character fighter);
        virtual ~Couch();

    protected:

    private:
};

#endif // COUCH_H
