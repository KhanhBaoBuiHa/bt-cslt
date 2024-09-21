//Viết chương trình xuất các ký tự của một chuỗi theo thứ tự ngược lại
#include"stdio.h"
int stringLength(char str[]){
    int Length=0; 
    while(str[Length]!='\0'){
        Length++;
    }
    return Length;
}
int main(){
    char str[100];
    char temp;
    fflush(stdin);
    gets(str);
    int L=stringLength(str); 
    for(int i=L-1;i>=0;i--){
        printf("%c ",str[i]);
    }
}