#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "mytoc.h"

void printTokens(char **vect){

  char **tempTok = vect;
  while(*tempTok != 0){
    printf("%s\n", *tempTok);
    tempTok++;
  }
  
}

int main(){

  char *test;
  //test = "Hello my dog's name is Darwin.";
  test = "   Hello   World!   ";
  //test = "";
  //test = " ";
  //test = " HelloWorld";

  char **vect = mytoc((char *)test, ' ');
  printTokens(vect);
  
  /*
  if(write(1, "$ ", 2) != 2){
    write(2, "There was an error.\n", 20);
    return -1;
    }*/
      

}
