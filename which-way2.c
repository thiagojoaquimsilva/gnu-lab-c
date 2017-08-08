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
   escape();
}

void web()
{
  do{
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
   }
   while(look() == Web);
   right();
   while(look() == Void){
   forward();
   }
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
}