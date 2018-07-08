/* CS261- Assignment 1 - Q.3*/
/* Name:
 * Date:
 * Solution description:
 */

#include <stdio.h>
#include <stdlib.h>



char toUpperCase(char ch){
  /*Convert ch to upper case, assuming it is in lower case currently*/
  if (97<=ch && ch <= 122){
	  ch = ch -32;
  }
  return ch;
}

char toLowerCase(char ch){
  /*Convert ch to lower case, assuming it is in upper case currently*/
	if (65<= ch && ch <=90){
		ch = ch + 32;
	}
	return ch;
}

int stringLength(char s[]) {
   /*Return the length of the string*/
}


void camelCase(char* word){
	/*Convert to camelCase*/
}

int main(){
	// printf("Input a char Upper case \n" );
	// char s;
	// s= getchar();
	// char u;
	// u = toLowerCase(s);
	// printf("Result %c\n", u );

	/*Read the string from the keyboard*/


	/*Call camelCase*/


	/*Print the new string*/


	return 0;
}
