//
//  main.cpp
//  ESE224
//
//  Created by Edward Wang on 3/9/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include <iostream>
#include "HW6.hpp"
#include "HW8.hpp"
//HW8
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void startHW6();
void startHW8();
//HW8
void parseTextStringToVector(vector<double> &vector,string line);
void printVector(vector<double> &vector);
void average(vector<double> vec, double &all_avg);
void average_row(vector<vector< double> > vec, vector<double> & r_avg);

int main(int argc, const char * argv[]) {
    startHW8();
}

void startHW6(){
    HW6::Pesos pesos;
    HW6::HouseHold houseHold;
    HW6::Rocket rocket;
    HW6::Suture suture;
    //pesos.startPesosConversion();
    //houseHold.getAndCalcAvgIncome();
    //houseHold.getAndCalcAvgIncomeEOF();
    //rocket.getRocketFallTime();
    suture.displayPercentages();
}

void startHW8(){
    HW8::chapter6::EP_22 ep22;
    //ep22.execute();
    HW8::chapter6::EP_23 ep23;
    //ep23.execute();
    HW8::chapter6::EP_24::EP_24 ep24;
    //ep24.execute();
    
    //Project
    ifstream inputFile;
    string fileName;
    double temp;
    
    
    //Project 1
    vector<double> project1Vector;
    double all_avg;
    
    //Project 2
    vector<vector<double>> project2Vector;
    vector<double> project2VectorReference;
    vector<double> r_avg;
    
    /*
    cout << "Enter text file name: ";
    cin >> fileName;
    */
    
    fileName = "/Users/edwardwang/Documents/School/ESE 224/ESE224/ESE224/hw8.txt";    //test
    
    //Project 1
    
    inputFile.open(fileName);
    if(!inputFile.fail()){
        cout << "File open succesful" << endl;
        while(!inputFile.eof()){
            inputFile >> temp;
            project1Vector.push_back(temp);
            cout << "Value: " << temp << endl;
        }
        average(project1Vector, all_avg);
        cout << "Average: " << all_avg << endl;
    }else{
        cout << "Failed to open file." << endl;
        inputFile.close();
        exit(0);
    }
    
    
    
    //Project 2
    /*
     * Each line must have a space to end it for this to work.
     */
    string textLine = "";
    int index = 0;
    
    inputFile.open(fileName);
    if(!inputFile.fail()){
        cout << "File open succesful" << endl;
        while(!inputFile.eof()){
            getline(inputFile, textLine);
            parseTextStringToVector(project2VectorReference,textLine);
            project2Vector.push_back(project2VectorReference);
            project2VectorReference.clear();    //reset vector reference
            index++;
        }
        average_row(project2Vector, r_avg);
        
        for(int i=0;i<r_avg.size();i++){
            cout << "Average: " << r_avg.at(i) << endl;
        }
         
    }else{
        cout << "Failed to open file." << endl;
        inputFile.close();
        exit(0);
    }
    
}


void average(vector<double> vec, double &all_avg){
    for(int i=0;i<vec.size();i++){
        all_avg+=vec.at(i);
    }
    all_avg = all_avg/vec.size();
}


void parseTextStringToVector(vector<double> &vector,string line){
    string number;
    int index = 0;
    char EMPTY = ' ';
    
    for(int i=0;i<line.length();i++){
        if(line.at(i)!=EMPTY){
            number+=line.at(i);
            cout << number << endl;
        }else{
            vector.push_back(stod(number));
            number = "";    //reset number
            index++;
        }
    }
}

void printVector(vector<double> &vector){
    for(int i=0;i<vector.size();i++){
        cout << vector.at(i) << endl;
    }
}

void average_row(vector<vector< double> > vec, vector<double> &r_avg){
    double temp = 0.0;
    double average = 0.0;
    vector<double> referenceVector;
    for(int i=0;i<vec.size();i++){
        referenceVector = vec.at(i);
        
        for(int j=0;j<referenceVector.size();j++){
            temp+=referenceVector.at(j);
        }
        average = (temp/referenceVector.size());
        r_avg.push_back(average);
        referenceVector.clear();    //reset temp vector
        temp = 0.0;   //reset temp
        
    }
}