#include <stdio.h>
#include <math.h>

int songuyento(int num){
	if(num <= 1){
		return 0;
	}
	for(int i = 2; i <= sqrt(num); i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}

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
		if(songuyento(arr[i])){
			printf("%d ", arr[i]);
		}
	}

	return 0;
}

