#include<stdio.h>

int main(){
	int arr[6] = {115,20,45,300,15,45};
	int input;
	int index[100] , count = 0 ;
	printf("Nhap gia tri muon tim : ");
	scanf("%d",&input);
	for(int i = 0 ; i < 6 ; i++){
		if(input == arr[i]){
			index[count] = i;
			count++;
		}
	}
	if(count > 0){
		printf("Gia tri can tim na o vi tri : ");
		for(int i = 0 ; i < count ; i++){
			printf("%d ",index[i]);
		}
	}else{
		printf("Gia tri can tim khong nam o trong mang");
	}
	return 0;
}
