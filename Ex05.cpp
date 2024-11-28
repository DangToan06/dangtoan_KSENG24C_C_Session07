#include <stdio.h>
#include <limits.h>

int main(){
	int arr[5];
	int min = INT_MAX;
	int max = INT_MIN;
	
	for(int i = 0; i < 5; i++){
		printf("nhap gia tri thu %d cho mang: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < 5; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("Gia tri lon nhat cua phan tu trontg mang la: %d\nGia tri nho nhat cua phan tu trong mang la: %d", max, min);
	
	return 0;
}

