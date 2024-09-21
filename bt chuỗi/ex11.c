/*Viết chương trình tính số lần một từ xuất hiện trong chuỗi đã cho*/
#include "stdio.h"
#include "string.h"
int stringLength(char str[]){
    int length=0;
    while(str[length]!='\0'){
    length++;
    }
    return length;
}
int main(){
    char str[100], w[50][20], inputw[50];
    int count=0, j=0, cnt=0;
    printf("nhap chuoi :");
    fgets(str,sizeof(str),stdin);
    int L=stringLength(str);
    printf("nhap tu can tim :");
    fgets(inputw,sizeof(inputw),stdin);
    int inputwLength = stringLength(inputw);
    if (inputw[inputwLength-1] == '\n') {
        inputw[inputwLength-1] = '\0';  // Loại bỏ ký tự xuống dòng
    }
    // Tách từ và lưu vào mảng words
    for(int i=0;i<L;i++){
        if (str[i] != ' ' && str[i] != '\0') {
            w[count][j++] = str[i];
        } else {
            if (j > 0) {
                w[count][j] = '\0'; // Kết thúc từ hiện tại
                count++;  // Tăng biến đếm số lượng từ
                j = 0;    // Đặt lại biến đếm vị trí trong từ hiện tại
            }
        }
    }
    // Để đảm bảo từ cuối cùng cũng được kết thúc
    if (j > 0) {
        w[count][j] = '\0';
        count++;
    }  
    for (int i = 0; i < count; i++) {
        if(strcmp(inputw, w[i]) == 0){
            cnt++;
        }
    }  
    printf("tu can tim xuat hien %d lan",cnt);
    return 0;   
}  