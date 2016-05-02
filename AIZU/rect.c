#include <stdio.h>
 
int main(){
 
int retlong, retshort;
scanf("%d %d", &retlong, &retshort);
 
printf("%d %d\n",retlong*retshort, 2*(retlong+retshort));
 
return 0;
}