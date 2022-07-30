#define STACK_TYPE int
#include <stddef.h>
void push(STACK_TYPE value);
STACK_TYPE pop(void);
STACK_TYPE top(void);
int is_empty(void);
int is_full(void);
void create_stack(size_t size);
void destory_stack(void);

