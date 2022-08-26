#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack{
    Node<T>* head;
    int size;       //Number of elements present in stack
    
    public:
    Stack(){
        head = NULL;
        size = 0;
    }
    
    int getSize(){
        return size;
    }
    
    bool isEmpty(){
        return (head==0);
    }
    
    void push(T element){
        Node<T>*newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
        
    }
    
    T pop(){
        if(isEmpty()){
            return 0;
        }
        Node<T>*temp = head;
        T ele = head->data;
        head = head->next;
        delete temp;
        size--;
        return ele;
    }
    
    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
};

int main(){
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    cout<<s.getSize()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    
    cout<<s.getSize()<<endl;
    
}
