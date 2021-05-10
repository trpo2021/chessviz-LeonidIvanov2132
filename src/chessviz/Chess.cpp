#include <libchessviz/print.h>
#include <libchessviz/game.h>
#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
  char Chess[9][9] =
  {{'8','R','N','B','Q','K','B','N','R'},
   {'7','P','P','P','P','P','P','P','P'},
   {'6',' ',' ',' ',' ',' ',' ',' ',' '},
   {'5',' ',' ',' ',' ',' ',' ',' ',' '},
   {'4',' ',' ',' ',' ',' ',' ',' ',' '},
   {'3',' ',' ',' ',' ',' ',' ',' ',' '},
   {'2','P','P','P','P','P','P','P','P'},
   {'1','R','N','B','Q','K','B','N','R'},
   {' ','a','b','c','d','e','f','g','h'}};
   print(Chess);
  while (1)
   {
     game(Chess);
   }
   return 0;
}
