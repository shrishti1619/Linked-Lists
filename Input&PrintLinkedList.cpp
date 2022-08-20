//This code contains two ways to take input
//Takeinput better (this one is a better way for taking input)
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node * takeInputBetter(){
    int data;
    cout<<"Enter the elements of linked list and end it with -1"<<endl;
    cin>>data;
    Node * head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node * newNode = new Node(data);
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

Node * takeInput(){
    int data;
    cout<<"Enter the elements of linked list and end it with -1"<<endl;
    cin>>data;
    Node *head = NULL;
    while(data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
        }
        else{
            Node*temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin>>data;
        
    }
    return head;
}

void print(Node *head){
    if(head==NULL){
        cout<<"head is null";
    }
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    
    Node *head = takeInputBetter();
    print(head);
    
}
