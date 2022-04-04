#include <stdio.h>
#include "min.h"

int main (){
    int array[3] = {6,2,10};
    int len = 3;
    int minCounter =  min(array, len);
    printf("%d", minCounter);
    return minCounter;
};     