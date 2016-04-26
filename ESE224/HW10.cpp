//
//  HW10.cpp
//  ESE224
//
//  Created by Edward Wang on 4/25/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW10.hpp"

void HW10::chapter9::test::execute(){
    double name, x(20.5);
    cout << name << endl;
    cout << x << endl;
    double *a = &x;
    cout << *a << endl;
    name = *a;
    cout << name << endl;
}

//////////////////////////////////////////////////////////////////

void HW10::chapter9::Q18::execute(){
    char strg[] = {"accaccacc"};
    char c = 'c';
    char *ptr(strg);
    cout << "In " << strg << " the letter " << c << " appears: " << charcnt(ptr, c) << " times." << endl;
}

int HW10::chapter9::Q18::charcnt(char *ptr, char c){
    int charCount = 0;
    while(*ptr){
        if(c == *ptr){
            charCount++;
        }
        ptr++;
    }
    return charCount;
}
//////////////////////////////////////////////////////////////////

void HW10::chapter9::Q19::execute(){
    char strg[] = "hisss ss h";
    char *ptr(strg);
    cout << "The number of repeated characters in " << strg << " is: " << repeat(ptr) << endl;
}

int HW10::chapter9::Q19::repeat(char *ptr){
    int numOfRepeatedChars = 0;
    char temp;
    vector<int> charVector;
    int charArray[58] = {0};
    while(*ptr){
        temp = (int)*ptr - 64;
        if(temp!=32){
            charArray[temp]++;
        }
        ptr++;
    }
    for(int i=0;i<58;i++){
        if(charArray[i]>=2){
            numOfRepeatedChars++;
        }
    }
    return numOfRepeatedChars;
}