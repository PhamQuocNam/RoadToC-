/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
std
###End banned keyword*/

#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
	int data;
	SinglyLinkedListNode *next;

	SinglyLinkedListNode(int node_data) {
		this->data = node_data;
		this->next = nullptr;
	}
};

struct SinglyLinkedList {
	SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList() {
		this->head = nullptr;
        this->tail = nullptr;
    }

	void insert_node(int node_data);
};

void SinglyLinkedList::insert_node(int node_data)
{
			SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
        if(this->head==NULL){
            this->head=node;
            this->tail=node;
        }
        else{
            node->next=this->head;
            this->head= node;
        }
}



void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        cout << node->data;

        node = node->next;
    }
    cout << '\n';
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}


int main (){
    int num; // decimal number
    SinglyLinkedList* binary=new SinglyLinkedList(); // binary number
    cin>>num;
    if(num==0) cout<<0;
    while(num!=0){
        binary->insert_node(num%2);
        num/=2;
    }
    print_singly_linked_list(binary->head);
    return 0;
}
