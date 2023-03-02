//
// Created by aidan on 28.02.2023.
//
#include <iostream>
#include "mylib.h"
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;
string remove_duplicates(string str) {
        string result = "";

        for (int i = 0; i < str.length(); i++) {
            if (i == 0) {
                if (str[i] == str[i + 1]) {
                    result += "(" + string(1, str[i]) + ")";
                } else {
                    result += str[i];
                }
            } else {
                if (str[i] != str[i - 1]) {
                    if (str[i] == str[i + 1]) {
                        result += "(" + string(1, str[i]) + ")";
                    } else {
                        result += str[i];
                    }

                }
            }
        }
        return result;
    }
string transformation(string line){

            // Розділяємо рядок на символи
            string digits = "";
            string other_chars = "";
            for (char c: line) {
                if (isdigit(c)) {
                    digits += c;
                } else {
                    other_chars += c;
                }
            }
            reverse(other_chars.begin(), other_chars.end());
            //digits = remove_duplicates(digits);
            digits = remove_duplicates(digits);
            string transformed_line = digits + " " + other_chars;
            return transformed_line;
            // Записуємо перетворений рядок у вихідний файл
        }

