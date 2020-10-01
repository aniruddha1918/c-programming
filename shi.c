#include <stdio.h>
#include<conio.h>
struct s
{
    enum { is_int, is_float, is_char } type;
    union {
        int ival;
        float fval;
        char cval;
    };
}stack[10];
void push(void);
void pop(void);
void transverse(void);

max=10,top=-1;
main()
//Compiler version gcc  6.3.0
{
   int item;
   do
      { 
     printf("enter number to perform following operation\n 1 for push\n 2 for pop\n 3 for display\n 4 for exit\n");
      
     scanf("%d",&item);
        
        switch(item)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                transverse();
                break;
            }
            case 4:
            {
                printf("exit \n ");
                break;
            }
            default:
            {
                printf (" invalid number\n try again\n");
            }
                
        }
    }
    while(item!=4);
    getch();
} 
 void push()
{
  
  if(top==max-1)
    printf ("stack is full\n");
  else
  {
    top=top+1;
   printf("value to be stored \n0 for int \n1 for float \n2 for char\n");
   scanf("%d", &stack[top].type);
   
   
   switch(stack[top].type) 
   {
case is_int:
  {
    printf ("insert value\n\n");
    scanf("%d",&stack[top].ival);
    break;
    }
case is_float:
  {
    printf ("insert value\n\n");
    scanf("%f",&stack[top].fval);
    break;
    }
case is_char:
  {
    printf ("insert value\n\n");
    fflush(stdin);
    scanf("%c",&stack[top].cval);
    break;
    }
    }
  }
} 

 
  void pop()
{
    if(top==-1) 
        printf(" Stack is empty\n");
    else
    {
         top=top-1;
    }
}
 void transverse()
{
    int i;
    if(top==-1)
     printf("The stack is empty\n");    
    else
    {
         printf("The elements in stack \n");
        for(i=top; i>=0;i--)
        {
          switch (stack[i].type) {
case is_int:
  {
      printf("%d\n",stack[i].ival);
      break;
    }
case is_float:
  {
      printf("%.2f\n",stack[i].fval);
      break;
    }
case is_char:
  {
      printf("%c\n",stack[i].cval);
      break;
    }
     }
   } 
 }
}