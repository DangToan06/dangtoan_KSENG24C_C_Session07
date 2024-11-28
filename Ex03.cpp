#include <stdio.h>

int main(){
	int arr[5], count = 0;
	for(int i = 0; i < 5; i++){
		printf("nhap gia tri thu %d cho mang: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < 5; i++){
		if(arr[i] % 2 ==0){
			printf("%d ", arr[i]);
			count++;
		}
	}
	if(count == 0){
		printf("Khong co so chan nao");
	}
	return 0;
}

