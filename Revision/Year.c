#include <stdio.h>  // Include the standard input/output header file.
int main(){
   int monno;  // Declare a variable to store the input month number.

   printf("Input Month No : ");  // Prompt the user to input a month number.
   scanf("%d",&monno);  // Read and store the input month number.

   switch(monno)  // Start a switch statement based on the input month number.
   {
	case 1:
	       printf("January\n");  // Print "January" for input month number 1.
	       break;
	case 2:
	       printf("February\n");  // Print "February" for input month number 2.
	       break;
	case 3:
	       printf("March\n");  // Print "March" for input month number 3.
	       break;
	case 4:
	       printf("April\n");  // Print "April" for input month number 4.
	       break;
	case 5:
	       printf("May\n");  // Print "May" for input month number 5.
	       break;
	case 6:
	       printf("June\n");  // Print "June" for input month number 6.
	       break;
	case 7:
	       printf("July\n");  // Print "July" for input month number 7.
	       break;
	case 8:
	       printf("August\n");  // Print "August" for input month number 8.
	       break;
	case 9:
	       printf("September\n");  // Print "September" for input month number 9.
	       break;
	case 10:
	       printf("October\n");  // Print "October" for input month number 10.
	       break;
	case 11:
	       printf("November\n");  // Print "November" for input month number 11.
	       break;
	case 12:
	       printf("December\n");  // Print "December" for input month number 12.
	       break;
	default:
	       printf("Invalid Month number. \nPlease try again ....\n");  // Print a message for an invalid input.
	       break;
      }
}