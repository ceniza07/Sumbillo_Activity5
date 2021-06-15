#include<stdio.h>
#include<math.h>

void main(){
	int array[30], size, x, max;
	
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	printf("Enter elements in array: ");
	for(x = 0; x < size; x++){
		scanf("%d", &array[x]);
	}
	
	max = array[0];
    for(x = 1; x < size; x++){          
		if(max < array[x])
		    max = array[x];       
    }
    printf("Largest element of array is : %d", max);
    printf("\n");
}
