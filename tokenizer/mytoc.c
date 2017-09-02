#include "mytoc.h"

/* Counts the number of given tokens. */
char getTokNum(char *str, char delim){

  char numToks = 0;
  char state = 0;
  char i;
  char *temp = str;
  while(i = *temp){
    if(state == 0){
      if(i != delim){
	numToks++;
	state = 1;
      }
      temp++;
    }
    else{
      if(i == delim)
	state = 0;
      temp++;
    }
  }

  return numToks;
  
}

char *fillTokVec(char *str, char delim, char *tokVec[], char numToks){

  char len = 0;
  char state = 0;
  char toksLeft = numToks;
  char i;
  char j;
  char *temp = str;
  char *tok;
  while(i = *temp && toksLeft > 0){
    if(state == 0){
      if(i != delim){
	len++;
	state = 1;
      }
      temp++;
    }
    else{
      if(i == delim){
	tok = malloc(len+1);
	for(j=0; j<len; j++){
	  tok[j] = temp[j-len];
	}
	tok[len] = 0;
	tokVec[numToks-toksLeft] = tok; /*Left off here trying to put toks in tokVec*/
	toksLeft--;
	len = 0;
	state = 0;
      }
      else
	len++;
      temp++;
    }
  }
  tokVec[numToks] = 0;
}
