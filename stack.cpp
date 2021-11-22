#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack(){     //konstruktor
    _next= 0;
    _size = 8;
    _values = new double[_size];   
}

Stack::~Stack(){            //destruktor
    delete[] _values;           //löscht die werte in values

}

bool Stack::isEmpty(){
    if(_next == 0)
        return true;
    return false; 
    
    // einfach --> return _next == 0;
};

bool Stack::isFull(){
    if(_next == _size)
        return true;
    return false;

    // einfach  --> return (_next==_size)

}

void Stack::increase(){
     double *t = new double[_size * 2];
     for(int i = 0;i <=_size;i++ ){
         t[i] = _values[i];
     }
     _size *= 2;
     delete[] _values;
     _values = t;

}

void Stack::push(double value){
    if(isFull())
        increase();
    
    _values[_next] = value;  // wert wird in die nächste freie stelle hinzugefuegt
    _next += 1; // next ++ auch möglich??

};

void Stack::pop(){              //entfernt den letzten wert
    if(isEmpty())
        throw runtime_error("Stack ist leer");
    else
        _next -= 1;
}
float Stack::top(){             //gibt den letzten wert zurueck
    if(isEmpty())
        throw runtime_error("Stack ist leer"); 
    else
        return _values[_next-1];
}

