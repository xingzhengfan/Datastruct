//
//  permutation.c
//  Datastruct
//
//  Created by so on 16/1/25.
//  Copyright © 2016年 PT. All rights reserved.
//

#include "permutation.h"
#include <string.h>

void swap_char (char *a, char *b) {
    char tempChar = *a;
    *a = *b;
    *b = tempChar;
}

void swap_charV2 (char str[], int a, int b) {
    char temp = str[a];
    str[a] = str[b];
    str[b] = temp;
}

void swap_charV3 (char **a, char **b) {
    char **temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

void fullPermutation (char *str, size_t length, int index) {
    
    static int time = 0;
    
    if (index < length) {
        for (int j = index; j < length; ++j) {
            swap_char(str + index, str + j);
            
            fullPermutation(str, length, index + 1);
            swap_char(str + index, str + j);
        }
    } else {
        printf("\n%d - %s",time++,str);
    }
}

void testFullPermutation (char *str, size_t length, int index) {
    
    if (index == length) {
        printf("\n%s",str);
    } else {
        for (int j = index; j < length; ++j) {
            swap_char(str + index, str + j);
            testFullPermutation(str, length, index + 1);
            swap_char(str + index, str + j);
        }
    }
    
}

void perm(char *list, int i, int n) {
    int j;
    
    if (i == n) {
        for (j = 0; j <= n; ++j) {
            printf("%c",list[j]);
        }
        printf("  ");
    } else {
        for (j = i; j <= n; ++j) {
            swap_char(list + i, list + j);
            perm(list, i + 1, n);
            swap_char(list + i, list + j);
        }
    }
}