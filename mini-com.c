#include <stdio.h>
#include <string.h>


int main(void){
    
    
    char str[4];
    char *e = "SET";
    char *f = "ADD";
    char *g = "SUB";
    int step_num, i, a,v1 = 0,v2 = 0;
    scanf("%d", &step_num);
    
    for ( int j = 1; j <= step_num; ++j ){
        scanf ("%3s %d %d",str,&i,&a);
        if(strcmp(str,e)==0){
            if (i == 1){
                v1 = a;
            }else if(i==2){
                v2 = a;
            }
        }else if ( strcmp(str,f)==0){
            v2 = v1 + i ;
        }else if ( strcmp(str,g)==0){
            v2 = v1 - i ;
        }
        
        
    }
    printf("%d %d", v1,v2);
    
    
    return 0;
}