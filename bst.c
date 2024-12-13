#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
};

struct node* newNode(int val){
  struct node *temp=malloc(sizeof(struct node));

  temp->data=val;
  temp->left=temp->right=NULL;

  return temp;
}

struct node* insert(struct node* temp,int key){
  if(temp == NULL){
    return newNode(key);
  }
  if(key < temp->data){
   temp->left = insert(temp->left,key);
  }else{
    temp->right = insert(temp->right,key);
  }

  return temp;
}

void search(struct node *temp,int val){
  if(temp == NULL){
    printf("not found");
    return;
  }
  if(temp->data == val){
    return;
  }
  else if(val < temp->data){
    search(temp->left,val);
  }else{
    search(temp->right,val);
  }
  printf("\n%d",temp->data);
}

void display(struct node *temp){
  if(temp != NULL){
    display(temp->left);
    printf("%d->",temp->data);
    display(temp->right);
  }
}

void main(){

  struct node *tree=NULL;

  tree = insert(tree,10);
  tree = insert(tree,20);
  tree = insert(tree,30);
  tree = insert(tree,40);
  tree = insert(tree,50);
  display(tree);
  search(tree, 50);

}
