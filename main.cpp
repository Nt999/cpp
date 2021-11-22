#include <iostream>
#include "stack.h"

using namespace std;

int main(void) {
Stack s;


for(int i = 0; i < 100; i+=3){
s.push(i);
}

s.pop();
s.pop();
s.top();


    return 0;
}
