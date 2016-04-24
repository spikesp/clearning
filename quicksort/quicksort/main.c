//
//  main.c
//  quicksort
//
//  Created by spike on 16/4/24.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>

void swap(int v[],int i,int j){
    int temp;
    
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void quicksort(int v[],int left, int right){
    int i, last;
    void swap(int v[],int i,int j);
    
    if(left>=right)
        return;
    swap(v,left,(left+right)/2);
    last = left;
    for(i = left + 1;i <= right; i++)
        if(v[i] < v[left])
            swap(v,++last,i);
    swap(v,left,last);
    quicksort(v,left,last-1);
    quicksort(v,last+1,right);
}
int main(int argc, const char * argv[]) {
    int left = 1;
    int last = 7;
    
    int array[10] = {1,8,2,5,3,4,6,7};
    
    quicksort(array,left,last);
    printf("The sorted numeric array is :");
    for(int i = 0;i <= last; i++)
        printf("%d ",array[i]);

    return 0;
}
