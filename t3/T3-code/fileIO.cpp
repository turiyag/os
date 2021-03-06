/*
 * File I/O in C++.
 * For use in CPSC 457 tutorials
 * Instructor: Prof. Mea Wang
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
    ofstream outfile;
    ifstream infile;
    // or you may create a fstream instance for both reading and writing
    
    // Check for the right number of parameters
    if (argc != 2)
    {
        cout << "Usage: fileIO <filename>" << endl;
        return -1;
    }

    // Open the file for writing
    outfile.open(argv[1]);
    
    // Write to the file
    outfile << "Hello" << endl;
    
    // Close the file
    outfile.close();
    
    // Open the file again for reading
    infile.open(argv[1]);
    
    // Read one line from the file
    string line;
    getline(infile, line);
    
    // Print the line to standard output
    cout << line << endl;

    // Close the file
    infile.close();
    return 0;}

