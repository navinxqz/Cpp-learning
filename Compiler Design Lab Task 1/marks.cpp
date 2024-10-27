#include <iostream>
#include <fstream>
#include <limits>
using namespace std;
 int main()
 {
    int numOfStu = 0;

    const int maxStudent = 10;
    const int maxSubs = 4;

     string name[maxStudent];
    double marks[maxStudent][maxSubs];

     cout<<"Enter the num of students: ";
     cin>>numOfStu;

     if (numOfStu > maxStudent) {
        cout << "Number of students exceeds the maximum limit of " << maxStudent << endl;
        return 1;
    }

     for(int i=0; i<numOfStu; i++){
        cout<<i+1<<" Student name: ";
        cin>>name[i];

        for(int j=0; j<maxSubs; j++)
        {
            cout<<"Sub "<<j+1<<" marks: ";
            cin>>marks[i][j];
        }cout<<"\n";
     }cout<<"\t[File Recorded]\n";
//file task...
//for writing
    ofstream outFile("students.txt");
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
     for (int i = 0; i< numOfStu; i++) {
        outFile<<name[i]<< endl;

        for (int j = 0; j<maxSubs; j++) {
            outFile << marks[i][j] << " ";
        }outFile << endl;
    }
    outFile.close();

    //data reading
    ifstream inFile("students.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string tempName;
    cout << "\nReading data from file...\n";

    while (getline(inFile, tempName)) {
        cout << "Student Name: "<<tempName<< endl;
        for (int j = 0; j<maxSubs; j++) {
            double temp;
            inFile >> temp;

            if (inFile) {
                cout << "Sub " << j + 1 << " Marks: " << temp << endl;
            }else {
                cout << "Error reading marks for " << tempName << endl;
                break;
            }
        }inFile.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    inFile.close();
    return 0;
 }
