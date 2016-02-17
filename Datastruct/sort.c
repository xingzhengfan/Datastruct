//
//  sort.c
//  Datastruct
//
//  Created by so on 16/1/22.
//  Copyright © 2016年 PT. All rights reserved.
//

#include "sort.h"

int swap_value (int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    
    return 0;
}

int swap_site (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    
    return 0;
}

int sort (int * list, int n) {
    int i;
    int j;
    int min;
    for (i = 0; i < n; ++i) {
        min = list[i];
        
        for (j = i+1; j < n; ++j) {
            if (list[j] < min) {
                min = list[j];
                swap_site(list+j, list+i);
            }
        }
    }
    
    return 0;
}
