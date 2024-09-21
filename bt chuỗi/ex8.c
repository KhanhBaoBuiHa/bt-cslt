/*Viết chương trình để trích xuất một chuỗi con từ một chuỗi cho trước không sử dụng các hàm của thư viện string.h. 
Ví dụ nhập chuỗi “Dai hoc Khoa hoc tu nhien”, vị trí bắt đầu trích xuất 8, độ dài chuỗi con 4, xuất ra:
Chuỗi con lấy ra từ chuỗi là: Khoa*/
#include "stdio.h"
int stringLength(char str[]){
    int length=0;
    while(str[length]!='\0'){
    length++;
    }
    return length;
}
int main(){
    int inputStart, inputLength;
    char str[100], new[100];
    fflush(stdin);
    gets(str);
    int L=stringLength(str);
    printf("\nvi tri bat dau trich xuat :");
    scanf("%d",&inputStart);
    printf("\ndo dai chuoi con :");
    scanf("%d",&inputLength);
    for (int i = 0; i < inputLength; i++) {
        printf("%c", str[inputStart + i]);
    }
} 