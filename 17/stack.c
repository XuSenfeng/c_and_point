#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

static size_t stack_size;
static STACK_TYPE *stack;
static int top_element = -1;

void create_stack(size_t size)
{
	assert(stack_size == 0);
	stack_size = size;
	stack = malloc(stack_size * sizeof(STACK_TYPE));
	assert(stack != NULL);
}

void destory_stack(void)
{
	assert(stack_size > 0);
	stack_size = 0;
	free(stack);
	stack = NULL;
}

void push(STACK_TYPE value)
{
	assert(!is_full());
	top_element += 1;
	stack[top_element] = value;
}

STACK_TYPE pop(void)
{
	STACK_TYPE temp;
	assert(!is_empty());
	temp = stack[top_element];
	top_element -= 1;
	return temp;
}

STACK_TYPE top(void)
{
	assert(!is_empty());
	return stack[top_element];
}
int is_empty(void)
{
	assert(stack_size > 0);
	return top_element == -1;
}
int is_full(void)
{
	assert(stack_size > 0);
	return top_element == stack_size - 1;
}




