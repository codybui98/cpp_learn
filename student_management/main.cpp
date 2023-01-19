#include<iostream>
using namespace std;

struct Student {
    string name, id;
    double gpa;
};
struct SV {
    Student s ;
    SV *next;
};
typedef struct SV *sv;

// cap phat don mot node moi voi du lieu struct
sv makeNode() {
    sv tmp = new SV();
    cout << "Nhap thong tin sinh vien: \n";
    cout << "Nhap ID:";
    cin >> tmp->s.id;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, tmp->s.name);
    cout << "Nhap GPA: ";
    cin >> tmp->s.gpa;
    tmp->next = NULL;
    return tmp;
}
// kiem tra rong
bool empty(sv a) {
    return a == NULL;
}
// tinh so phan tu trong list
int Size(sv a) {
    int cnt = 0;
    while(a!=NULL) {
        cnt++;
        a = a->next; // gan dia chi cua node ke tiep vao node hien tai
        // cho node hien tai chay sang node tiep theo
    }
    return cnt;
}
// them 1 phan tu vao dau list 
void insertFirst(sv &a) {
    sv tmp = makeNode();
    if(a==NULL) {
        a = tmp;
    }
    else {
        tmp->next = a;
        a = tmp;
    }
}
// them 1 phan tu vao cuoi list 
void insertLast(sv &a) {
    sv tmp = makeNode();
    if (a == NULL) {
        a = tmp;
    }
    else {
        sv p = a;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = tmp;
    }
}
// them 1 phan tu vao giua list
void insertMiddle(sv &a, int pos) {
    int n = Size(a);
    if (pos < 0 || pos > n+1)
        cout << "Vi tri chen khong hop le" << endl;
    if(n==1) {
        insertFirst(a);
        return;
    }
    else if(n==pos+1) {
        insertLast(a);
        return;
    }
    sv p = a;
    for (int i = 1; i < pos - 1; i++) {
        p = p->next;
    }
    sv tmp = makeNode();
    tmp->next = p->next;
    p->next = tmp;
}
// xoa o dau list
void deleteFirst(sv &a) {
    if(a==NULL)
        return;
    a = a->next;
}
// xoa cuoi list
void deleteLast(sv &a) {
    if(a==NULL)
        return;
    sv truoc = NULL, sau = a;
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
void deleteMiddle(sv &a, int pos) {
    if(pos<=0 || pos > Size(a))
        return;
    sv truoc = NULL, sau = a;
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
void in(Student s) {
    cout << "-----------------------" << endl;
    cout << "ID: " << s.id << endl;
    cout << "Ten: " << s.name << endl;
    cout << "GPA: " << s.gpa << endl;
    cout << "-----------------------" << endl;
}
void show(sv a) {
    // cout << "-----------------------" << endl;
    while(a!=NULL) {
        // cout << a->s.gpa << endl;
        in(a->s);
        a = a->next;
    }
    cout << endl;
}
// sap xep
void sorting_l2h(sv &a) {
    for (sv p = a; p->next != NULL; p = p->next) {
        sv min = p;
        for (sv q = p->next; q != NULL; q = q->next) {
            if(q->s.gpa < min->s.gpa) {
                min = q;
            }
        }
        Student tmp = min->s;
        min->s = p->s;
        p->s = tmp;
    }
}
void sorting_h2l(sv &a) {
    for (sv p = a; p->next != NULL; p = p->next) {
        sv max = p;
        for (sv q = p->next; q != NULL; q = q->next) {
            if(q->s.gpa > max->s.gpa) {
                max = q;
            }
        }
        Student tmp = max->s;
        max->s = p->s;
        p->s = tmp;
    }
}
// tim kiem
void search_max(sv &a) {
    sv max = a;
    sv p = a;
    // insertLast(a, 0);
    do{
        p = p->next;
        if (p->s.gpa > max->s.gpa)
            max = p;
    } while(p->next != NULL);
    cout <<"Gia tri lon nhat: " << max->s.gpa << endl;
}
void search_min(sv &a) {
    sv min = a;
    sv p = a;
    do{
        p = p->next;
        if (p->s.gpa < min->s.gpa)
            min = p;
    } while(p->next != NULL);
    cout <<"Gia tri nho nhat: " << min->s.gpa << endl;
}
int main() {
    sv head = NULL;
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
            insertFirst(head);
            break;
        case 2:
            insertLast(head);
            break;
        case 3:
            int pos;
            cout << "Nhap vi tri can chen: ";
            cin >> pos;
            insertMiddle(head, pos);
            break;
        case 4:
            deleteFirst(head);
            break;
        case 5:
            deleteLast(head);
            break;
        case 6:
            int x;
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