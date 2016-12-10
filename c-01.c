//  Created by ChenJoey on 2015/11/19.
//  Copyright © 2015年 ChenJoey. All rights reserved.
//  題目 啤酒換算 2元換一瓶  兩空瓶換一瓶 四瓶蓋換一瓶
#include <stdio.h>
int main() {
    // insert code here...
    int money =  10;
    int x,y,z,temp = 0;
    int count;
    x = money / 2,y = x,z = x,count = x;
    printf("%d空瓶 %d蓋子 共%d瓶 \n",y,z,count);
    while (y >=2 || z >= 4) {
        if (y >= 2) {
            temp =  y / 2,count += temp,z += temp,y = y + temp - temp * 2;
        }
        if (z >= 4) {
            temp =  z / 4,count += temp,y += temp,z = z + temp - temp * 4;
        }
        printf("%d空瓶 %d蓋子 共%d瓶 \n",y,z,count);
    }
    return 0;
}
