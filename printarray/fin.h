
int fin(int arr[], int len) {
	int finIndex = 0;
	int digits = 0;
	for (int i = 0; i < len; i++){
		if (arr[i] > arr[finIndex]) {
			finIndex = i;
		}
	}
	int n = arr[finIndex];
	while(n != 0){
		n = n/10;
		digits ++;
	}
	return finIndex, digits;
}