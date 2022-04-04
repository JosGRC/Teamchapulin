#include "./min.h"
#include <stdio.h>
#include "./find.h"

int arr[5] = {8,4,2,9,1};

int main(){
    int minIndex = min(arr, 5);
printf("minIndex  %d, value: %d\n", minIndex, arr[minIndex]);
    return 0;
}