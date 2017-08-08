#include "robot.h"

void ant()
{
   for(int a=0; a<2; a++){
   while (look() == Void) {
       forward();
    }
    left(); 
    }
    for(int a=0; a<2; a++){
   while (look() == Void) {
       forward();
    }
    right(); 
    }
     while (look() == Void) {
       forward();
    }
    escape();
}
