//
//  sort.h
//  Datastruct
//
//  Created by so on 16/1/22.
//  Copyright © 2016年 PT. All rights reserved.
//

#ifndef sort_h
#define sort_h

#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) = (t))

#include <stdio.h>

int swap_value (int a, int b);
int swap_site (int *a, int *b);
int sort (int *list, int n);

#endif /* sort_h */
