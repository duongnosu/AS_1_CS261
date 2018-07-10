/* CS261- Assignment 1 - Q.3*/
/* Name: Nhu Duong
 * Date: Julry 8th, 2018
 * Solution description:
 */

#include <stdio.h>
#include <stdlib.h>

/*********************************************************************
** Function: toUpperCase
** Description:Convert ch to upper case, assuming it is in lower case currently
** Parameters: char
** Pre-condition: none
** Post-condition: return the ch with Upper case
*********************************************************************/

char toUpperCase(char ch){
  /*Convert ch to upper case, assuming it is in lower case currently*/
  if (97<=ch && ch <= 122){
	  ch = ch -32;
  }
  return ch;
}

/*********************************************************************
** Function: toLowerCase
** Description:Convert ch to lower case, assuming it is in upper case currently
** Parameters: char
** Pre-condition: None
** Post-condition: return ch in lower case
*********************************************************************/
char toLowerCase(char ch){
  /*Convert ch to lower case, assuming it is in upper case currently*/
	if (65<= ch && ch <=90){
		ch = ch + 32;
	}
	return ch;
}

/*********************************************************************
** Function: stringLength
** Description:Return the length of the string
** Parameters: array of character s
** Pre-condition: None
** Post-condition: length
*********************************************************************/
int stringLength(char s[]) {
   /*Return the length of the string*/
   int length=0;
   while (s[length] != '\0'){
	   length++;

   }
   return length;
}

/*********************************************************************
** Function: camelCase
** Description:Convert to camelCase
** Parameters: pointer word type char pointer
** Pre-condition: The functions convert lettter defived above  work
** Post-condition: None 
*********************************************************************/
void camelCase(char* word){
	/*Convert to camelCase*/
}

int main(){
	printf("Input a char  \n" );
	char s[256];
	scanf("%s", s );
	int x;
	x= stringLength(s);
	// char u;
	// u = toUpperCase(s);
	printf("Result %d\n", x );
	/*Read the string from the keyboard*/


	/*Call camelCase*/


	/*Print the new string*/


	return 0;
}
