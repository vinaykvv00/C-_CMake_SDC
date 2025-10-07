#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ofstream outfile("data.txt");
    string message = "Hello, file system!";
    vector<int> arr = {1, 2, 3, 4, 5};

    outfile << message << endl;
    for (int num : arr) {
        outfile << num << " ";
    }
    outfile << endl;
    outfile.close();


    ifstream infile("data.txt");
    string line;
    cout << "Reading from file:" << endl;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}