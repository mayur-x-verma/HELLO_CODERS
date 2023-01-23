#include <stdio.h>
using namespace std;
// struct(public by default) is better than class because it uses less space than class
// basic structure of a node
struct node
{
// creating a doubly linklist
    int data;
    node *next;
    node *prev;
    node(int x){
        data = x;
        *prev = NULL;
        *next = NULL;
    }
    
};
// void printList(node *head)
// {
//     node *curr = head;
//     while(curr!=NULL)
//     {
//         cout(curr->data);
//         curr = curr->next;

//     }
// }
int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    node *temp3 = new node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp1->prev = head;
    temp2->next = temp3;
    temp2->prev = temp2;
    temp3->prev = temp2;
    // another way (shorter)
    // node *head = new node(10);
    // node head->next = new node(20);
    // node head->next->next = new node(30);
    return 0;
}