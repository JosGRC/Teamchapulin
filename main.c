#include "./max.h"
#include "./min.h"
#include "./odd.h"
#include "./find.h"
#include <stdio.h>
#include <stdlib.h>

int arr[] = {34,65,32,65,9,3};
int len = sizeof(arr)/sizeof(arr[0]);    
int look = 65;

int main(){
	system("clear");
	printf("\n\n\t***Number of elements present in given array: %d***\n\n", len);     

	int maxIndex = max(arr, len);
	printf("Max number Value: %d\t\t| \tMax number Index: %d\n", arr[maxIndex], maxIndex);

	int minIndex = min(arr, len);
	printf("Min number Value: %d\t\t| \tMin number Index: %d\n", arr[minIndex], minIndex);
	
	int oddCounter = odd(arr, len);
	printf("Amount of Odd numbers: %d\n\n", oddCounter);
	
	int finIndex = find(arr, len, look);
	printf("Find number Value: %d\t\t| \tFind number Index: %d\n", arr[finIndex], finIndex);
	
	return 0;
}