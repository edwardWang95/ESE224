//
//  HW9.cpp
//  ESE224
//
//  Created by Edward Wang on 4/12/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW9.hpp"


void HW9::chapter7::EP_17::execute(){
    reorder(x, y, size);
}

void HW9::chapter7::EP_17::reorder(double x[], double y[], int size){
    int smallestNum;
    int smallestIndex;
    int temp;
    for(int i=0;i<size;i++){
        smallestNum = x[i];
        smallestIndex = i;
        for(int j=0;j<size;j++){
            if(x[i] > x[j]){
                //swap the numbers for both x and y into ascending order
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
                
                temp = y[i];
                y[i] = y[j];
                y[j] = temp;
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////
void HW9::Project::SortStringAlphabetically::executeFileAlphabetize(){
    //File
    string fileName;
    ifstream inputFile;
    ofstream outputFile;
    
    int fileSize;
    int index=0;
    string inputString;
    
    /*
     cout << "Enter file size: ";
     cin >> fileSize;
     */
    
    //TESTING
    fileSize = 8;
    
    string *stringArray = new string[fileSize]; //setup array
    
    /*
     cout << "Enter file name: ";
     cin >> fileName;
     */
    //TESTING
    fileName = "/Users/edwardwang/Documents/School/ESE224/TEST.txt";
    
    inputFile.open(fileName);
    if(!inputFile.fail()){
        cout << "Succesfully opened file." << endl;
        //Fill string array with each line
        while(!inputFile.eof() && index<fileSize){
            inputFile >> inputString;
            cout << inputString << endl;
            stringArray[index] = inputString;
            index++;
        }
        //sort string
        sort_string(stringArray, fileSize);
    }else{
        cout << "Failed to open file." << endl;
    }
    
    //output array to textfile
    outputFile.open(fileName);
    for(int i=0;i<fileSize;i++){
        outputFile << stringArray[i] << " " << endl;;
    }

    //close streams after completing tasks
    inputFile.close();
    outputFile.close();
}

/*
 Compares the current string alphabetically with next string.
 Returns true: current string is alphabetically before next.
 Returns false: current string should be after next.
 */
bool HW9::Project::SortStringAlphabetically::isCurrWordBeforeNext(string curr, string next){
    int loopIndex;
    int charIndex = 0;
    char currChar;
    char nextChar;
    
    if(curr.size() >= next.size()){
        loopIndex = next.size();
    }else{
        loopIndex = curr.size();
    }
    
    while(charIndex < loopIndex){
        currChar = curr.at(charIndex);
        nextChar = next.at(charIndex);
        if(currChar < nextChar){    //curr is before
            return false;
        }else if(currChar > nextChar){   //curr is after
            return true;
        }
        charIndex++;
    }
    if(curr.size() > next.size()){    //curr is after
        return true;
    }
    return false;   //curr is before
}

//Sort using selection sort to sort alphabetically
void HW9::Project::SortStringAlphabetically::sort_string(string strs[], int size){
    string smallestString;
    int smallestIndex = 0;
    string temp;
    for(int i=0;i<size;i++){
        smallestString = strs[i];
        for(int j=i+1;j<size;j++){
            //find smallest string
            if(isCurrWordBeforeNext(smallestString, strs[j])){
                smallestString = strs[j];
                smallestIndex = j;
            }
        }
        //swap the two strings
        temp = strs[i];
        strs[i] = strs[smallestIndex];
        strs[smallestIndex] = temp;
    }
}

/////////////////////////////////////////////////////////////////////
void HW9::Project::SortArray::execute(){
    selectionSort();
    cout << endl;
    binarySearch(78);
}

//Selection Sort
void HW9::Project::SortArray::selectionSort(){
    int smallestNum=0;
    int indexOfSmallest=0;
    int temp=0;
    printArray();
    for(int i=0;i<8;i++){
        smallestNum = testArray[i];
        indexOfSmallest = i;
        //Find the smallest number after index of i
        for(int j=i+1;j<8;j++){
            if(smallestNum>testArray[j]){
                smallestNum = testArray[j];
                indexOfSmallest = j;
            }
        }
        if(i != indexOfSmallest){
            //swap the two numbers in array
            temp = testArray[i];
            testArray[i] = testArray[indexOfSmallest];
            testArray[indexOfSmallest] = temp;
            printArray();
        }
    }
}

void HW9::Project::SortArray::printArray(){
    for(int i=0;i<8;i++){
        cout << testArray[i] << " ";
    }
    cout << endl;
}

//Binary Search
void HW9::Project::SortArray::binarySearch(int wantedValue){
    mid = 8/2;
    top = 7;
    bottom = 0;
    printMidTopBottom();
    while(testArray[mid]!=wantedValue){
        if(testArray[mid]<wantedValue){
            bottom = mid;
            setBottomAndTop();
            cout << "Move to top" << endl;
        }else if(testArray[mid]>wantedValue){
            top = mid;
            setBottomAndTop();
            cout << "Move to bottom" << endl;
        }
        printMidTopBottom();
    }
}

void HW9::Project::SortArray::setBottomAndTop(){
    mid = ((top-bottom)/2)+bottom;
}

void HW9::Project::SortArray::printMidTopBottom(){
    cout << "Bottom: " << testArray[bottom] << endl;
    cout << "Mid: " << testArray[mid] << endl;
    cout << "Top: " << testArray[top] << endl;
    cout << endl;
}

