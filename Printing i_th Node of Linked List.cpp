#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

Node *takeInput(){
    int data;
    int size=0;
    cin>>data;
    Node*head = NULL;
    Node*tail = NULL;
    while(data!=-1){
        Node * newNode= new Node(data);
        size++;
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
    cout<<"Size of Linked List is "<<size;
    cout<<". So you can access positions till "<<size<<endl;
    return head;
}

void print(Node*head){
    Node*temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }
}

int ith_Node(Node*head, int x){
    if(x==0){
        cout<<"No positions for 0"<<endl;
        return 0;
    }
    Node*current = head;
    int count = 1;
    while(current!=NULL){
        if(count == x){
            return current->data;
            break;
        }
        current = current->next;
        count++;
        
    }
    return current->data;
}

int main(){
    cout<<"Enter the elements in the Linked List: "<<endl;
    Node *head = takeInput();
    cout<<"Enter the node position you want to print: "<<endl;
    int x;
    cin>>x;
    cout<<"Element at position "<<x<<" is: "<<ith_Node(head, x);
}
