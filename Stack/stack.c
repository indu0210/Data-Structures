#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int top = -1, stack[MAX];
int option();
void push();
void pop();
void display();
int main(){
  int op;
  op = option();
  while (op != 6){
    switch(op){
     case 1:{
       push();
       break;
     }
     case 2:{
       pop();
       break;
     }
     case 3:{
       display();
       break;
     }
     case 4:{
      exit(0);	    
    }
   }
   op = option();
  }
}
int option(){
 int opt = 0;
 printf("\nWhat do you want to do??\n1.Adding elements to stack\n2.Deleting an element\n3.Display what all are present in stack\n4.Nothing\nYour option please:   ");
 scanf("%d", &opt);
 return opt;
}
void push(){
 int num;
 if (top == MAX - 1){
   printf("Stack is full \n");
 }else{
   printf("Enter the elements to push into stack:");
   scanf("%d",&num);
   top ++;
   stack[top]= num;
 }
}
void pop(){
  if(top == -1){
    printf("\nStack is empty \n");
  }else{
    printf("Element deleted is %d\n",stack[top]);
    top--;
  }
}
void display(){
  int i;
  if (top == -1){
    printf("\nStack is empty \n");
  }else{
    printf("Stack is \n");
    for(i = top; i >= 0; i--){
      printf("%d\n", stack[i]);
    }
  }
}
