#ifndef ARRAYGLOBAL_H
#define ARRAYGLOBAL_H
//template <class T>
#include <Player.h>
///esta accede a todo jugador.

class ArrayGlobal //: public Player
{
    public:
        ArrayGlobal();
        ArrayGlobal(unsigned int size_, int *data);
       // ArrayGlobal(unsigned int size_, string *data);
        ~ArrayGlobal();

        void insertIn(auto x);
        void deleteIn(int pos);
        void insertEnd(auto x);

        ///prototipo de ordenar
        ///prototipo de print
        void printArray();


    protected:
        unsigned int size_;
        int *data;

    private:
        void re_size_(int new_size_);


};

#endif // ARRAYGLOBAL_H
