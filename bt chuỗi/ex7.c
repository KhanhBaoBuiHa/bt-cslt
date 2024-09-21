/*Viết chương trình tìm số ký tự lớn nhất trong một chuỗi*/
#include "stdio.h"
int stringLength(char str[]){
    int length=0;
    while(str[length]!='\0'){
    length++;
    }
    return length;
}
int main(){
    char str[100];
    int max=0;
    int cnt[256]={0};
    char kytu;
    fflush(stdin);
    gets(str);
    int L=stringLength(str);
    for(int i=0;i<L;i++){
        cnt[(int)str[i]]++;
    }
    for(int j=0;j<=256;j++){
        if(cnt[j]!=0){
            if(cnt[j]>max){
                max=cnt[j];
                kytu=(char)j;
            }    
        }
    }
    printf("ky tu xuat hien nhieu nhat la %c, xuat hien %d",kytu,max);
    return 0;
}