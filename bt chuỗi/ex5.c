/*Viết chương trình đếm tổng số chữ cái, chữ số và ký tự đặc biệt trong một chuỗi*/
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
    int cntCai=0, cntSo=0, cntDB=0;
    fflush(stdin);
    gets(str);
    int L=stringLength(str);
    for(int i=0;i<L;i++){
        if(str[i]>=48 && str[i]<=57) cntSo++;
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)) cntCai++;
        if((str[i]>=33 && str[i]<=47)||(str[i]>=58 && str[i]<=64)||(str[i]>=91 && str[i]<=96)||(str[i]>=123 && str[i]<=126)) cntDB++;
    }
    printf("so ky tu chu cai la %d", cntCai);
    printf("\nso ky tu chu cai la %d", cntSo);
    printf("\nso ky tu chu cai la %d", cntDB);
    return 0;
} 