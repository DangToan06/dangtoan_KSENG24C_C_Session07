#include <stdio.h>

int main(){
	int arr[5] = {1,2,3,4,5};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Gia tri vi tri 0 la: %d\n", arr[0]);
	printf("Gia tri vi tri 1 la: %d\n", arr[1]);
	printf("Gia tri vi tri 2 la: %d\n", arr[2]);
	printf("Gia tri vi tri 3 la: %d\n", arr[3]);
	printf("Gia tri vi tri 4 la: %d\n", arr[4]);
	printf("Do dai cua mang la: %d", size);
	
	
	

	return 0;
}

