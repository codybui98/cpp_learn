#include<iostream>
#include<string>

using namespace std;

class Contact {
    private:
        string name;
        Contact *next;
    public:
        Contact(string);
        friend ostream &operator<<(ostream &, Contact);
        friend istream &operator>>(istream &, Contact &);
        friend class ContactList;
}; // node
class ContactList {
    private:
        Contact *head;
        int size;
    public:
        ContactList();
        void addToHead(string&);
}; // list
Contact::Contact(string a) {
        this->name = a;
        this->next = NULL;
}
ostream& operator<<(ostream& out, Contact a) {
        out << a.name << endl;
        return out;
}
istream& operator>>(istream& in, Contact &a) {
        in >> a.name;
        return in;
}
ContactList::ContactList() {
        this->head = NULL;
        this->size = 0;
}
void ContactList::addToHead(string& a) {
        Contact *newOne = new Contact(a);
        if(this->head == NULL) {
            this->head = newOne;
        }
        else 
        {
            newOne->next = this->head;
            this->head = newOne;
        }
        this->size++;
}
int main() {
        ContactList *cl1 = new ContactList();
        string name;
        while(1) {
            cout << "Enter the name of the contact or q to quit." << endl;
            cin >> name;
            if(name=="q")
                break;
            else {
                cl1->addToHead(name);
            }
        }
        return 0;
}