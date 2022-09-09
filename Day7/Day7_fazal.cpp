#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void create(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = head;
    head = ptr;
}
void print()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
void reverse()
{
    struct node* current=head;
    struct node* prev=NULL;
    struct node* next=NULL;
    while (current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
int main()
{
    create(5);
    create(4);
    create(3);
    create(2);
    create(1);
    cout<<"Linked list before reversing :"<<endl;
    print();
    reverse();
    cout<<"\nLinked list after reversing :"<<endl;
    print();
    return 0;
}
