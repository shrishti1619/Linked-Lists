#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* takeInput(){
    int data;
    cin>>data;
    Node*head = NULL;
    Node* tail = NULL;
    while(data!=-1){
        Node*newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

Node*insertNode(Node*head, int i, int data){
    Node*newNode= new Node(data);
    int count = 0;
    Node*temp = head;
    if(i==0){
        newNode->next=head;
        head = newNode;
        return head;
    }
    else{
        while(temp!=NULL && count<i-1){
            temp = temp->next;
            count++;
        }
        if(temp!=NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    }
    return head;
}

void print(Node* head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    cout<<"Enter the elements of Linked List: "<<endl;
    Node*head = takeInput();
    cout<<"Enter the index you want to insert at: "<<endl;
    int indexToInsert;
    cin>>indexToInsert;
    cout<<"Enter the element you want to insert: "<<endl;
    int newData;
    cin>>newData;
    head =insertNode(head, indexToInsert, newData);
    print(head);
}
