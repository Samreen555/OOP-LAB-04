///*
//Explore std::list operations further by implementing custom sorting and merging lists.
//*/
//#include <list>
//#include <iostream>
//using namespace std;
//
//void printList(const list<int>& lst) {
//    for (int n : lst)
//        cout << n << " ";
//    cout << endl;
//}
//
//class listElements {
//public:
//    void sort(list<int>& lst) {
//        lst.sort();
//    }
//
//    void merge(list<int>& lst1, list<int>& lst2) {
//        lst1.merge(lst2);
//    }
//};
//
//int main() {
//    listElements List;
//    list<int> myList = { 1, 2, 3, 4, 5 };
//    list<int> myList1 = { 5, 6, 7, 8, 9 };
//    myList.push_back(6); // Add to the end
//    myList.push_front(0); // Add to the front
//
//    cout << "Original List 1: ";
//    printList(myList);
//    cout << "Original List 2: ";
//    printList(myList1);
//
//    cout << "Merging the lists: " << endl;
//    List.merge(myList, myList1);
//    cout << "Merged List: ";
//    printList(myList);
//
//    cout << "Sorting the list: " << endl;
//    List.sort(myList);
//    cout << "Sorted List: ";
//    printList(myList);
//
//    system("pause>0");
//}