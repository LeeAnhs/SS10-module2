#include <stdio.h>

int main () {
	int arr[10]={34,12,22,35,67,88,90,45,55,17,83};
	int n=sizeof(arr)/sizeof(arr[10]);
	int num;
	int i;
	int found=0;
	printf("Nhap phan tu bat ky de tim kiem");
	scanf("%d", &num);
	for(i=0;i<n;i++){
		if (arr[i]==num){
			printf("Phan tu %d co trong mang",num);
			found=1;
			break;
		}
		}if (found==0){
			printf("Phan tu khong co trong mang");
		}
		return 0;
		}
		
	

