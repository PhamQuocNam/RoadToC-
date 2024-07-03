#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        data=0;
        next=NULL;
    }
    Node(int dt){
        data=dt;
        next=NULL;
    }
};
class Linkedlist{
    public:
    Node* pHead;
    Node* pTail;

    Linkedlist(){
        this->pHead=NULL;
        this->pTail= NULL;
    }
     void insert_node(int node_data) {
            Node* node = new Node(node_data);

            if (!this->pHead) {
                this->pHead = node;
            } else {
                this->pTail->next = node;
            }
            this->pTail = node;
        }
    void InsertNodeAtHead(int dt){
        Node* p=new Node(dt);

        if(pHead==NULL){
            this->pHead=p;
            this->pTail=p;
        }
        else{
            p->next=this->pHead;
            this->pHead=p;
        }
    }
    void InsertNodeAtTail(int dt){
        Node* p=new Node(dt);
        if(pHead==NULL){
            this->pHead=p;
            this->pTail=p;
        }
        else{
            this->pTail->next=p;
            this->pTail=p;
        }
    }
    Linkedlist(int dt){
        InsertNodeAtHead(dt);
    }
    void PrintList(){
        Node *p=this->pHead;
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
    }
    void InsertAfterQ(Node* q,Node* p  ){
        if(q!=NULL){
            p->next=q->next;
            q->next=p;
            if(this->pTail==q){
                this->pTail=q;
            }
        }
        else{
            this->InsertNodeAtHead(p->data);
        }
    }
};
int main(){
    Linkedlist *list=new Linkedlist(3);
    Node* p=new Node(7);
    list->InsertNodeAtHead(2);
    list->InsertNodeAtTail(5);
    list->InsertAfterQ(list->pHead->next,p);
    list->PrintList();
    return 0;
}