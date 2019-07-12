#include <stdio.h>
int main(void){
    int i;
    int num_array[12]= {-1,0,1,2,3,4,5,6,7,8,9,10};
    int calc;
    for(i=0; i<12; i++){
        printf("「%d」は",num_array[i]);
        calc = num_array[i] + 1;
        if (calc<=0) {
            printf("「負の数」で");
        } else if (calc>=2) {
            printf("「正の数」で");
        } else {
            printf("「正負の数に含まれず」、");
        }
        calc = num_array[i] % 2;
        if (calc==0) {
            printf("%d「整数」です。\n",calc);
        } else {
            printf("%d「奇数」です。\n",calc);
        }
    }
    return 0;
}