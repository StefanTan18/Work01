#include <stdio.h>
#include <stdlib.h>

//Finds the smallest positive number that is evenly divisible by all the numbers
//from 1 to 20.

//0 = false, 1 = true
int isDvisible(int num){
  for (int i = 1; i <= 20; i++){
    if(num % i != 0)
      return 0;
  }
  return 1;
}
    
int main(){
  int retVal = 21;
  while (isDvisible(retVal) == 0)
    retVal++;
  printf("The smallest positive number that is even divisible by all the numbers from 1 to 20: %d\n", retVal);
}

  
    
