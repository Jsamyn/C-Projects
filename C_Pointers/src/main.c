/**
* Main C file to demonstrate and expirement with pointer arithmetic.
*/

#include <stdio.h>
#include <stdlib.h>

/** Constants **/

#define PROMPT "Enter in a list of numbers you would like to sort: "
#define BUFFER_SIZE 256

/** Function Protypes **/

/**
* Get numbers to sort from user
* @return the input string from the user
*/
int* get_input();

/**
* Sort an array in ascending order using insertion sort
* @param the array to sort
*/
void insertion_sort_asc(int*[]);

/**
* Print the contents of an integer array to the console
* @param arr - the array to print
* @param arr_size - size of the array
*/
void print_arr(int*, int);


/** Variables **/
int arr_size = 0;

int main() {
	printf("Hello, World\n");

	// Get user input	
	get_input();

	return 0;
}

int* get_input() {
	
	// print prompt for user
	printf("%s", PROMPT);
	
	// read user input
	char* input;
	scanf("%s", input);

	// int array to sort
	int* unsorted_arr = (int*)malloc(BUFFER_SIZE * sizeof(int));	
		
	// iterate over input string 
	int i = 0;
	while(input[i] != '\0'){
		printf("%c", input[i]);
		unsorted_arr[i] = input[i] - '0';
		i++;
	}
	
	arr_size = i;
	printf("Printing integer array... \n");
	print_arr(unsorted_arr, arr_size);	

	return unsorted_arr;
}

void print_arr(int* arr, int arr_size) {
	int i = 0;
	while(i < arr_size) {
		printf("%d", arr[i]);
		i++;
	}
}
