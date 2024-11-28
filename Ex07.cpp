#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &arr[i]);
		while(arr[i] % 2 == 0){
			printf("gia tri nhap vao phai la so le vui long nhap lai");
			printf("\nNhap phan tu thu %d: ",i);
			scanf("%d", &arr[i]);
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}

