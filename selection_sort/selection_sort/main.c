//
//  main.c
//  selection_sort
//
//  Created by spike on 16/4/28.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t) = (x), (x), (x) = (y), (y) = t)

void sort (int [], int);/* selection sort */

int main(void) {
    int i, n;
    int list[MAX_SIZE];
    printf("Enter_the_number_of_numbers_to_generate:_");
    scanf("%d", &n);
    if ( n < 1 || n > MAX_SIZE){
        fprintf(stderr, "Improper_value_of_n/n");
        exit(EXIT_FAILURE);
    }
    for ( i = 0; i < n; i++){/*randomly generate numbers */
        list[i] = rand() % 1000;
        printf("%d__", list[i]);
        
    }
    
    sort(list, n);
    printf("\n_Sorted_array:\n_");
    for (i = 0; i < n; i++) /*print out sorted numbers */
        printf("%d__", list[i]);
    printf("\n");
  
}

void sort(int list[], int n)
{
    int i, j, min, temp;
    for(i = 0; i < n-1; i++){
        min = i;
        for( j = i + 1; j < n; j++)
            if (list[j] < list[min])
                min = j;
        SWAP(list[i], list[min], temp);
    }
}


