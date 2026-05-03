
**C++ Laboratory 2: Matrices, Strings, and Algorithms**
This repository contains solutions for the second laboratory session, focusing on dynamic two-dimensional arrays (std::vector), text processing (std::string), and fundamental algorithms.

📂 Project Overview
1. Matrix Summation (Lab2_zad1.cpp)
This program demonstrates how to handle a matrix using a vector of vectors.

Functionality: Creates a matrix of a size specified by the user and fills it with random numbers (0–9).

Algorithm: Calculates the sum of elements located in even columns or odd rows.

Key Features: Uses std::vector<std::vector<int>>, std::srand for randomization, and nested loops for matrix traversal.

2. String Reversal (Lab2_zad2.cpp)
A comparison of two different methods for reversing a string entered by the user.

Manual Method: A manual approach that iterates from the last character back to the first.

STL Method: An efficient approach using the built-in std::reverse() function from the <algorithm> library.

Key Features: Use of std::getline to handle spaces in input and the string::size() method.

3. Palindrome Checker (Lab2_zad3.cpp)
This program checks whether a given word or sentence is a palindrome (reads the same forward and backward).

Manual Method: Iterates through half of the text to compare characters from both ends.

Reverse Method: Creates a copy of the text, reverses it using std::reverse(), and performs a direct comparison.

Key Features: Boolean logic and efficient string comparison techniques.

4. Character Counter (Lab2_zad4.cpp)
A utility to count the occurrences of a specific character within a sentence.

Functionality: Takes a full sentence and a single character from the user, then returns the total count.

Case Insensitivity: Uses std::tolower() to ensure that the count is accurate regardless of character case.

Key Features: static_cast for character conversion and range-based for loops.