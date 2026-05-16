//deletion in linked list
#include<bits/stdc++.h>
using namespace std;
// 1 -> 2 -> 3 -> 4
class Node {
    public: 
    int data;
    Node* next;
    Node* back;
    //constructor for (data, next)
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
        back = nullptr;
    }
    //constructor for (data)
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
};
int lengthofLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
};
Node* convertarr2DLL(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for(int i=1; i<arr.size(); i++){
            Node* temp = new Node(arr[i], nullptr, prev);
            prev-> next = temp;
            prev = prev->next;
        }
    return head;
    

}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head-> next;
    }
};
int main(){
    vector<int> arr = {22,5,8,7};
    Node* head = convertarr2DLL(arr);
    print(head);
    return 0;
};