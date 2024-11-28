#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap vao pha tu thu %d cua mang: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		printf("\nPha tu thu %d cua mang: %d", i, arr[i]);
	}
	
	return 0;
}

