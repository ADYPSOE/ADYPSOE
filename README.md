                                                                          Practical No.7

                                                                          
#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	map<string,int>populationMap;
	populationMap["Brasil"]=130;
	populationMap["China"]=1339;
	populationMap["India"]=1187;
	populationMap["Indonesia"]=234;
	string s;
	cout<<"Enter name of the state:";
	cin>>s;
	cout<<"State"<<s<<" has a population of"<<populationMap[s]<<endl;
}

OOP Practical no 1
#include<iostream>
using namespace std;

class complex {
private:
    int r, i;

public:
    complex operator +(complex &c) {
        complex t;
        t.r = r + c.r;
        t.i = i + c.i;
        return t;
    }

    complex operator *(complex &c) {
        complex t;
        t.r = (r * c.r) - (i * c.i);
        t.i = (r * c.i) + (i * c.r);
        return t;
    }

    friend istream& operator>>(istream &in, complex &c);
    friend ostream& operator<<(ostream &out, complex &c);
};

istream& operator>>(istream &in, complex &c) {
    cout << "Enter the real and imaginary part: ";
    in >> c.r >> c.i;
    return in;
}

ostream& operator<<(ostream &out, complex &c) {
    out << c.r << " + " << c.i << "i";
    return out;
}

int main() {
    complex c1, c2;
    cout << "Enter values for complex number c1:"<<endl;
    cin >> c1;

    cout << "Enter values for complex number c2:"<<endl;
    cin >> c2;

    complex c3 = c1 + c2;
    complex c4 = c1 * c2;

    cout << "Sum of c1 and c2: " << c3 << endl;
    cout << "Product of c1 and c2: " << c4 << endl;

    return 0;
}




                                                             OOP Practical No 3

                                                             
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Step 1: Creating an output file and writing information to it
    ofstream outFile("example.txt");

    if (!outFile.is_open()) {
        cerr << "Error opening the output file!" <<endl;
        return 1;
    }

    outFile << "Hello, this is written to the file!" <<endl;
    outFile << "You can add more lines if needed." <<endl;

    // Step 2: Closing the output file
    outFile.close();

    // Step 3: Opening the file as an input file and reading information
    ifstream inFile("example.txt");

    if (!inFile.is_open()) {
        cerr << "Error opening the input file!" <<endl;
        return 1;
    }

    cout << "Reading from the file:" <<endl;

    string line;
    while (getline(inFile, line)) {
        cout << line <<endl;
    }

    // Step 4: Closing the input file
    inFile.close();

    return 0;
}
