/*
 ============================================================================
 Name        : Hello.c
 Author      : sean
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



void printPrompt() {
	printf("Pick a number 1-10: \n");
}
int main(void) {

	printPrompt();
	int num;//number picking

	scanf("%d", &num);




	return EXIT_SUCCESS;
}
