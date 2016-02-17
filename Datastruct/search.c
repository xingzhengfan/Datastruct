//
//  search.c
//  Datastruct
//
//  Created by so on 16/1/22.
//  Copyright © 2016年 PT. All rights reserved.
//

#include "search.h"

int compare (int a, int b) {
    if (a > b) {
        return 1;
    } else if (a == b) {
        return 0;
    } else {
        return -1;
    }
}

int search (int *list, int n,int searchNum) {
    int left = 0;
    int right = n -1;
    
    int middle;
    
    if (*(list + left) > searchNum || searchNum > *(list + right)) {
        return -2;
    }
    while (left <= right) {
        middle = (right + left) / 2;
        switch (compare(searchNum, *(list + middle))) {
            case -1:
                right = middle - 1;
                break;
            case 0:
                return middle;
                break;
            case 1:
                left = middle + 1;
                break;
            default:
                break;
        }
    }
    return -1;
}

int search_recursion (int *list, int n, int searchNum) {
    int left = 0;
    int right = n-1;
    
    int middle;
    
    if (*(list + left) > searchNum || searchNum > *(list + right)) {
        return -2;
    }
    
    if (left <= right) {
        middle = (right + left) / 2;
        
        switch (compare(searchNum, *(list + middle))) {
            case -1:
                search_recursion(list, middle, searchNum);
                break;
            case 0:
                return middle;
                break;
            case 1:
                search_recursion(list + middle + 1, right - middle - 1, searchNum);
                break;
            default:
                break;
        }
        printf("\ntest");
    }
    return -1;
}

int search_recursionV2 (int *list, int searchNum, int left, int right) {
    int middle = (left + right) / 2;
    
    if (*(list + left) > searchNum || searchNum > *(list + right)) {
        return -2;
    }
    
    if (left <= right) {
        switch (compare(searchNum, *(list + middle))) {
            case -1:
                left = left;
                right = middle - 1;
                search_recursionV2(list, searchNum, left, right);
                break;
            case 0:
                return middle;
                break;
            case 1:
                left = middle + 1;
                right = right;
                search_recursionV2(list, searchNum, left, right);
                break;
            default:
                break;
        }
    }
    return -1;
}