#include <stdio.h>
#include <stdlib.h>

//Find the difference between the sum of the squares of the first one hundred
//natural numbers and the square of the sum.

int main(){
  int sumOfSquares = 0;
  int squareOfSum = 0;
  for(int i = 1; i <= 100; i++){
    sumOfSquares += i * i;
    squareOfSum += i;
  }
  squareOfSum *= squareOfSum;
  int retVal = squareOfSum - sumOfSquares;
  printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum: %d\n", retVal);
}
    
