#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "mylib.h"
using namespace std;
    int main() {
        fstream first("first.txt");
        fstream second("second.txt");
        //перевірка на відкритість файлів і введення
        if (!first.is_open() || !second.is_open()) {
            cout << "Error" << endl;
            return 0;
        } else {
            cout << "Enter string for file: " << endl;
            string str;
            getline(cin, str);
            first << str;
        }

        first.close();
        fstream first1("first.txt");

        string line;
        getline(first1, line);
        second << transformation(line) << endl;
        first1.close();
        second.close();
        fstream first2("first.txt");
        fstream second2("second.txt");

        cout << "Input file contents:" << endl;
        cout << first2.rdbuf() << endl;
        cout << "Output file contents:" << endl;
        cout << second2.rdbuf() << endl;
        first2.close();
        second.close();
        return 0;
    }