/*Viết chương trình tính tổng các phần tử là số nguyên tố của một mảng nguyên*/
#include "stdio.h"
int main(){
    int n,rs;
    printf("nhap do dai mang : ");
    scanf("%d", &n);
    for (int num=1;num<n;num++){
        int count=0;
        for(int i=2;i<sqrt(num);i++){
            if(num%i==0){
                count++;
            }
        }
        if(count ==0 && num>1) rs+=num;
    }
    printf("%d",rs);
}