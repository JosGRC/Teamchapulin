#include <stdio.h>
int printArray(int arr[], int len, int dg){
	printf("\t");
	for (int i = 0; i < len; i++) {	
		printf("[%0*d] ", dg, arr[i]);
			if(i == len-1){
				printf("\n");
			}
	}
}