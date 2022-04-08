
#include "printArray.h"
#include "sort.h"
#include "fin.h"
#include <stdio.h>
#include <stdlib.h>

//int arr[] = {9,8,7,6,5,4,3,2,1};
//int arr[] = {45,68,98,54,17,52,6,4,6};
int arr[] = {1,155,3,45,12,14,45,2,12};

int temp = 0;     
int len = sizeof(arr)/sizeof(arr[0]);

int main(){
	system("clear");
	printf("\n\n\t***NUMBERS OF ELEMENTS PRESENT IN GIVEN ARRAY: %d***\n", len);
	
	int finIndex = fin(arr, len);
	printf("\n\tFIN HIGH VALUE: %d\t| \tFIN HIGH VALUE INDEX: %d\n", arr[finIndex], finIndex);
	
	int digits = fin(arr, len);
	printf("\n\tFIN DIGITS OF HIGH VALUE: %d\n", digits);
			
	int dg = digits;
	
	printf("\n\tORIGINAL ARRAY ELEMENTS\n");
	int Array1 = printArray(arr, len, dg);

	printf("\n\tSORT ITERATIONS\n");
	int sortArray = sort(arr, temp, len, dg);
	
	printf("\n\tSORT ARRAY ELEMENTS\n");
       	int Array2 = printArray(arr, len, dg);
       	printf("\n");
	
	return 0;
}