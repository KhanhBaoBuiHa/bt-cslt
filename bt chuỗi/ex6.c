/*Viết chương trình sao chép chuỗi này sang chuỗi khác*/    
#include "stdio.h"
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void stringCopy(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
int main() {
    char str1[100];
    char str2[100];
    int length;
    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    length = stringLength(str1);
    if (str1[length - 1] == '\n') {
        str1[length - 1] = '\0';
        length--;
    }
    stringCopy(str1, str2);
    length = stringLength(str1);
    printf("Chuoi thu nhat la: %s\n", str1);
    printf("Chuoi thu hai la: %s\n", str2);
    printf("So ky tu duoc sao chep: %d\n", length);
    return 0;
}