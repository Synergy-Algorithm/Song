#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct NODE *node_list;
struct NODE{
	node_list next;
	int data;
};

void addNode(node_list target, int data)
{
	node_list newNode = (node_list*)malloc(sizeof(struct NODE)); // 괄호안에 그러면 NODE** 이렇게되는 이중포인터 되는거 아니야?
	newNode->next = target->next;
	newNode->data = data;
	target->next = newNode;
}

void removeNode(node_list target)
{
	node_list deleteNode= target->next;
	target->next = deleteNode->next;
	
	free(deleteNode);
}

int main(int argc, char *argv[]) {
	int i, j, n, m;
	node_list head = (node_list*)malloc(sizeof(struct NODE));
	node_list last = (node_list*)malloc(sizeof(struct NODE));
	head->next = last;
	scanf("%d %d", &n, &m);
	
	last->data = n;
	
	for(i=n-1; i>=1; i--)
	{
		addNode(head, i);
	}
	last->next = head->next;
	
	node_list curr = head;
	
	printf("<");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m-1; j++)
		{
			curr=curr->next;
		}
		if(i<n-1)
			printf("%d, ", curr->next->data);
		else
			printf("%d", curr->next->data);
		removeNode(curr);
		
	}
	printf(">");

	return 0;
}
