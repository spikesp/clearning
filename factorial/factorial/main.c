//
//  main.c
//  factorial
//
//  Created by spike on 16/4/21.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>

int fact( int n){
    if(n == 0)
        return 1;
    return n*fact(n - 1);
}

int main(int argc, const char * argv[]) {

    int x;
    scanf("%d",&x);
    printf("The factorial of %d is %d.\n",x, fact(x));
    return 0;
}
