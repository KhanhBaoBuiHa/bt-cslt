/*Trong một dãy số nguyên, phần tử cực đại là phần tử lớn hơn hai phần tử liền kề. Viết 
chương trình tìm phần tử cực đại lớn nhất của một dãy số nguyên*/   
#include "stdio.h"
int main(){
    int n,i, max=0;
    int a[100];
    printf("nhap do dai mang ");
    scanf("%d",&n);
    printf("\nnhap cac phan tu");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            if(a[i]>max) max = a[i];
        }
    }
    printf("cuc tri lon nhat la %d ", max);
    return 0;
} 