/*Viết chương trình đếm tổng số từ trong một chuỗi*/
#include "stdio.h"
int stringLength(char str[]){
    int Length=0; 
    while(str[Length]!='\0'){
        Length++;
    }
    return Length;
}
int main(){
    char str[100];
    int cnt=1;
    fflush(stdin);
    gets(str);
    int L=stringLength(str);
    for(int i=0;i<L;i++){
        if(str[i]==' ') cnt++;
    }
    printf("Tong so tu trong chuoi la %d",cnt);
    return 0;
}