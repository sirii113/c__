#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

/* Insert at Beginning */
void insertBegin(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

/* Insert at End */
void insertEnd(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    Node* t = head;
    while (t->next != NULL)
        t = t->next;

    t->next = temp;
}

/* Insert at Position */
void insertAtPosition(int x, int pos) {
    if (pos == 1) {
        insertBegin(x);
        return;
    }

    Node* temp = new Node();
    temp->data = x;

    Node* t = head;
    for (int i = 1; i < pos - 1 && t != NULL; i++)
        t = t->next;

    if (t == NULL) {
        cout << "Invalid position\n";
        delete temp;
        return;
    }

    temp->next = t->next;
    t->next = temp;
}

/* Delete at Beginning */
void deleteBegin() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

/* Delete at End */
void deleteEnd() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* t = head;
    while (t->next->next != NULL)
        t = t->next;

    delete t->next;
    t->next = NULL;
}

/* Delete at Position */
void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (pos == 1) {
        deleteBegin();
        return;
    }

    Node* t = head;
    for (int i = 1; i < pos - 1 && t->next != NULL; i++)
        t = t->next;

    if (t->next == NULL) {
        cout << "Invalid position\n";
        return;
    }

    Node* temp = t->next;
    t->next = temp->next;
    delete temp;
}

/* Search */
void search(int key) {
    Node* t = head;
    int pos = 1;

    while (t != NULL) {
        if (t->data == key) {
            cout << "Element found at position " << pos << endl;
            return;
        }
        t = t->next;
        pos++;
    }
    cout << "Element not found\n";
}

/* Count Nodes */
void countNodes() {
    int count = 0;
    Node* t = head;

    while (t != NULL) {
        count++;
        t = t->next;
    }

    cout << "Total nodes = " << count << endl;
}

/* Display */
void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* t = head;
    while (t != NULL) {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << "NULL\n";
}

/* Main Function */
int main() {
    int choice, x, pos;

    do {
        cout << "\n--- SINGLY LINKED LIST MENU ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete at Beginning\n";
        cout << "5. Delete at End\n";
        cout << "6. Delete at Position\n";
        cout << "7. Search\n";
        cout << "8. Count Nodes\n";
        cout << "9. Display\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            insertBegin(x);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> x;
            insertEnd(x);
            break;

        case 3:
            cout << "Enter value and position: ";
            cin >> x >> pos;
            insertAtPosition(x, pos);
            break;

        case 4:
            deleteBegin();
            break;

        case 5:
            deleteEnd();
            break;

        case 6:
            cout << "Enter position: ";
            cin >> pos;
            deleteAtPosition(pos);
            break;

        case 7:
            cout << "Enter element to search: ";
            cin >> x;
            search(x);
            break;

        case 8:
            countNodes();
            break;

        case 9:
            display();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 0);

    return 0;
}
