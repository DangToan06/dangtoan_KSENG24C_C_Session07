#include <stdio.h>

int main(){
	int arr[5];
	for(int i = 0; i < 5; i++){
		printf("nhap gia tri thu %d cho mang: ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\nphan tu thu 0 trong mang la: %d\n", arr[0]);
	printf("phan tu thu 1 trong mang la: %d\n", arr[1]);
	printf("phan tu thu 2 trong mang la: %d\n", arr[2]);
	printf("phan tu thu 3 trong mang la: %d\n", arr[3]);
	printf("phan tu thu 4 trong mang la: %d\n", arr[4]);
	return 0;
}

