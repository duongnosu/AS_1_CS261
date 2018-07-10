/* CS261- Assignment 1 - Q. 0*/
/* Name:Nhu Duong
 * Date: July 5th, 2010
 * Solution description:
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*********************************************************************
** Function: fooA
** Description:Print the value and address of the integer pointed to by ipt
** Parameters: iptr pointer type int pointer
** Pre-condition: None
** Post-condition: Print out the adress and values
*********************************************************************/
void fooA(int* iptr){

     /*Print the value and address of the integer pointed to by iptr*/
     printf(" The adress  that iptr point to  = %p\n", iptr);
     printf("The value of iptr = %d\n", *iptr );

     /*Increment the value of the integer pointed to by iptr by 5*/
     (*iptr)= (*iptr)+5;
     /*Print the address of iptr itself*/
     printf("The adress of iptr it self =  %p\n", &iptr );

}

/*********************************************************************
** Function: fooB
** Description:Print the value and address of the integer pointed to by ipt
** Parameters: iptr pointer type int pointer
** Pre-condition: None
** Post-condition: Print out the adress and values
*********************************************************************/
void fooB(int* jptr){

     /*Print the value and address of the integer pointed to by jptr*/
     printf(" The adress  that jptr point to  = %p\n", jptr);
     printf("The value of jptr = %d\n", *jptr );

     /*Decrement jptr by 1*/
     (*jptr) = (*jptr)-1;
     /*Print the address of jptr itself*/
     printf("The adress of jptr it self =  %p\n", &jptr );
}


int main(){
     /*Declare an integer x and initialize it randomly to a value in [0,10]
*/
    int x;
    srand(time(NULL));
    x= rand()%11; //generate random number from 0 to 10

 /*Print the value and address of x*/
    printf("The value of x is =  %d\n", x );
    printf("The address of x is @ %p\n", &x);


    /*Call fooA() with the address of x*/
    fooA(&x);

    /*Print the value of x*/
    printf("The value of x now is =  %d\n", x );
    // The value of x changed because in fooA function, we Increment the value of that the pointer points to by 5

    /*Call fooB() with the address of x*/
    fooB(&x);

    /*Print the value and address of x*/
    printf("The value of x is =  %d\n", x );
    printf("The address of x is @ %p\n", &x);
    //The value of x now if different from the previous x becaues in fooB we decrement the value of the pointer points to by 1
    // The adress of x is unchanged, because we did not do anything with the memory adress of x.
    return 0;
}
