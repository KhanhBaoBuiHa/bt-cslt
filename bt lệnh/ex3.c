/* Viết chương trình nhập vào một một số nguyên dương, chương trình xuất ra số đảo 
ngược của số đã nhập. Ví dụ, nhập vào số 12345, xuất ra số 54321.*/
#include "stdio.h"
#include "math.h"
int main(){
    int n,i,rs=0;
    scanf("%d",&n);
    for(i=9;i>0;i--){
        if((n/pow(10,i))<10 && (n/pow(10,i))>1) break;
    }
    for(int j=0;j<=i;j++){
        rs+=(n%10)*pow(10,i-j);
		n /=10;
    }
    printf("%d ", rs);
}