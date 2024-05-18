#include <iostream>
#include <vector>
#include <random>
#include <fstream>
#include <stdlib.h>
#include <time.h> 
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
// read data from file cat 4 line by line
int main(){
    ifstream InFile("data.hex");
    ofstream OutFile("data1.hex");
    string line;
    int count = 0;
    string data = "";
    string temp = "";
    while(getline(InFile, line)){
        if (count == 4){
            count = 0;
            cout << data << endl;
            OutFile << data << endl;
            data = "";
        }
        line += data;
        data = line;
        count ++;
    }
}


