#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};
typedef struct Node *node;

node makeNode(int x) {
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
node reverse(node &a) {
    node prev = NULL;
    node next = NULL;
    while(a!=NULL) {
        next = a->next;
        a->next = prev; // set NULL value at 1st
        prev = a;
        a = next;
    }
    a = prev;
    return a;
}
int sizeOfList(node a) {
    int c;
    while(a!=NULL) {
        a = a->next;
        c++;
    }
    return c;
}
bool isPalindrome(node &a) {
    node f = a;
    node s = a;
    int c;
    c = sizeOfList(a);
    while(f!=NULL) {
        f = f->next->next;
        s = s->next;
    }
    // node prev = NULL;
    while(s!=NULL) {
        s = reverse(s);
    }
    node left, right;
    left = a;
    right = s;
    while(right!=NULL){
        if(left->data != right->data)
            return false;
        left = left->next;
        right = right->next;
    }
    return true;
}
void insertLast(node &a, int x) {
    node tmp = makeNode(x);
    if(a==NULL)
        a = tmp;
    else {
        node p = a;
        while(p->next!=NULL) {
            p = p->next;
        }
        p->next = tmp;
    }
}
void show(node a) {
    while(a!=NULL) {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}
int main() {
    node head = NULL;
    int x, c;
    bool k;
    while(c!=10) {
        cin >> x;
        insertLast(head, x);
        c++;
    }
    // reverse(head);
    show(head);
    k = isPalindrome(head);
    if(k==1)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
