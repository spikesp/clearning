#include <stdio.h>

int main(){
	int first, last ,num, i;
	i = 0;
	scanf("%d%d%d",&first, &last, &num);
	for(first;first <= last;first++){
		if(num%first == 0)
			i++;
	}
	printf("%d\n",i);

	return 0;
}