#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "mytoc.h"

/* Prints the tokens in the vector */
void printTokens(char **vect){

  char **tempTok = vect;
  while(*tempTok != 0){
    printf("%s\n", *tempTok);
    tempTok++;
  }
  
}

/* Checks if input equals exit */
char isExit(char *str){

  char exit[] = "exit";
  int i;

  for(i = 0; str[i] == exit[i]; i++){
    if(str[i] == '\0')
      return 1;
  }
  
  return 0;
  
}

/* Receives string and replaces '\n' with 0 */
void getString(char* s, int limit){

  char *p = s;
  char c;
  fgets(s, limit, stdin);
  while((c = *p) && (c != '\n'))
    p++;
  if(c == '\n')
    *p = 0;
  
}

int main(){

  char buff[200];
  char **vect;

  char *testArray[5];
  testArray[0] = "Hello my dog's name is Darwin.";
  testArray[1] = "   Hello   World!   ";
  testArray[2] = "";
  testArray[3] = " ";
  testArray[4] = " HelloWorld";
  
  /* The following for loop goes through the test cases. */
  char i;
  for(i = 0; i < 5; i++){
    vect = mytoc((char *)testArray[i], ' ');
    printTokens(vect);
    free(vect);
  }
  /*This is the end of the test cases.*/
  
  if(write(1, "$ ", 2) != 2){
    write(2, "There was an error.\n", 20);
    return -1;
  }

  getString(buff, 200);
  
  while(!isExit(buff)){
  
    vect = mytoc((char *)buff, ' ');
    printTokens(vect);
    free(vect);

    if(write(1, "$ ", 2) != 2){
      write(2, "There was an error.\n", 20);
      return -1;
    }
    getString(buff, 200);
  
  }
  
  printf("Program Ended\n");    

}
