///*
//Simulate a simple spreadsheet application where each list within a list of 
//lists represents a row in the spreadsheet. 
//Implement functionalities to add a new row, delete a row, and display the spreadsheet.
//*/
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// Spreadsheet class
//class Spreadsheet {
//private:
//    vector<vector<int>> data;
//
//public:
//    // Function to add a new row to the spreadsheet
//    void addRow(const vector<int>& newRow) {
//        data.push_back(newRow);
//    }
//
//    // Function to delete a row from the spreadsheet
//    void deleteRow(int rowIndex) {
//        if (rowIndex >= 0 && rowIndex < data.size()) {
//            data.erase(data.begin() + rowIndex);
//        }
//        else {
//            cout << "Invalid row index!" << endl;
//        }
//    }
//
//    // Function to display the spreadsheet
//    void display() {
//        for (size_t i = 0; i < data.size(); ++i) {
//            cout << "Row " << i + 1 << ": ";
//            for (size_t j = 0; j < data[i].size(); ++j) {
//                cout << data[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    Spreadsheet spreadsheet;
//
//    // Adding rows to the spreadsheet
//    spreadsheet.addRow({ 1, 2, 3 });
//    spreadsheet.addRow({ 4, 5, 6 });
//    spreadsheet.addRow({ 7, 8, 9 });
//
//    cout << "Initial Spreadsheet:" << endl;
//    spreadsheet.display();
//
//    // Deleting a row from the spreadsheet
//    cout << "\nDeleting row 2..." << endl;
//    spreadsheet.deleteRow(1); // Deleting the second row (index 1)
//
//    cout << "\nUpdated Spreadsheet:" << endl;
//    spreadsheet.display();
//
//    return 0;
//}
