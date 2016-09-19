#include <stdio.h>
#include <stdlib.h>

//Problem#1
int Multiples(){
  int sum = 0;
  int count;
  while (count < 1000){
    if ((count % 3 == 0) || (count % 5 == 0)){
      sum += count;
    }
    count++;
  }
  return sum;
}
    
  

//Problem#5
int smallestMultiple(){
  int x = 1;
  int answer;
  while (x < 21){
    if (answer % x == 0) x++;
    else {
      x = 1;
      answer++;
    }
  }
  return answer;
}

int main(){
  printf("Sum of all the multiples of 3 or 5 below 1000 is %d\n", Multiples());
  printf("The smallest positive number that is evenly divisible by all the numbers from  1 to 20 is %d\n", smallestMultiple());
}
