/*Viết chương trình đọc một câu và thay thế các ký tự chữ thường bằng chữ hoa và ngược lại.*/
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
    fgets(str,sizeof(str),stdin);
    int L=stringLength(str);
    for(int i=0;i<L;i++){
        if(str[i]>=65 && str[i]<= 90) str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<= 122) str[i]=str[i]-32;
    }
    printf("%s", str);
    return 0;   
}  