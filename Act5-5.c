#include<stdio.h>
#include<math.h>

void main(){
	int x, y, row, col, a[20][20], b[20][20], total[20][20];
	
	printf("Enter number of rows: ");
	scanf("%d", &row);
	printf("Enter number of columns: ");
	scanf("%d", &col);
	
	printf("Enter elements for first matrix:\n");		//first element
	for(x = 0; x < row; x++){
		for(y = 0; y < col; y++){
			printf("Element %d / %d: ", x + 1, y + 1);
			scanf("%d", &a[x][y]);
		}
	}
	
	printf("\nEnter elements for second matrix:\n");		//second element
	for(x = 0; x < row; x++){
		for(y = 0; y < col; y++){
			printf("Element %d / %d: ", x + 1, y + 1);
			scanf("%d", &b[x][y]);
		}
	}
	
	for(x = 0; x < row; x++){ 		//adding
		for(y = 0; y < col; y++){
			total[x][y] = a[x][y] + b[x][y];
		}
	}
	
	printf("\nSum of two matrices: \n"); 			//printing
	for(x = 0; x < row; x++){
		for(y = 0; y < col; y++){
			printf("%d \t", total[x][y]);
			if(y == col - 1){		// if column equals to 0, data must be in new line
				printf("\n");
			}
		}
	}
}
