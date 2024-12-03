#include<stdio.h>

int main(){
	int arr[6] = {115,20,45,300,15,45};
	printf("Mang truoc khi sap xep : \n");
	for(int i = 0 ; i < 6 ; i++){
		printf("%d \t",arr[i]);
	}
	for(int i = 0 ; i < 6 - 1 ; i++){
		int minIndex = i;
		for(int j = i + 1 ; j < 6 ; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
	printf("\n");
	printf("Mang sau khi sap xep : \n");
	for(int i = 0 ; i < 6 ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
