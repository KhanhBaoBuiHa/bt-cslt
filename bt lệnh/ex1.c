/*Viết chương trình nhập vào số nguyên, chương trình kết thúc khi người dùng nhập số 
0. Xuất ra số nhỏ nhất (khác 0) và số lớn nhất (khác 0) trong các số đã nhập vào. */
#include "stdio.h"
int main(){
    int a[100];
    int i=0;
    int Max=0,Min=0;
    while(1){
        scanf("%d", &a[i]);
        if(a[i]==0) break;
        i++;
    }
    for(int j=0;j<=i;j++){
        if(a[j]>Max) Max=a[j];
        if(a[j]<Min) Min=a[j];
    }
    printf("Max : %d", Max);
    printf("\nMin : %d", Min);
    return 0;
}