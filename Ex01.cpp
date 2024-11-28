#include <stdio.h>

int main(){
	int arr[5] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < 5; i++){
		printf("\nPhan tu thu %d la: %d", i, arr[i]);
	}
	return 0;
}
