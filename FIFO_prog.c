	/*	FIFO_1lst.programm	*/
#include <stdio.h>
#include <stdlib.h>
#define HELLO "\n\tНапиши что-нибудь\n"

typedef struct node
{
	int data;
	struct node *next;
}node;

int main(void)
{
	node *first=NULL, *last=NULL, *tmp;
	int c;
	printf(HELLO);
	while((c = getchar()) != EOF)
	{
		if(!first)
			last = first = malloc(sizeof(node));
		else
			last = last->next = malloc(sizeof(node));
		last->data = c;
		last->next = NULL;
	}
	tmp = first;
	while(tmp)
	{
		printf("%c", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
	return 0;
}
