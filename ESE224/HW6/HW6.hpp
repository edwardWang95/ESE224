//
//  HW6.hpp
//  ESE224
//
//  Created by Edward Wang on 3/9/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef HW6_hpp
#define HW6_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>  //used to use ifstream
#include <string>

using namespace std;

namespace HW6{
    /*
     *Generate a table of conversions from pesos to dollars. Start the pesos column at 5 pesos and increment by 5 pesos. Print 25 lines in the table.
     */
    class Pesos{
    private:
        const double PESOS_TO_DOLLAR = 9.02;
        int pesos = 5;
        double dollar;
        inline void convertPesosToDollar();
        
    public:
        void startPesosConversion();
    };
    
    
    /*
     *Write a program that receives input of several household  income numbers, calculates and outputs the number of households, the average income, using sentinel controlled loop
     */
    class HouseHold{
    private:
        int numOfHouseHolds=0;
        int inputIncome=0;
        int totalIncome=0;
        int avgIncome=0;
    public:
        void getAndCalcAvgIncome();
        void getAndCalcAvgIncomeEOF();
    };
    
    /*
     * 	Assume that the filerocket1.dat contains an initial line that specifies the number of actual data lines that follows. Write a program that reads these data and determines the time at which the rocket begins falling back to earth. (Hint: Determine the time at which the altitude begins to decrease.)

     */
    class Rocket{
    private:
        const string textFileName = "/Users/edwardwang/Documents/School/ESE 224/ESE224/ESE224/HW6/rocket1.txt";
        ifstream inputStream;
        float currNum;
        
        int currLine = 0;
        int numOfLines;
        
        //Setup rocket array
        float rocketArray[100];
        int arrayIndex;
        int currCol = 0;
        int currRow = 0;
        
        float largNumber=0;
        int time = 0;
        int timeWhenDecreasing = 0;
        
        void setupRocketSpeedArray();
        bool isOpenTextSucc();

    public:
        void getRocketFallTime();
        
    };
    
    /*
     *A data file named suture.dat contains information on batches of sutures that have been rejected during a one-week period. Each line in the data file contains the batch number, temperature, pressure, and dwell time for a rejected batch. The quality control engineer would like to analyze this information and needs a report that computes the percent of the batches rejected due to temperature, the percent rejected due to pressure, and the percent rejected due to dwell time. It is possible that a specific batch may have been rejected for more than one reason, and it should be counted in all applicable totals. Write a program to compute and print these three percentages.
     */
    class Suture{
    private:
        const string textFileName = "/Users/edwardwang/Documents/School/ESE 224/ESE224/ESE224/HW6/suture1.txt";
        
        //Temp
        const double maxTemp = 170;
        const double minTemp = 150;
        //Pressure
        const double maxPress = 70;
        const double minPress = 60;
        //Dwell Time
        const double maxDwell = 2.5;
        const double minDwell = 2;
        
        int totalBatches = 0;
        int numTempRej = 0;
        int numPressRej = 0;
        int numDwellRej = 0;
        
        int numOfSutures = 0;
        double tempPerc = 0;
        double pressPerc = 0;
        double dwellPerc = 0;
        
        ifstream inputStream;
        bool isOpenTextSucc();
        void getPercentages();
    public:
        void displayPercentages();
    };
}

#endif /* HW6_hpp */
