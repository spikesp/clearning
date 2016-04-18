//
//  main.c
//  leet
//
//  Created by spike on 15/12/6.
//  Copyright © 2015年 ___spike___. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void){
    
    char str[100];
    int j;
    
    scanf("%100s",str);//get input
    
    for ( j = 0; j < strlen(str); j++ )//exchange
    {
        
        if ( str[j] == 'A' )
        str[j] = '4';
    
        else if ( str[j] == 'E' )
        str[j] = '3';
    
        else if ( str[j] == 'G' )
        str[j] = '6';
    
        else if ( str[j] == 'I' )
        str[j] = '1';
    
        else if ( str[j] == 'O' )
        str[j] = '0';
    
    
        else if ( str[j] == 'S' )
        str[j] = '5';
        
        else if( str[j] =='Z')
        str[j] = '2';
    }
    
    
    
    printf("%s",str);
    return 0;
    
    
    
    
}