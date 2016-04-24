/* films2.c-- use the linklist for sruct */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45 

struct film {
	char title[TSIZE];
	int rating;
	struct film * next;
};

int main (void)
{
	struct film * head = NULL;
	struct film * prev, *current;
	char input[TSIZE];

	/*collect and storage the information */
	puts("Enter first movie title:");
	while (gets(input)!= NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		if (head == NULL)
			head = current;
		else
			prev->next = current;
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>:");
		scanf("%d", &current->rating);
		while(getchar()!= '\n')
			continue;
		puts("Enter next movie title (empty line to stop):");
		prev = current;
	}

	if(head == NULL)
		printf("No data entered.");
	else
		printf("Here is the movie list:\n");
	current = head;
	while (current != NULL)
	{
		printf("Movie:%s Rating: %d\n", current->title,current->rating);
		current = current->next;
	}

	//mission complete and free memory
	current = head;
	while (current != NULL)
	{
		free (current);
		current = current->next;
	}
	printf("Bye!\n");

	return 0;
}
