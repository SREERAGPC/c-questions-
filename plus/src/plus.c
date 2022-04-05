/*
 ============================================================================
 Name        : plus.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,col;
	for(row=1;row<11;row++){
		for(col=1;col<=11;col++){
			if((col==5)||(row==5)){
				printf("+ ");
			}
			else{
				printf("  ");
			}
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
