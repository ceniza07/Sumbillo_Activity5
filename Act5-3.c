#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	char string[30];
	int size, x, vowel = 0, consonant = 0, num = 0, specialChar = 0;
	
	printf("Enter string: ");
	fgets(string, sizeof(string), stdin);
	
	for(x = 0; x <= string[x] != '\0'; x++){
		if(string[x] == 'a' || string[x] == 'e' || string[x] == 'i' || string[x] == 'o' || string[x] == 'u' ||
		string[x] == 'A' || string[x] == 'E' || string[x] == 'I' || string[x] == 'O' || string[x] == 'U'){
			vowel++;
		} else if((string[x] >= 'a' && string[x] <= 'z')|| (string[x] >= 'A' && string[x] <= 'Z')){
			consonant++;
		} else if(string[x] >= '0' && string[x] <= '9'){
			num++;
		} else{
			specialChar++;
		}
	}
	
	printf("\nVowels: %d\n", vowel);
	printf("Consonants: %d\n", consonant);
	printf("Numbers: %d\n", num);
	printf("Special Characters: %d", specialChar);
}
