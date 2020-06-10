// THE PROBLEM
// ***************************
// Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument) 
// and inserts it at the tail of the linked list referenced by the head parameter. 
// Once the new node is added, return the reference to the head node.
// Solution Created By: Dustin Kaban
// Date: June 10th, 2020
// ***************************

#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          Node** pp = &head; // pp is the pointer to the pointer head
        while(*pp) // While head is not null (the content of pp is not null)
            pp = &((*pp)->next); // pp receive the address of the pointer to next node
        *pp = new Node(data); // the content of pp is the address to the last node
        return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}
