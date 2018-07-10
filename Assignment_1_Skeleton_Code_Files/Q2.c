/* CS261- Assignment 1 - Q.2*/
/* Name:Nhu Duong
 * Date: July 7th, 2018
 * Solution description:
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*********************************************************************
** Function: foo
** Description: Swap  the adresses stored by the pointer a and b and decrement c by 1
** Parameters: pointer a,b and the int c
** Pre-condition: None
** Post-condition: Return c
*********************************************************************/
int foo(int* a, int* b, int c){
    /*Swap the addresses stored in the pointer variables a and b*/
    int *temp;
    temp= a;
    a= b;
    b=temp;

    /*Decrement the value of integer variable c*/
    c= c-1;
    /*Return c*/
    return c;
}

int main(){
    /*Declare three integers x,y and z and initialize them randomly to values in [0,10] */
    int x, y, z;
    srand(time(NULL));
    x= rand()%11;
    y= rand()%11;
    z= rand()%11;


    /*Print the values of x, y and z*/
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("\n" );
    /*Call foo() appropriately, passing x,y,z as parameters*/
    int fo =foo(&x,&y,z);
    /*Print the values of x, y and z*/
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    /*Print the value returned by foo*/

    printf("The value return by foo is  %d\n", fo );


    return 0;
}

//4a, Is the return value different than the value of integer z? Why or why not?
// The return value is diffrent from the value of z because in foo function, we decrement the value of z and return it after
//4b. The value of a and b does not change. Because we only modified the adress of the pointer. Not where the pointer point to .
