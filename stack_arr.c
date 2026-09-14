#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
//Function prototypes
void push();
void pop();
void peek();
void display();
int main()
{
int choice;
while(true)
{
printf("\n***STACK OPERATIONS***\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Peek\n");
printf("4.Display\n");
printf("5.Exit\n");
printf("Enter your choice (1-5):");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
printf("Exiting program\n");
exit(0);
default:
printf("Invalid choice ! Please enter the number between 1 and 5\n");
}
}
return 0;
}
void push(){
int value;
if(top==MAX-1)
printf("Stack overflow! Cannot push more elements\n");
else{
printf("Enter the value to push:");
scanf("%d",&value);
top++;
stack[top]=value;
printf("%d succssfully pushed onto the stack.\n",value);
}
}
void pop(){
if(top==-1){
printf("Stack Underflow!The stack is already empty\n");
}else{
printf("Popped elementes %d\n",stack[top]);
top--;
}
}
void peek(){
if (top==-1){
printf("Stack is empty.No elements at the top.\n");
}
else{
printf("Top element is %d\n",stack[top]);
}
}
void display(){
if(top==-1){
printf("Stack is empty\n");
}else{
printf("Stack elements from top to bottom\n");
for(int i=top;i>=0;i--){
printf("|%d|\n",stack[i]);
}
printf("---\n");
}
}

