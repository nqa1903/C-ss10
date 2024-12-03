#include<stdio.h>

int main(){
	int arr[6] = {115,20,45,300,15,45};
	int input;
	int found = 0;
	printf("Nhap vao gia tri muon tim : ");
	scanf("%d",&input);
	for(int i = 0 ; i < 6 ; i++){
		if(arr[i] == input){
			found = 1;
			printf("Gia tri can tim o vi tri %d \n",i+1);
		}
	}
	if(!found){
		printf("Khong co gia tri can tim trong mang");
	}
}
