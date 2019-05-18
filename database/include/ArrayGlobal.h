#ifndef ARRAYGLOBAL_H
#define ARRAYGLOBAL_H

#include <Player.h>


class ArrayGlobal : public Player
{
    public:
        ArrayGlobal(unsigned int size_, int *data);
        ArrayGlobal(unsigned int size_, string *data);
        ~ArrayGlobal();

        ///prototipo de ordenar
        ///prototipo de print


    protected:

    private:
        unsigned int size_;
        int *data;
};

#endif // ARRAYGLOBAL_H
