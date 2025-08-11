#include <stdio.h>

int main() {
  int myNum = 15;
  
  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNum = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d", myNum);
  
  return 0;


  //Method 2
  // Create a variable and assign the value 15 to it
int myNum1 = 15;

// Declare a variable without assigning it a value
int myOtherNum1;

// Assign the value of myNum to myOtherNum
myOtherNum1 = myNum1;

// myOtherNum now has 15 as a value
printf("%d", myOtherNum1);
}