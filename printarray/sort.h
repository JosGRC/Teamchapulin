
int sort(int arr[], int temp, int len, int dg) {
	for (int i = 0; i < len; i++) {
		for (int j = i+1; j < len; j++) {
			if(arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				int Array = printArray(arr, len, dg);
			}
		}
        }
}