#include<stdio.h>
#include <string.h>

void printResult(char str[]);
//The purpose of this program is to grab command line input
//and then print out whether the input is valid or not.
//assumes that the user puts a dash(as shown in the lab document)
//before the input


//grabs strings from the command line and also 
//counts how many string arguments are input determined by spaces between them
int main(int argc, char* argv[])
{
	
	if(argc >= 2){
	printResult(argv[1]);
	}
	else{
	printf("No argument supplied\n");
	}
	
	return 0;
}
//This function's purpose is to take the command line argumennts from main 
//and print out wether an argument is valid or not
void printResult(char str[]){

//grabs the length of the character array
int size =(int)strlen(str);

int i;
	//checks for the '-'
	if(size > 1){
		
		//for loop runs through the character array until it hits the size
		for(i = 1; i < size; i++ ){
			//switch for the cases that should print out the argument
			//could have been done with an if statement too	
			switch(str[i]){
			case 'a':
				printf("Argument %c called\n", str[i]);
				break;
			case 'A':
				printf("Argument %c called\n", str[i]);
				break;
			case 'b':
				printf("Argument %c called\n", str[i]);
				break;
			case 'x':
				printf("Argument %c called\n", str[i]);
				break;
			case 'v':
				printf("Argument %c called\n", str[i]);
				break;
			case 'z':
				printf("Argument %c called\n", str[i]);
				break;
			case 'R':
				printf("Argument %c called\n", str[i]);
				break;
			default:
				printf("Invalid argument - %c\n",str[i]);
				break; 	
			}			
		}
	
	}else{
		printf("No argument supplied\n");
	}
}

