/*
 ============================================================================
 Name        : q1.c
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
	int flag=0,limit;
	int i,j,k;
	printf("Enter the size for array");
	scanf("%d",&limit);
	int arr[limit];
	printf("Enter the values for array");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<limit;i++){
		flag=0;
		for(j=1;j<=arr[i];j++){
			if(arr[i]%j==0){
				flag++;
			}
		}
		if(flag==2){
			for(k=1;k<limit-2;k++){
				arr[k]=arr[k+2];
			}
			if(i+2<limit){
				limit=limit-2;
			}else{
				limit=i+1;
			}
		}
	}
	for(i=0;i<limit;i++){
		printf("%d",arr[i]);
	}
	return EXIT_SUCCESS;
}
