
// #include <iostream>
// using namespace std;

// // PRN: 202501100067
// // Question 2: Hash Table Implementation
// // Commit 1: Initial Project Setup

// int main() {

//     // Dataset reused from Question 1
//     int arr[12] = {
//         14, 81, 51, 21, 88, 58,
//         28, 95, 65, 35, 5, 72
//     };

//     int n = 12;

//     cout << "Student Marks Dataset:" << endl;

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// // PRN: 202501100067
// // Question 2: Hash Table Implementation
// // Commit 2: Mid-Square Hash Function

// const int TABLE_SIZE = 37;

// int midSquareHash(int key) {
//     int square = key * key;

//     string s = to_string(square);

//     while (s.length() < 4) {
//         s = "0" + s;
//     }

//     int middle = stoi(s.substr(1, 2));

//     return middle % TABLE_SIZE;
// }

// int main() {

//     int arr[12] = {
//         14, 81, 51, 21, 88, 58,
//         28, 95, 65, 35, 5, 72
//     };

//     int n = 12;

//     cout << "Student Marks Dataset:" << endl;

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     cout << "\nMid-Square Hash Values:" << endl;

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " -> "
//              << midSquareHash(arr[i]) << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// // PRN: 202501100067
// // Question 2: Hash Table Implementation
// // Commit 3: Create Hash Table Structure

// const int TABLE_SIZE = 37;

// // Mid-Square Hash Function
// int midSquareHash(int key) {

//     int square = key * key;

//     string s = to_string(square);

//     while (s.length() < 4) {
//         s = "0" + s;
//     }

//     int middle = stoi(s.substr(1, 2));

//     return middle % TABLE_SIZE;
// }

// int main() {

//     // Dataset reused from Question 1
//     int arr[12] = {
//         14, 81, 51, 21, 88, 58,
//         28, 95, 65, 35, 5, 72
//     };

//     int n = 12;

//     // Display Dataset
//     cout << "Student Marks Dataset:" << endl;

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     // Display Hash Values
//     cout << "\nMid-Square Hash Values:" << endl;

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " -> "
//              << midSquareHash(arr[i]) << endl;
//     }

//     // Create Hash Table using Vector
//     vector<vector<int>> hashTable(TABLE_SIZE);

//     cout << "\nHash Table Structure Created Successfully!" << endl;

//     cout << "Total Buckets: " << hashTable.size() << endl;

//     cout << "Collision Handling: Separate Chaining" << endl;

//     return 0;
// }





// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// // PRN: 202501100067
// // Question 2: Hash Table Implementation
// // Commit 4: Implement Separate Chaining

// const int TABLE_SIZE = 37;

// // Mid-Square Hash Function
// int midSquareHash(int key) {

//     int square = key * key;

//     string s = to_string(square);

//     while (s.length() < 4) {
//         s = "0" + s;
//     }

//     int middle = stoi(s.substr(1, 2));

//     return middle % TABLE_SIZE;
// }

// // Insert key using Separate Chaining
// void insertKey(vector<vector<int>>& hashTable, int key) {

//     int index = midSquareHash(key);

//     hashTable[index].push_back(key);
// }

// int main() {

//     // Dataset reused from Question 1
//     int arr[12] = {
//         14, 81, 51, 21, 88, 58,
//         28, 95, 65, 35, 5, 72
//     };

//     int n = 12;

//     cout << "Student Marks Dataset:" << endl;

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     // Create Hash Table
//     vector<vector<int>> hashTable(TABLE_SIZE);

//     // Insert all values into Hash Table
//     for (int i = 0; i < n; i++) {
//         insertKey(hashTable, arr[i]);
//     }

//     cout << "\nHash Table Insertion Completed!" << endl;

//     cout << "Total Elements Inserted: " << n << endl;

//     cout << "Total Buckets: " << TABLE_SIZE << endl;

//     cout << "Collision Handling: Separate Chaining" << endl;

//     return 0;
// }




#include <iostream>
#include <string>
#include <vector>
using namespace std;

// PRN: 202501100067
// Question 2: Hash Table Implementation
// Commit 5: Display Hash Table and Collisions

const int TABLE_SIZE = 37;

// Mid-Square Hash Function
int midSquareHash(int key) {

    int square = key * key;

    string s = to_string(square);

    while (s.length() < 4) {
        s = "0" + s;
    }

    int middle = stoi(s.substr(1, 2));

    return middle % TABLE_SIZE;
}

// Insert key using Separate Chaining
void insertKey(vector<vector<int>>& hashTable, int key) {

    int index = midSquareHash(key);

    hashTable[index].push_back(key);
}

// Display Hash Table
void displayHashTable(const vector<vector<int>>& hashTable) {

    cout << "\n========== HASH TABLE ==========" << endl;

    for (int i = 0; i < TABLE_SIZE; i++) {

        cout << i << " : ";

        if (hashTable[i].empty()) {
            cout << "Empty";
        }
        else {

            for (int j = 0; j < hashTable[i].size(); j++) {

                cout << hashTable[i][j];

                if (j != hashTable[i].size() - 1) {
                    cout << " -> ";
                }
            }
        }

        cout << endl;
    }

    cout << "================================" << endl;
}

int main() {

    // Dataset reused from Question 1
    int arr[12] = {
        14, 81, 51, 21, 88, 58,
        28, 95, 65, 35, 5, 72
    };

    int n = 12;

    cout << "Student Marks Dataset:" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Create Hash Table
    vector<vector<int>> hashTable(TABLE_SIZE);

    // Insert elements
    for (int i = 0; i < n; i++) {
        insertKey(hashTable, arr[i]);
    }

    // Display complete Hash Table
    displayHashTable(hashTable);

    return 0;
}
