#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef struct Node *node;

// cap phat don mot node moi voi du lieu la so nguyen
node makeNode(int x) {
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
// kiem tra rong
bool empty(node a) {
    return a == NULL;
}
// tinh so phan tu trong list
int Size(node a) {
    int cnt = 0;
    while(a!=NULL) {
        cnt++;
        a = a->next; // gan dia chi cua node ke tiep vao node hien tai
        // cho node hien tai chay sang node tiep theo
    }
    return cnt;
}
// them 1 phan tu vao dau list 
void insertFirst(node &a, int x) {
    node tmp = makeNode(x);
    if(a==NULL) {
        a = tmp;
    }
    else {
        tmp->next = a;
        a = tmp;
    }
}
// them 1 phan tu vao cuoi list 
void insertLast(node &a, int x) {
    node tmp = makeNode(x);
    if (a == NULL) {
        a = tmp;
    }
    else {
        node p = a;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = tmp;
    }
}
// them 1 phan tu vao giua list
void insertMiddle(node &a, int x, int pos) {
    int n = Size(a);
    if (pos < 0 || pos > n+1)
        cout << "Vi tri chen khong hop le" << endl;
    if(n==1) {
        insertFirst(a,x);
        return;
    }
    else if(n==pos+1) {
        insertLast(a, x);
        return;
    }
    node p = a;
    for (int i = 1; i < pos - 1; i++) {
        p = p->next;
    }
    node tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}
// xoa o dau list
void deleteFirst(node &a) {
    if(a==NULL)
        return;
    a = a->next;
}
// xoa cuoi list
void deleteLast(node &a) {
    if(a==NULL)
        return;
    node truoc = NULL, sau = a;
    while(sau->next!=NULL) {
        truoc = sau;
        sau = sau->next;
    }
    if(truoc==NULL) {
        a = NULL;
    }
    else {
        truoc->next = NULL;
    }
}
// xoa o giua list
void deleteMiddle(node &a, int pos) {
    if(pos<=0 || pos > Size(a))
        return;
    node truoc = NULL, sau = a;
    for (int i = 1; i < pos; i++) {
        truoc = sau;
        sau = sau->next;
    }
    if (truoc==NULL) {
        a = a->next;
    }
    else {
        truoc->next = sau->next;
    }
}
// in list
void show(node a) {
    // cout << "-----------------------" << endl;
    while(a!=NULL) {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}
// sap xep
void sorting_l2h(node &a) {
    for (node p = a; p->next != NULL; p = p->next) {
        node min = p;
        for (node q = p->next; q != NULL; q = q->next) {
            if(q->data < min->data) {
                min = q;
            }
        }
        int tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
}
void sorting_h2l(node &a) {
    for (node p = a; p->next != NULL; p = p->next) {
        node max = p;
        for (node q = p->next; q != NULL; q = q->next) {
            if(q->data > max->data) {
                max = q;
            }
        }
        int tmp = max->data;
        max->data = p->data;
        p->data = tmp;
    }
}
// tim kiem
void search_max(node &a) {
    node max = a;
    node p = a;
    // insertLast(a, 0);
    do{
        p = p->next;
        if (p->data > max->data)
            max = p;
    } while(p->next != NULL);
    cout <<"Gia tri lon nhat: " << max->data << endl;
}
void search_min(node &a) {
    node min = a;
    node p = a;
    do{
        p = p->next;
        if (p->data < min->data)
            min = p;
    } while(p->next != NULL);
    cout <<"Gia tri nho nhat: " << min->data << endl;
}
int main() {
    node head = NULL;
    while(1){
        cout << "-----------------MENU-------------------\n";
        cout << "1. Chen phan tu vao dau danh sach \n";
        cout << "2. Chen phan tu vao cuoi danh sach \n";
        cout << "3. Chen phan tu vao giua danh sach \n";
        cout << "4. Xoa phan tu dau danh sach \n";
        cout << "5. Xoa phan tu cuoi danh sach \n";
        cout << "6. Xoa phan tu giua danh sach \n";
        cout << "7. Duyet danh sach lien ket \n";
        cout << "8. Sap xep danh sach tang dan \n";
        cout << "9. Sap xep danh sach giam dan \n";
        cout << "10. Tim GTLN \n";    
        cout << "11. Tim GTNN \n";    
        cout << "----------------------------------------";
        int lc=0,x=0;
        cout << "Nhap yeu cau: ";
        cin >> lc;
        switch (lc)
        {
        case 1:
            // int x;
            cout << "Nhap gia tri can chen: ";
            cin >> x;
            insertFirst(head, x);
            break;
        case 2:
            // int x;
            cout << "Nhap gia tri can chen: ";
            cin >> x;
            insertLast(head, x);
            break;
        case 3:
            // int x;
            int pos;
            cout << "Nhap gia tri can chen: ";
            cin >> x;
            cout << "Nhap vi tri can chen: ";
            cin >> pos;
            insertMiddle(head, x, pos);
            break;
        case 4:
            deleteFirst(head);
            break;
        case 5:
            deleteLast(head);
            break;
        case 6:
            // int x;
            cout << "Nhap vi tri can xoa: ";
            cin >> x;
            deleteMiddle(head, x);
            break;
        case 7:
            show(head);
            break;
        case 8:
            sorting_l2h(head);
            break;
        case 9:
            sorting_h2l(head);
            break;
        case 10:
            search_max(head);
            break;
        case 11:
            search_min(head);
            break;
        }
    }
    return 0;
}