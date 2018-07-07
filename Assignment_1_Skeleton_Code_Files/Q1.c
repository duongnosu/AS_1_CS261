/* CS261- Assignment 1 - Q.1*/
/* Name:Nhu Duong
 * Date: July 6th, 2018
 * Solution description:
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct student{
	int id;
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
     return (stuct student*) malloc(sizeof(struck student)*10);
     /*Return the pointer*/

}


void generate(struct student* students){
     /*Generate random and unique IDs and random scores for ten students,
     IDs being between 1 and 10, scores between 0 and 100*/

          int theid;
          theid = rand()%10 +1;
          int arrayid[9];
          for (int k=0; k<10; k++){
               arrayid[k]=0;
          }
          while (int j<10){

          }


     }
     for (int i=0; i<10; i++){
          int theid;
          theid = rand()%10 +1;
          //Still working on this
          students[i].id = rand()%10 +1;
          students[i].score = rand()%101;
     }
}

void output(struct student* students){
     /*Output information about the ten students in the format:
              ID1 Score1
              ID2 score2
              ID3 score3
              ...
              ID10 score10*/
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the
ten students*/

}

void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
}

int main(){
     srand(time(NULL));
    struct student* stud = NULL;

    /*Call allocate*/

    /*Call generate*/

    /*Call output*/

    /*Call summary*/

    /*Call deallocate*/

    return 0;
}
