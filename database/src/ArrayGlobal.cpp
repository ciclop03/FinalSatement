#include "ArrayGlobal.h"

ArrayGlobal::ArrayGlobal(unsigned int size_, int *data){
    this ->size_=size_;
    this ->data = new int [size_];
    for (int i=0; i<size_;i++){
        this->data[i]=data[i];
    }
}

ArrayGlobal::~ArrayGlobal()
{
    //dtor
}
