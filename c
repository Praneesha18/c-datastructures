#include<stdio.h> 
#include<stdlib.h> 
#define MAX 5 
int front=-1; int rear=-1; int q[MAX]; 
void enqueue(int var) 
{     if(front==-1)     
      {         
        front=0;
        rear=0;        
        q[rear]=var;
      }     
      else     
      {        
        rear=(rear+1)%MAX;         
        q[rear]=var;     
      } 
} 
int dequeue() 
{     
  int temp;     
  if(isempty())     
  {         
    printf("queue is empty\n");     
  }     
  temp=q[front];     
  if(rear==front)    
  {         
    front=-1;        
    rear=-1;         
    return temp;     
  }     
  front=(front+1)%MAX;
  return temp; 
}
int isfull()
{     
  if(front==rear+1||(front==0&&rear==MAX-1))     
  {         
    return 1;     
  }
  return 0;
}
int isempty()
{     
  if(front==-1)     
  { 
    return 1;     
  }     
  return 0;
} 
void display()
{     
  if(isempty())     
  {
    printf("the queue is empty\n");
  }
  else
    printf("the elements of the queue\n");
    int i=front;
    while(i!=rear)
      { 
        printf("%d",q[i]);
        i=(i+1)%MAX;
        printf("\n");
      }
        printf("%d ",q[rear]);
}
int main()
{
  int choice;
  int var;
  printf("\nwelcome to operations on queues\n");
  printf("\n1)enqueue\n2)dequeue\n3)exit\n");
  while(1)
{
printf("enter choice\n);
  scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the element you want to insert\n");
scanf("%d",&var);
enqueue(var);
break;
case 2:printf("the deleted element is %d\n",dequeue());
break;
case 3:exit(1);
break;
default :printf("\nplease choose correct option\n");
break;
}
printf("\nfront=%d\nrear=%d\n",front,rear);
display();
}
return 0;
}


  
