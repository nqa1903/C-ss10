#include<stdio.h>

int main(){
	int arr[6] = {115,20,45,300,15,45};
	printf("Mang truoc khi sap xep : \n");
	for(int i = 0 ; i < 6 ; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
	printf("Mang sau khi sap xep : \n");
	for(int i = 0 ; i < 6 - 1 ; i++){
		for(int j = 0 ; j < 6 - i - 1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0 ; i < 6 ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
