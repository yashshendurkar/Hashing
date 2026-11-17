
# Debugging Log – Hash Table Project

**Name:** Yash Shendurkar  
**PRN:** 202501100067  
**Subject:** Data Structures  
**Project:** Hash Table using Mid-Square Hashing and Separate Chaining

## Commit 1: Initial Project Setup

I created the initial C++ project and added the student marks dataset reused from Question 1. I wrote the main function to display all 12 values. I checked that the program compiled and displayed the dataset correctly.

## Commit 2: Mid-Square Hash Function

I implemented the Mid-Square Hash Function using the square of each key. I converted the square into a string and extracted the middle two digits. I then used modulo 37 to calculate the hash index. I tested the function with the dataset values.

## Commit 3: Create Hash Table Structure

I added the vector library and created a hash table containing 37 buckets using vector<vector<int>>. This structure allows multiple values to be stored at the same index using separate chaining.

## Commit 4: Implement Separate Chaining

I created the insertKey() function to calculate the hash index and insert each value into the corresponding bucket using push_back(). I inserted all 12 dataset values into the hash table.

## Commit 5: Display Hash Table and Collisions

I implemented the displayHashTable() function to display all 37 buckets. Empty buckets are displayed as Empty, while buckets containing multiple values show their collision chain using arrows.

## Commit 6: Final Testing and Verification

I added searchKey() to search for values in the hash table. I also added verification counters for inserted elements, occupied buckets, collision buckets, and successful searches. I tested the program using the complete dataset.

## Failed Approach and Correction

During development, I initially edited the main.cpp file located outside the cloned Hashing repository folder. Git showed "nothing to commit" because the modified file was not inside the repository. I identified that two main.cpp files existed in VS Code. I copied the updated code into the main.cpp file inside the Hashing folder, saved it, and then committed the changes successfully.
