#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data = data;
        next=NULL;
    }
};

Node*takeInput(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){
        Node* newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

Node*deleteNode(Node*head, int x){
    int count = 0;
    Node*temp = head;
    if(head ==NULL){
        return head;
    }
    if(x==0){
        head = temp->next;
        delete temp;
        return head;
    }
    else{
        while(temp!=NULL && count<x-1){
            temp = temp->next;
            count++;
        }
        
        if(temp->next == NULL){
            return head;
        }
    
        else if(temp!=NULL){
            Node*a = temp -> next;
            temp->next = temp->next->next;
            delete a;
        }
        
        return head;
        }
    
    
}

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    cout<<"Enter the elements in Linked List: "<<endl;
    Node* head = takeInput();
    cout<<"Enter the index at which you want to delete Node : "<<endl;
    int index;
    cin>>index;
    head = deleteNode(head, index);
    print(head);
}

