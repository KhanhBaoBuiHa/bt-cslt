/*Viết chương trình liệt kê các dãy con không giảm của một dãy số nguyên*/
#include "stdio.h"
int main(){
    int n,i,cnt=1;
    int a[100];
    printf("nhap do dai mang ");
    scanf("%d",&n);
    printf("\nnhap cac phan tu");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i<(n-1) && a[i+1]>=a[i]){
        printf("day thu %d la %d",cnt, a[i]);
        while(i<(n-1) && a[i+1]>=a[i]){
            printf("%d ",a[i+1]);
            i++;
        }
        printf("\n");
        cnt++;
        }
    }
    return 0;
}