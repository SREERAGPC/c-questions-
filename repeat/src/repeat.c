/*
 ============================================================================
 Name        : repeat.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j,a[500],size,count=0;
    setbuf(stdout,NULL);
    printf("enter the size of array");
    scanf("%d",&size);
    for(i=0;i<size;i++){
    	scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
    	for(j=i+1;j<size;j++){
    		if(a[i]==a[j]){printf("repeating number =%d",a[i]);
    		break;

    		}
    	}
    	}


	return EXIT_SUCCESS;
}
