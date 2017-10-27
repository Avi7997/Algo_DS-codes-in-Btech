#include<iostream>
#include<fstream>
using namespace std;
int main() {
 char line[100];
 fstream file; // declare an object of fstream class
 file.open("file.txt", ios :: out | ios :: app); // open file in append mode
 if (file.fail()) { // check if file is opened successfully
 // file opening failed
 cout << "Error Opening file ... " << endl;
 }
 else {
// proceed with further operations
 cout << "Enter a line : ";
 cin.getline(line, 100);
 file << line << endl; // Append the line to the file
 cout << "Line written into the file" << endl;
 }
 return 0;
}
