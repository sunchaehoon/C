#include <stdio.h>
#define STACK_SIZE 5
typedef char element;
element stack[STACK_SIZE];
int top = -1;
void push(element item) {
	if (top >= STACK_SIZE - 1) {
		printf("Stack is Full!\n");
		return;
	}
	else stack[++top] = item;
}
element pop(void) {
	if (pop == -1) {
		printf("Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}
int main() {
	/*push(10);
	push(20);
	push(30);
	push(40);
	pop();
	pop();
	push(50);
	push(60);
	push(70);
	printf("%d", pop());
	printf("%3d", pop());
	printf("%3d", pop());
	printf("%3d", pop());
	printf("%3d", pop());*/
	push('H');
	push('E');
	push('L');
	push('L');
	push('O');
	printf("%c ",pop());
	printf("%c ",pop());
	printf("%c ",pop());
	printf("%c ",pop());
	printf("%c ",pop());
}
