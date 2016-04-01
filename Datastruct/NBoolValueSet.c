//
//  NBoolValueSet.c
//  Datastruct
//
//  Created by 范兴政 on 16/2/20.
//  Copyright © 2016年 PT. All rights reserved.
//

#include "NBoolValueSet.h"
#include <string.h>
#include <math.h>

char * printfValueSet(int count) {
    char * values= "tf";
    if (count == 1) {
        return values;
    } else {
        
        long size = pow(2, count);
        
        char * nextSet = printfValueSet(count - 1);
        printf("\nsize = %ld",size);
        char *presentSet;
        int index = 0;
        for (int i = 0; i < size / 2; ++i, ++index) {
            char str = *(nextSet + i);
//            strcat(str, "T");
//            *(presentSet + index) = str;
            strcat(presentSet, "t");
        }
        for (int i = 0; i < size / 2; ++i, ++index) {
            char str = *(nextSet + i);
//            strcat(str, "F");
//            *(presentSet + index) = str;
            strcat(presentSet, "f");
        }
        
        return presentSet;
    }
}