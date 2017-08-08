#include "robot.h"

void web();
void run();

void ant()
{
  forward();
  left();
  while(look() == Void){
   forward();
   }
  if (look() == Web)
      web();
  if (look() == Void)
      run();
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
   else{
   while(look() == Void){
   forward();
   }
   }
   right();
   while(look() == Void){
   forward();
   }
   escape();
}

void run()
{
   while(look() == Void){
   forward();
   }
   right();
   while(look() == Void){
   forward();
   }
   if (look() == Web)
   web();
   escape();     
}