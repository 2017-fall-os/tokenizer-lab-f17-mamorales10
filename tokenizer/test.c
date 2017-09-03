#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "mytoc.h"

int main(){

  if(write(1, "$ ", 2) != 2){
    write(2, "There was an error.\n", 20);
    return -1;
  }
      

}
