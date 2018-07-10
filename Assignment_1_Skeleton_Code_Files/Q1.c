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
/*********************************************************************
** Function: allocate
** Description: create memory for the 10 students
** Parameters: None
** Pre-condition: struct student created before
** Post-condition: return the pointer point to the student
*********************************************************************/
struct student* allocate(){
     /*Allocate memory for ten students*/
     return (struct student*) malloc(sizeof(struct student)*10);
     /*Return the pointer*/

}

/*********************************************************************
** Function: array_contain
** Description: This check the array of ID if the ID already been generated so we wont have douplicated ID
** Parameters: int x which is the ID we want to check and pointer points to the array that hold ID
** Pre-condition: None
** Post-condition: Return 0 if it have not been generate, 1 if the ID has been generated.
*********************************************************************/
int array_contain(int x, int *p){
     for (int u=0; u<10; u++){
          if (p[u]== x){
               return 1;
          }
     }
     return 0;
}

/*********************************************************************
** Function: Generate
** Description: Generate unique ID and score for each students
** Parameters: students type of pointer
** Pre-condition: None
** Post-condition: Assign ID and Score for each student
*********************************************************************/
void generate(struct student* students){
     /*Generate random and unique IDs and random scores for ten students,
     IDs being between 1 and 10, scores between 0 and 100*/


          int theid;
          int count;
          int arrayid[9];
          for (int j=0; j<10; j++){
               arrayid[j] =0;
          }
          count = 0;
          theid = rand()%10 +1;
          arrayid[count]= theid;
          printf("ArrayID-  %d\n", arrayid[count] );
          count = count +1;

          while (count <10) {
               theid = rand()%10 +1;
               if(array_contain(theid, arrayid) == 0){
                    arrayid[count] = theid;
               }
               count ++;

               printf("ArrayID-  %d\n", arrayid[count-1] );
          }

          printf("\n");


          for (int i=0; i<10; i++){
               students[i].id = arrayid[i];
               printf(" student ID %d\n", students[i].id );
          }

     //      int arrayid[9];
     //      for (int k=0; k<10; k++){
     //           arrayid[k]=0;
     //      }
     //      while (int j<10){
     //
     //      }
     //
     //
     // }
     // for (int i=0; i<10; i++){
     //      int theid;
     //      theid = rand()%10 +1;
     //      //Still working on this
     //      students[i].id = rand()%10 +1;
     //      students[i].score = rand()%101;
     // }
}

/*********************************************************************
** Function: output
** Description: Print out each ID with score
** Parameters: student type pointer
** Pre-condition: None
** Post-condition: Print out information
*********************************************************************/
void output(struct student* students){
     /*Output information about the ten students in the format:
              ID1 Score1
              ID2 score2
              ID3 score3
              ...
              ID10 score10*/
}
/*********************************************************************
** Function: summary
** Description: Compute and print the minimum, maximum and average scores of the
ten students
** Parameters: student type pointer
** Pre-condition: Each student has assigned with ID and score
** Post-condition: Print out the average
*********************************************************************/
void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the
ten students*/

}

/*********************************************************************
** Function: deallocate
** Description: Deallocate memory from stud
** Parameters: student type pointer stud
** Pre-condition: None
** Post-condition: None 
*********************************************************************/
void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
}

int main(){
     srand(time(NULL));
    struct student* stud = NULL;

    /*Call allocate*/
    stud = allocate();
    /*Call generate*/
    generate(stud);
    /*Call output*/

    /*Call summary*/

    /*Call deallocate*/

    return 0;
}
