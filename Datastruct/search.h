//
//  search.h
//  Datastruct
//
//  Created by so on 16/1/22.
//  Copyright © 2016年 PT. All rights reserved.
//

#ifndef search_h
#define search_h

#include <stdio.h>

int compare (int a, int b);

int search (int *list, int n,int searchNum);

int search_recursion (int *list, int n, int searchNum);

int search_recursionV2 (int *list, int searchNum, int left, int right);
#define COMPARE (x, y) ((x) > (y) ? 1 : (x) == (y) ? 0 : -1)

#endif /* search_h */
