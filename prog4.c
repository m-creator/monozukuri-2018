#include <stdio.h>

int main(){
    int i=0;
    printf("整数を入力：");
    scanf("%d",&i);
    if(i%2==0){
        printf("%dは偶数です。",i);
    }else{
        printf("%dは奇数です。",i);
    }
}
