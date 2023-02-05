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
void insertFirst(node &a, int x) {
    node tmp = makeNode(x);
    if(a==NULL)
        a = tmp;
    else {
        tmp->next = a;
        a = tmp;
    }
}
void in(node a) {
    while(a != NULL) {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}
int sizeL(node a) {
    int c;
    while (a->next!=NULL) {
        c++;
        a = a->next;
    }
    return c;
}
node reverse(node &a) {
    node prev = NULL;
    node next = NULL;
    while(a!=NULL) {
        next = a->next;
        a->next = prev;
        prev = a;
        a = next;
    }
    a = prev;
    return a;
}
int main() {
    node head = NULL;
    int x;
    for (int i = 0; i < 4; i++)
    {
        insertLast(head, i);
    }
    in(head);
    head = reverse(head);
    in(head);
    return 0;
}