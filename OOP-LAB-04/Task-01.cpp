///*
//Implement additional functionalities in the LinkedList class such as search and reverse.
//*/
//#include<iostream>
//using namespace std;
//class Node  // operates by the class linkedlist
//{
//public:
//    int data;
//    Node* next;
//    Node* prev;
//    Node(int d) : data(d), next(nullptr) {}
//};
//class LinkedList    // operates this class in main() 
//{
//public:
//    Node* head;
//    Node* tail;
//    LinkedList() : head(nullptr), tail(nullptr) {}
//    void append(int data) {
//        Node* newNode = new Node(data);
//        if (!head) {
//            head = newNode;
//        }
//        else
//        {
//            Node* temp = head;
//            while (temp->next)
//            {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//    void display()
//    {
//        Node* temp = head;
//        while (temp)
//        {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << " NULL\n ";
//    }
//    void reverse()
//    {
//        tail = head;
//        // Initialize current, previous and next pointers
//        Node* current = head;
//        Node* prev = nullptr, * next = nullptr;
//        while (current != nullptr) {
//            // Store next
//            next = current->next;
//            // Reverse current node's pointer
//            current->next = prev;
//            // Move pointers one position ahead.
//            prev = current;
//            current = next;
//        }
//        head = prev;
//    }
//    void display1()
//    {
//        Node* temp = head;
//        while (temp != nullptr)
//        {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << " NULL\n ";
//    }
//    bool search(int key)
//    {
//        Node* temp = head;
//        while (temp != nullptr)
//        {
//            if (temp->data == key)
//            {
//                return true;
//            }
//            temp = temp->next;
//        }
//        return false;
//    }
//    ~LinkedList()
//    {
//        while (head)
//        {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//        cout << "\n NULL: ";
//    }
//};
//int main()
//{
//    LinkedList list;
//    cout << "Original list: " << endl;
//    list.append(10);
//    list.append(20);
//    list.append(30);
//    list.display();
//    cout << "Reversed list: " << endl;
//    list.reverse();
//    list.display1();
//    int key = 10;
//    cout << "Search for " << key << ":";
//    if (list.search(key)) 
//    {
//        cout << "\nFound: ";
//    }
//    else
//    {
//        cout << "\nNot found: ";
//     }
//        system("pause>0");
//}