#ifndef COMMENTATOR_H
#define COMMENTATOR_H

#include <Person.h>


class Commentator : public Person
{
    public:
        Commentator(int votes, string country);
        virtual ~Commentator();

    protected:

    private:
};

#endif // COMMENTATOR_H
