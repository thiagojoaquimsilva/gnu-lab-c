#include "robot.h"

void web();
void run();

void ant()
{
  forward();
  left();
  forward();
  forward();
  if (look() == Void){
      run();
     }
  if (look() == Web){
      web();
     }
}

void web()
{
   right();
   right();
   forward();
   forward();
   left();
   forward();
   forward();
   left();
   while(look() == Void){
   forward();
   }
   if (look() == Web)
   web();
   right();
   while(look() == Void){
   forward();
   }
   escape();
}

void run()
{
   while (look() == Void){
   forward();
   }
   right();
   while (look() == Void){
   forward();
   }  
  escape();    
}