#include <stdio.h>
int main(void){
    int i;
    int num;
    int ans;
    printf("素数を判定します。整数を入力してください。\n");
    scanf("%d", &num);
    for(i=2; i<num; i++){
        ans = num % i;
        if (ans==0) {
            break;
        }
    }
    if (ans==0) {
        printf("入力された値は素数ではありません\n");
    } else {
        printf("入力された値は素数です\n");
    }
    return 0;
}