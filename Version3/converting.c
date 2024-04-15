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

Revision		: 3.0.5
Version 		: 3

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
	/*// v1
	//============================================================================
	
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
	printf("*** End of Converting String to int Demo ***\n\n");*/
	
	
	//V2
	//============================================================================
	
	/*//
	// Print the boot message of the program. 
	printf("*** Start of Converting String to double Demo ***\n");

	//
	// Declare a variable in the chacater array with the length of the buffer size.	
	char doubleString[BUFFER_SIZE];
	
	//
	// Define a double variable
	double doubleNumber;
	
	//
	// Used "do while" to ensure at least one input by the user
	//	
	do
	{
		// Display mesage to accept an not empy strig
		printf("Type an double numeric String (q - to quit):\n");
		
		//
		// Accept user input with length of BUFFER_SIZE
		fgets(doubleString, BUFFER_SIZE, stdin);
		
		//
		// Define the last buffer NULL value 		
		doubleString[strlen(doubleString) - 1] = '\0';
		
		//
		// Check and allow users if they are not entered by zero
		if (strcmp(doubleString,"q") != 0)
		{
			// Use C library function to converts a string to an double
			doubleNumber = atof(doubleString);
			
			// Print converted number
			printf("Converted number is %f\n", doubleNumber);
		}
	}
	// Continue the program until the user presses 'q'
	while(strcmp(doubleString, "q") != 0);
	
	printf("*** End of Converting String to double Demo ***\n\n");
	*/
	
	//V3
	//=====================================================================================
	//
	// Print the end message of the program. 
	
	
	// Print the boot message of the program. 
	printf("*** Start of Converting String to long Demo ***\n");

	//
	// Declare a variable in the chacater array with the length of the buffer size.	
	char longString[BUFFER_SIZE];
	
	//
	// Define a double variable
	long longNumber;
	
	//
	// Used "do while" to ensure at least one input by the user
	//	
	do
	{
		// Display mesage to accept an not empy strig
		printf("Type an long numeric String (q - to quit):\n");
		
		//
		// Accept user input with length of BUFFER_SIZE
		fgets(longString, BUFFER_SIZE, stdin);
		
		//
		// Define the last buffer NULL value 		
		longString[strlen(longString) - 1] = '\0';
		
		//
		// Check and allow users if they are not entered by zero
		if (strcmp(longString,"q") != 0)
		{
			// Use C library function to converts a string to an long
			longNumber = atof(longString);
			
			// Print converted number
			printf("Converted number is %ld\n", longNumber);
		}
	}
	// Continue the program until the user presses 'q'
	while(strcmp(longString, "q") != 0);
	
	//
	// Print the end message of the program. 
	printf("*** End of Converting String to in Demo ***\n\n");
	
	
}

// End Program 