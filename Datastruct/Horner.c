//
//  Horner.c
//  Datastruct
//
//  Created by so on 16/2/18.
//  Copyright © 2016年 PT. All rights reserved.
//

#include "Horner.h"

float horner (float *list, int x, int length, int index) {
    
    printf("\nlist[%d]->%f",index,*(list + index));
    
    if (index == length - 1) {
        printf("\nlist[length - 1 = %i] = %f",index,list[index]);
        return *(list + index);
    } else {
        list[index +1] += list[index] * x;
        return horner(list, x, length, index + 1);
    }
}