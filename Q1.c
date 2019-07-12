#include <stdio.h>
int main(void){
    int i;
    int num;
    int ans;
    ans = 0;
    printf("入力された10個の整数の平均値を出力します。\n");
    for(i=1; i<=10; i++){
        printf("%d個目の整数を入力してください。\n",i);
        scanf("%d", &num);
        ans += num;
    }
    printf("平均値は%dです。\nあまりは%dです。", ans / 10, ans % 10);
    return 0;
}