#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <assert.h>

#define FALSE 0

typedef struct STACK_NODE{
	STACK_TYPE value;
	struct STACK_NODE *next;
}StackNode;

static StackNode *stack = NULL;

void create_stack(size_t size){
}

void destory_stack(void)
{
	while(!is_empty())
		pop();
}
void push(STACK_TYPE value)
{
	StackNode *new_node;

	new_node = malloc(sizeof(StackNode));
	assert(new_node != NULL);
	new_node->value = value;
	new_node->next = stack;
	stack = new_node;
}

STACK_TYPE pop(void)
{
	StackNode *first_node;
	STACK_TYPE temp;
	if(!is_empty()){
		first_node = stack;
		temp = first_node->value;
		stack = first_node->next;
		free(first_node);
	
		return temp;
	}
	return -1;
}

STACK_TYPE top(void)
{
	assert(!is_empty());
	return stack->value;
}
int is_empty(void){
	return stack == NULL;
}
int is_full(void){
	return FALSE;
}




