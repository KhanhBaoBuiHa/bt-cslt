/*Viết chương trình nhập vào một số nguyên dương. Chương trình xuất ra số lượng chữ 
số và tổng các chữ số của số đã nhập. */
#include "stdio.h"
#include "math.h"
int main(){
    int n,i,rs=0;
    int a[10];
    scanf("%d",&n);
    for(i=9;i>0;i--){
        if((n/pow(10,i))<10 && (n/pow(10,i))>1) break;
    }
    for(int j=0;j<=i;j++){
        a[i]= n%10;
		n /=10;
        printf("%d ",a[i]);
        rs+=a[i];
    }
    printf("tong : %d",rs);
}