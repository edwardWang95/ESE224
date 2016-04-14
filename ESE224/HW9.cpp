//
//  HW9.cpp
//  ESE224
//
//  Created by Edward Wang on 4/12/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW9.hpp"

/*
 Write a main() program to read strings from a file (one per line), and use a function below to sort the strings, then write the sorted strings to another file
 */
void sort_string(string  strs[], int size);
void outputSortedString(ofstream outputFile, string strs[], int size);
int main(int argc, const char * argv[]) {
    //HW9::Project::SortArray sortArray;
    //sortArray.execute();
    
    //File
    string fileName;
    ifstream inputFile;
    ofstream outputFile;
    
    int fileSize;
    string* fileArrayPointer;   //use pointer to reference array
    int counter=0;
    int inputString;
    
    cout << "Enter file name: ";
    cin >> fileName;
    
    cout << "Enter file size: ";
    cin >> fileSize;
    fileArrayPointer = new string[fileSize];
    
    inputFile.open(fileName);
    if(!inputFile.fail()){
        cout << "Succesfully opened file." << endl;
        //Fill string array with each line
        while(!inputFile.eof()){
            inputFile >> inputString;
            fileArrayPointer[counter] = inputString;
            counter++;
        }
        //sort string
        sort_string(fileArrayPointer, fileSize);
    }else{
        cout << "Failed to open file." << endl;
    }
    
    //close streams after completing tasks
    inputFile.close();
    outputFile.close();
}
void sort_string(string  strs[], int size){
    for(int i=0;i<size;i++){
        
    }
}
void outputSortedString(ofstream outputFile, string strs[], int size){
    for(int i=0;i<size;i++){
        
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
        for(int j=i+1;j<=8;j++){
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
    setBottomAndTop();
    printMidTopBottom();
    while(testArray[mid]!=wantedValue){
        if(testArray[mid]<wantedValue){
            mid = top;
            setBottomAndTop();
            cout << "Move to top" << endl;
        }else{
            mid = bottom;
            setBottomAndTop();
            cout << "Move to bottom" << endl;
        }
        printMidTopBottom();
    }
}

void HW9::Project::SortArray::setBottomAndTop(){
    bottom = mid-1;
    top = mid+1;
}

void HW9::Project::SortArray::printMidTopBottom(){
    cout << "Bottom: " << testArray[bottom] << endl;
    cout << "Mid: " << testArray[mid] << endl;
    cout << "Top: " << testArray[top] << endl;
    cout << endl;
}

