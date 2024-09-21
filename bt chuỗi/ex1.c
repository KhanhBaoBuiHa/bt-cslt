//Viết chương trình tính độ dài của một chuỗi không sử dụng các hàm của thư viện string.h. 
#include "stdio.h"
int stringsLength(char str[]){
    int length = 0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}
int main(){
    char str[100];
    fflush(stdin);
    gets(str);
    int L=stringsLength(str);
    printf("do dai cua chuoi la %d",L);
    return 0;
}