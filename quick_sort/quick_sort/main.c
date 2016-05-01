//
//  main.c
//  quick_sort
//
//  Created by spike on 16/4/29.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
int Partition(int *A,int start, int end){
    int pivot = A[end];
    int partitionIndex = start;// set partition index as start initially
    for(int i = start; i < end; i++){
        if (A[i] <= pivot){
            swap(A[i],A[partitionIndex]);
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
