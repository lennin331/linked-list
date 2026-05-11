//deletion in linked list
#include<bits/stdc++.h>
using namespace std;
// 1 -> 2 -> 3 -> 4
class Node {
    public: 
    int data;
    Node* next;
    //constructor for (data, next)
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    //constructor for (data)
    Node(int data1){
        data = data1;
        next = nullptr;
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
}
int main(){
    vector<int> arr = {22,5,8,7};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while(temp){
        cout<< temp->data <<" ";
        temp = temp -> next;

    }
    cout<<"\n";
    cout<<lengthofLL(head);
}