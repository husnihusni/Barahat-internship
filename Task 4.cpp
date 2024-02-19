#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string husnifile;
    string mytext;
    int count = 0;

    cout << "Enter the name of the text file: ";
    cin >> husnifile;

    ifstream myfile(husnifile.c_str()); 

    if (!myfile.is_open()) {
        cerr << "Unable to open file: " << husnifile << endl;
        return 1;
    }
    
    while (getline(myfile, mytext)) {
        cout << mytext << endl;
        
        size_t pos = 0;
        while ((pos = mytext.find_first_not_of(" \t\n", pos)) != string::npos) {
            pos = mytext.find_first_of(" \t\n", pos);
            count++;
        }
    }

    cout << "The total words in the file are: " << count << endl;

    myfile.close();

   // return 0; 
}

