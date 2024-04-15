/*
General Information on
===========================
Source file Name: converting.c

CONVERTINGE MODULE SOURCE
This is the source file of string converting operation

The main purpose of the file 
1. Include Macro
2. Include user-defined libraries
3. Perform the actual logic of operations. 

Credit:
Author 			: Md Ridwan Hossain 
Group Name		: Bb 4
Group Members	: Students of Seneca College
Course 			: CPR 101

Supervisor		: Professor Raymond Wong

Revision		: 1.0.5
Version 		: 1

License 		: Not Defined 

Release date	: 16 April 2024
Support			: mrkarim6@myseneca.ca
*/

// Start Program 

/*
 * Tells the compiler not to issue warnings when these unsafe functions are used. A quick fix
 * to suppress warnings without addressing the underlying issue of using unsafe functions.
 */
#define _CRT_SECURE_NO_WARNINGS

//
// Define a macro for the input buffer array size.
#define BUFFER_SIZE 80

//
// Include the user-defined header file.
#include "converting.h"

/*
 * Method Purpose     : The function finds a character opsition in a string.
 * Input peerameter : None 
 * Output peerameter: None
 */
void converting(void)
{
	//
	// Print the boot message of the program. 
	printf("*** Start of Converting String to init Demo ***\n");

	//
	// Declare a variable in the chacater array with the length of the buffer size.	
	char intString[BUFFER_SIZE];
	
	//
	// Define a integer variable
	int intNumber;
	
	//
	// Used "do while" to ensure at least one input by the user
	//	
	do
	{
		// Display mesage to accept an not empy strig
		printf("Type an int numeric String (q - to quit):\n");
		
		//
		// Accept user input with length of BUFFER_SIZE
		fgets(intString, BUFFER_SIZE, stdin);
		
		//
		// Define the last buffer NULL value 		
		intString[strlen(intString) - 1] = '\0';
		
		//
		// Check and allow users if they are not entered by zero
		if (strcmp(intString,"q") != 0)
		{
			// Use C library function to converts a string to an integer
			intNumber = atoi(intString);
			
			// Print converted number
			printf("Converted number is %d\n", intNumber);
		}
	}
	// Continue the program until the user presses 'q'
	while(strcmp(intString, "q") != 0);
	
	//
	// Print the end message of the program. 
	printf("*** End of Converting String to in Demo ***\n\n");
}

// End Program 