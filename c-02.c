//  Created by ChenJoey on 2016/12/10.
//  Copyright © 2016年 ChenJoey. All rights reserved.
//  題目 河內塔
#include <stdio.h>

void hanoi(int n, char left, char mid, char right) {
    if(n == 1) {
        printf("第%d個盤子從%c柱移到%c柱\n",n,left,right);
    } else {
        hanoi(n - 1, left, right, mid);
        printf("第%d個盤子從%c柱移到%c柱\n",n,left,right);
        hanoi(n - 1, mid, left, right);
    }
}

int main(void) {
    int n = 4; //盤子數量
    printf("Start\n");
    hanoi(n,'A','B','C');
    printf("End\n");
    return 0;
}
