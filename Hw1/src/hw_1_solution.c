/*********************************************************************
 * Program: This is solution for Homework#1
 *
 * Programmer: John Doe
 * Date:       1/1/2016
 * Modified:   1/3/2016 - changed some tabs between the stars
 * Known Issues: None
 * 
 * All solutions have been put in one file to minimize number of files
 *
 * @author bineetsharma
 * @version 1.0
 * @since   01-11-2016
 *********************************************************************/
#include <stdio.h>

/*********************************************************************
 Function: main()
 input:   not used
 argc - an int, shows how many element are there in argv array
 argv - an array of character strings.
 return: an integer.  0 if successful
 
 Desription: This function simply uses printf() function for all assignment.
 *********************************************************************/
int main(int argc, char *argv[]){
    
    /**
     * Homework#1.2 Here is the demo for printing
     * “Welcome to the class of C Beginners” on the screen
     *
     *
     */
 	printf("Welcome to the class of C Beginners\n");
    
    /**
     * What would you need to change if I asked you to display “Welcome” 
     * in one line and “to the class of C Beginners” in another line?  
     * Try it. Hint: what do you think \n is doing? Try putting \n in other 
     * parts of the sentence and see what happens.
     *
     * There are two ways to do it
     *
     * First way is to put new line character (\n) after Welcome
     */
	
    printf("Welcome\nto the class of C Beginners\n");
    
    /**
     * Second way would be to write two different printf statements
     */
    
    printf("Welcome\n");
    printf("to the class of C Beginners\n");

    /**
     * Homework#1.3 You only have seen printf function in C as of today.  
     * Modify the code in 1.2 so that it displays the HELLO as shown below.
     * The printf() prints stars in each line as outlined in the requirement to display the art
     */
    
    printf("***       ***	********	***        ***              ***\n");
    printf("***       ***	*** 		*** 	   ***          ***     ***\n");
    printf("***       ***	***         ***        ***          ***     ***\n");
    printf("*************	********	***        ***          ***     ***\n");
    printf("***       ***	***         ***	       ***          ***     ***\n");
    printf("***       ***	***         ***        ***          ***     ***\n");
    printf("***       ***	********	********   ********         ***\n");
    
    
    /**
     *
     * Homework#1.4 Modify the code in 1.3 so that it displays the HELLO as shown below
     *
     */
    
    printf("--------------------\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("|                  |\n");
    printf("--------------------\n");
    
    return 0;
}
