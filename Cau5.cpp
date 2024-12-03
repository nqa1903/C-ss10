#include<stdio.h>

int main(){
	int arr[6] = {115,20,45,300,15,45};
	printf("Mang truoc khi sap xep : \n");
	for(int i = 0 ; i < 6 ; i++){
		printf("%d \t",arr[i]);
	}
	for(int i = 1 ; i < 6 ; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1; 
		}
		arr[j+1] = key;
	}
	printf("\n");
	printf("Mang sau khi sap xep : \n");
	for(int i = 0 ; i < 6 ; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
	int input;
	printf("Nhap gia tri muon tim : ");
	scanf("%d",&input);
	int l = 0 ; 
	int r = 6 - 1;
	int found = 0;
	while(l <= r){
		int m = (l + r) / 2;
		if(arr[m] == input){
			printf("Gia tri can tim nam o cac vi tri : ");
			int i = m;
			while(i >= 0 && arr[i] == input){
				printf("%d \t",i);
				i--;
			};
			i = m + 1;
			while(i < 6 && arr[i] == input){
				printf("%d \t",i);
				i++;
			};
			printf("\n");
			found = 1;
			break;
		}else if(arr[m] < input){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	if(!found){
		printf("Khong co gia tri can tim trong mang");
	}
	return 0;
}
