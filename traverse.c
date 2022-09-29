#include<stdio.h>
struct node{
int data;
struct node * link;
};
void main(){
struct node *head;
head=(struct node *)malloc(sizeof(struct node));
head->data=10;
head->link=NULL;

struct node * current;
current=(struct node *)malloc(sizeof(struct node));
current->data=20;
current->link=NULL;

head->link=current;

current=(struct node *)malloc(sizeof(struct node));
current->data=30;
current->link=NULL;
head->link->link=current;

struct node * ptr=head;
while(ptr!=NULL){
printf("%d ",ptr->data);
ptr=ptr->link;
}}
