#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node (int data)
  {
    this->data = data;
    next = NULL;
  }
};

Node * takeInput (){
  cout<<"Enter the elements of linked list and end it with -1"<<endl;
  int data;
  cin >> data;
  Node *head = NULL;
  Node *tail = NULL;
  while (data != -1){
      Node *newNode = new Node (data);
      if (head == NULL){
	  head = newNode;
	  tail = newNode;
	}
      else{
	  tail->next = newNode;
	  tail = tail->next;
	}
      cin >> data;
    }
return head;
}
void print (Node * head){
  if (head == NULL)
    {
      return;
    }
  Node *temp = head;
  while (temp != NULL)
    {
      cout << temp << " ";
      temp = temp->next;
    }
}

int size(Node * head){
    int count = 0;
    Node*current = head;
    while(current!=NULL){
        current = current->next;
        count+=1;
    }
    return count;
}
int main ()
{
    Node *head = takeInput();
    cout<<"Sise :"<<size(head);    
}