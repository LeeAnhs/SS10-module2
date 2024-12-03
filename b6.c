#include <stdio.h>

int main(){
    int arr[] = {23,55,43,67,11,2,21};
    int n = sizeof(arr) / sizeof(int);
    int num;
    
    int m = 0;
    printf("\n");
    printf("Nhap so: ");
    scanf("%d", &num);

    printf("\n");
    int array[n];
     for(int i = 0; i < n; i++){
       if(num == arr[i]){
        array[m] = i;
        m++;
       }
    }
    printf("Phan tu %d xuan hien %d lan trong ham tai vi tri:",  num, m);
    for(int i = 0; i < m ; i++){
        printf(" %d ",array[i] );
    }
    return 0;
}



 
