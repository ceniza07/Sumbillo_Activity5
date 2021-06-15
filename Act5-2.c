#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define arraySize 100

void main(){
	char string1[arraySize], string2[arraySize], temp[arraySize];
	int i = 0, j = 0;
	
	printf("Enter String 1: ");
	scanf("%s", string1);
	printf("Enter String 2: ");
	scanf("%s", string2);
	
	while(string1[i] != '\0'){
		temp[j] = string1[i];
		i++;
		j++;
	}
	
	i = 0;
	while(string2[i] != '\0'){
		temp[j] = string2[i];
		i++;
		j++;
	}
	
	temp[j] = '\0';
	
	printf("Output: %s", temp);
}
