/*Viết chương trình để tìm từ ngắn nhất và từ dài nhất trong một chuỗi*/    
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
    int lengthword[100]={0},start[100]={0};
    int lengthmin=100, lengthmax=0, startmin=0, startmax=0,j=0,i=0;
    fgets(str,sizeof(str),stdin);
    int L=stringLength(str);
    if (str[L - 1] == '\n') {
        str[L - 1] = '\0';
        L--;
    }
    for(i=0;i<L;i++){
        if(str[i]!=' '&&(i==0||str[i-1]==' ')){
            start[j] = i;
            lengthword[j] = 0;
        }
        if(str[i]!=' '){
            lengthword[j]++;
        }
        if(str[i]!=' '&&(i==L-1||str[i+1]==' ')){
        if(lengthword[j]>lengthmax){
            lengthmax=lengthword[j];
            startmax=start[j];
        }    
        if(lengthword[j]<lengthmin){
            lengthmin=lengthword[j];
            startmin=start[j];
        }    
        j++;
        }
    }
    printf("\ntu dai nhat la :");
    for(i=startmax;i<startmax+lengthmax;i++){
        printf("%c",str[i]);
    }
    printf("\ntu ngan nhat la :");
    for(i=startmin;i<startmin+lengthmin;i++){
        printf("%c",str[i]);
    }
    return 0;
}