/*Viết một chương trình để đếm tần suất xuất hiện của từng phần tử của một mảng*/
#include "stdio.h"
int main(){
    int n,a,i=0,max=0;
    int cnt[100]={0};
    printf("nhap do dai mang ");
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&a);
        if(a>max) max=a;
        cnt[a]++;
        i++;
    }
    for(i=0;i<max;i++){
        if(cnt[i]!=0)
        printf("\nso %d xuat hien %d lan", i,cnt[i]);
    }
    return 0;
}