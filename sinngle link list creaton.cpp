#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
struct node *root;
void createlist();
void displaylist();
void delete1();
int main()
{
    root=NULL;
    createlist();
    displaylist();
    int l=0;
    cout<<"enter 1 to delete a node";
    cin>>l;
    if(l==1){
        delete1();
    }

}
void createlist()
{
    char k='y';
    int d;
    struct node *temp,*n;
    while(k=='y'||k=='Y')
    {
        if(root==NULL){
            root=(struct node*)malloc(sizeof(struct node));
            cin>>d;
            root->data=d;
            root->next=NULL;
            temp=root;
        }
        else{
            n=(struct node*)malloc(sizeof(struct node));
            cin>>d;
            n->data=d;
            n->next=NULL;
            temp->next=n;
            temp=n;
        }
        cout<<"enter for more";
        cin>>k;

    }
}
void displaylist(){
 struct node *temp;
 temp=root;
 while(temp!=NULL){
    printf("  %d",temp->data);
    temp=temp->next;
 }
}
void delete1()
{
    struct node *temp,*temp1;
    cout<<"ENTER NODE NUMBER YOU WANT TO DELETE";
    int nodeno;
    cin>>nodeno;
    temp=root;
    int i=0;
    for(i=1;i<nodeno;i++){
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    temp->next=NULL;
    displaylist();
}
