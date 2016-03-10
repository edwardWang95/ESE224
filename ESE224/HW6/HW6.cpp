//
//  HW6.cpp
//  ESE224
//
//  Created by Edward Wang on 3/9/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW6.hpp"

using namespace HW6;

void Pesos::startPesosConversion(){
    for(int i=0;i<25;i++){
        dollar = pesos/PESOS_TO_DOLLAR;
        cout << "Pesos: " << pesos << "\t \t" << "Dollar: " << dollar <<  endl;
        pesos+=5;
    }
}

void HouseHold::getAndCalcAvgIncome(){
    while(numOfHouseHolds<=7){
        cout << "Enter income: ";
        cin >> inputIncome;
        totalIncome+=inputIncome;
        numOfHouseHolds++;
    }
    avgIncome = totalIncome/(numOfHouseHolds - 1);  //correct numOfHouseHolds when while loop ends
    cout << "Number of households: " << numOfHouseHolds
    << "\nAverage Income: " << avgIncome << endl;
}

void HouseHold::getAndCalcAvgIncomeEOF(){
    cout << "Enter income: ";
    cin >> inputIncome;
    while(!cin.eof()){
        totalIncome+=inputIncome;
        numOfHouseHolds++;
        cout << "Enter income: ";
        cin >> inputIncome;
    }
    avgIncome = totalIncome/(numOfHouseHolds - 1);  //correct numOfHouseHolds when while loop ends
    cout << "\nNumber of households: " << numOfHouseHolds
    << "\nAverage Income: " << avgIncome << endl;
}

void Rocket::getRocketFallTime(){
    if(isOpenTextSucc()){
        setupRocketSpeedArray();
        for(int i=0;i<100;i++){
            if(rocketArray[i] > largNumber){
                time = i;
                largNumber = rocketArray[i];
            }
        }
        timeWhenDecreasing = ++time;
        cout << "Robot begins to decrease at: " << timeWhenDecreasing << endl;
        inputStream.close();
    }
}

bool Rocket::isOpenTextSucc(){
    inputStream.open(textFileName.c_str());
    if(inputStream.fail()){
        cout << "Failed to open the file";
        exit(0);
    }
    cout << "Text open is succesful" << endl;
    return true;
}

void Rocket::setupRocketSpeedArray(){
    while(!inputStream.eof()){
        inputStream >> currNum;
        if(currLine==0){
            numOfLines = currNum;
        }else{
            arrayIndex = (currCol * numOfLines) + currRow;
            rocketArray[arrayIndex] = currNum;
            currCol++;
            if(currCol==4){
                currRow++;
                currRow%=numOfLines;
            }
            currCol%=4;
        }
        currLine++;
    }
}

void Suture::displayPercentages(){
    if(isOpenTextSucc()){
        getPercentages();
        cout << "Temperature Percentage: " << tempPerc << endl;
        cout << "Pressure Percentage: " << pressPerc << endl;
        cout << "Dwell Percentage: " << dwellPerc << endl;
    }
        
    inputStream.close();
}

bool Suture::isOpenTextSucc(){
    inputStream.open(textFileName);
    if(inputStream.fail()){
        cout << "Failed to open the file";
        exit(0);
    }
    cout << "Text open is succesful" << endl;
    return true;
}

void Suture::getPercentages(){
    int position=0;
    double num=0;
    while(!inputStream.eof()){
        inputStream >> num;
        cout << "num: " << num << endl;
        switch (position) {
            case 0:
                numOfSutures++;
                break;
            case 1: //temp
                if(num<=minTemp || num>=maxTemp)
                    tempPerc++;
                break;
            case 2: //pressure
                if(num<=minPress || num>=maxPress)
                    pressPerc++;
                break;
            case 3: //dwell
                if(num<=minDwell || num>=maxDwell)
                    dwellPerc++;
                break;

        }
        position++;
        position%=4;
    }
    
    tempPerc /= numOfSutures;
    pressPerc /= numOfSutures;
    dwellPerc /= numOfSutures;
}











