#include <stdio.h>

int main(){
	int arr[5];
	for(int i = 0; i < 5; i++){
		printf("nhap gia tri thu %d cho mang: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < 5; i++){
		printf("\nphan tu thu %d trong mang la: %d", i, arr[i]);
	}
	
	return 0;
}
