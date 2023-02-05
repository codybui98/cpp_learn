#include<iostream>
using namespace std;

struct List {
    int data;
    List *next;
};
typedef struct List *list;

list makeNode(int x) {
    list tmp = new List();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
int Size(list a) {
    int q;
    while(a !=NULL)
        q++;
    return q;
}
void insertFirst(list &a, int x) {
    list tmp;
    tmp = makeNode(x);
    if(a==NULL) {
        a = tmp;
    }
    else {
        tmp->next = a;
        a = tmp;
    }
}
void insertLast(list &a, int x) {
    list tmp;
    tmp = makeNode(x);
    if(a==NULL)
        a = tmp;
    else {
        list p = a;
        while(p->next != NULL) 
            p = p->next;
        p->next = tmp;
    }
}
void in(list a) {
    while(a!=NULL) {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}
void sorting_l2h(list &a) {
    for (list p = a; p->next != NULL; p = p->next) {
        list min = p;
        for (list q = p->next; q != NULL; q = q->next) {
            if(q->data < min->data) {
                min = q;
            }
        }
        int tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
    in(a);
}
void mergeList(list a, list b) {
    
}
int main() {
    int a, b, c=0;
    list head1 = NULL;
    list head2 = NULL;
    // List head2;
    while(c<3) {
        cin >> a;
        cin >> b;
        // c++;
        insertLast(head1, a);
        insertLast(head2, b);
        c++;
    }
    sorting_l2h(head1);
    sorting_l2h(head2);
    // in(head1);
    // in(head2);
    mergeList(head1, head2);
}