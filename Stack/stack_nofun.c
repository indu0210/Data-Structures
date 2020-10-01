#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int main(){
 int top = -1, stack[MAX];
 int op, num;
 printf("\nWhat do you want to do??\n1.Adding elements to stack\n2.Deleting an element\n3.Display what all are present in stack\n4.Nothing\nYour option please:   ");
 scanf("%d", &op);
 while (op != 5){
  switch(op){
   case 1:{
    if (top == MAX - 1){
     printf("Stack is full \n");
    }else{
     printf("Enter the elements to push into stack:");
     scanf("%d",&num);
     top ++;
     stack[top]= num;
    }
    break;
   }
   case 2:{
    if(top == -1){
     printf("\nStack is empty \n");
    }else{
     printf("Element deleted is %d\n",stack[top]);
     top--;
    }
    break;
   }
   case 3:{
    int i;
    if (top == -1){
     printf("\nStack is empty \n");
    }else{
     printf("Stack is \n");
     for(i = top; i >= 0; i--){
     printf("%d\n", stack[i]);
     }
    }
    break;
   }
   case 4:{
    exit(0);	  
   }	  
  }
  printf("\nWhat do you want to do??\n1.Adding elements to stack\n2.Deleting an element\n3.Display what all are present in stack\n4.Nothing\nYour option please:   ");
  scanf("%d", &op);
 }
}
