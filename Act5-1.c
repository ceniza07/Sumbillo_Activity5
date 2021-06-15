#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define arraySize 5

void main(){
	char array[arraySize][50], temp[30];
	int i, x, y, z;
	
	printf("Enter 5 strings: \n");
	
	for(i = 0; i < arraySize; i++){
		scanf("%s", &array[i]);
	}
	
	for(x = 0; x < (arraySize - 1); x++){
		for(y=0; y < (arraySize - 1); y++){
			if(strcmp(array[y], array[y+1]) > 0){
				strcpy(temp, array[y]);
        		strcpy(array[y], array[y+1]);
        		strcpy(array[y+1], temp);
			}
		}
	}
	printf("\nSorted strings in ascending order:\n");
	for(z = 0; z < arraySize; z++){
		printf("%s ", array[z]);
		printf("\n");
	}
}
