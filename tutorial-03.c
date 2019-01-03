#include <stdio.h> 

int main(){
    int number1 = 0; // boolean(0) = false
    int number2 = 10; // boolean(everthing except 0) = true
    // integer(true) = 1
    // integer(false) = 0
    printf("10 or 0     = true or false     = %d\n",    number2 || number1); // (true or false) => true
    printf("10 and 0    = true and false    = %d\n",    number2 && number1); // (true and false) => false
    printf("10 > 0      = true              = %d\n",    number2 > number1);
    printf("10 < 0      = false             = %d\n",    number2 < number1); 
    printf("10 == 0     = false             = %d\n",    number2 == number1); 
    printf("10 != 0     = true              = %d\n",    number2 != number1); 
    printf("not 10      = not true          = %d\n",    !number2); // (not true) => false
    printf("not not 10  = not not true      = %d\n",    !!number2); // (not not true) => true
    return 0;
}