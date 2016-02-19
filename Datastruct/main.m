//
//  main.m
//  Datastruct
//
//  Created by so on 16/1/22.
//  Copyright © 2016年 PT. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "sort.h"
#import "search.h"
#import "permutation.h"

#import "Horner.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
        int a = 2;
        int b = 3;
        
        swap_site(&a, &b);
        
        printf("a = %i, b = %i", a, b);
        
        int list[100];
        for (int i = 0; i < 100; ++i) {
            list[i] = rand() % 200;
        }
        
        sort(list, 100);
        for (int i = 0; i < 100; ++i) {
            printf("[%i]->%i\n",i,list[i]);
        }
        
        int location = search(list, 100, 137);
        printf("location = %i", location);
        location = search_recursion(list, 100, 137);
        printf("location = %i", location);
        location = search_recursionV2(list, 137, 0, 99);
        printf("location = %i", location);
        
        char str[] = "abcd";
        fullPermutation(str, strlen(str), 0);
        //testFullPermutation(str, strlen(str), 0);
        //perm(str, 0, 2);
        
        
        char str1[] = "fxz";
        swap_char(str1, str1 + 1);
        printf("\nstr1->%s\n",str1);
        
        //Horner
        float hornerArr[6] = {6,5,4,3,2,1};
        printf("\nHornerTestCase -- %f",horner(hornerArr, 3, 6, 0));
    }
    return 0;
}