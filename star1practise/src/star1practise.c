/*
 ============================================================================
 Name        : star1practise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	for(int row=1;row<=5;row++){
		 for(int space=1;space<row;space++){
			 printf("  ");
		 }
					 for(int col=5;col>=row;col--){
						 printf("*");
					 }printf("\n");

		 }
	for(int row=2;row<=5;row++){
		for(int space=5;space>row;space--){
			printf("  ");
		}for(int col=1;col<=row;col++){
			printf("*");
		}printf("\n");
	}

	return EXIT_SUCCESS;
}
