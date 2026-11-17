
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




#include <iostream>
#include <string>
using namespace std;

// PRN: 202501100067
// Question 2: Hash Table Implementation
// Commit 2: Mid-Square Hash Function

const int TABLE_SIZE = 37;

int midSquareHash(int key) {
    int square = key * key;

    string s = to_string(square);

    while (s.length() < 4) {
        s = "0" + s;
    }

    int middle = stoi(s.substr(1, 2));

    return middle % TABLE_SIZE;
}

int main() {

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

    cout << "\nMid-Square Hash Values:" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " -> "
             << midSquareHash(arr[i]) << endl;
    }

    return 0;
}