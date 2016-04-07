//
//  HW8.hpp
//  ESE224
//
//  Created by Edward Wang on 4/7/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef HW8_hpp
#define HW8_hpp

using namespace std;

#include <stdio.h>
#include <iostream>
#include <string>

//EP_22/23/24
#include <stdlib.h> //user for srand() and rand()
#include <time.h>

//Project
#include <fstream>
#include <vector>

namespace HW8{
    namespace chapter6{
        //Fair Die Toss
        /*
         Write a program to simulate tossing a “fair” coin. Allow the user to enter the num- ber of tosses. Print the number of tosses that yielded heads and the number of tosses that yielded tails. What should be the percentage distribution of heads and tails?
         */
        class EP_22{
        private:
            int numOfCoinFlips;
            int coinFlipBreak = 50;
            string head = "Head";   //Greater equal to 50
            string tail = "Tail";   //Less than 50
            int headCount = 0;
            int tailCount = 0;
        public:
            EP_22();
            void execute();
            void getNumOfDiceRolls();
            void printDiceRolls();
        };
        
        /*
         Writeaprogramtosimulatetossingacointhathasbeenweightedsuchthatitlands with heads up 60 percent of the time. Have the user enter the number of tosses. Print the number of tosses that yielded heads and the number of tosses that yielded tails.
         */
        class EP_23{
        private:
            int numOfCoinFlips;
            int coinFlipBreak = 60;
            string head = "Head";   //Greater equal to 50
            string tail = "Tail";   //Less than 50
            int headCount = 0;
            int tailCount = 0;
        public:
            EP_23();
            void execute();
            void getNumOfDiceRolls();
            void printDiceRolls();
        };
        
        /*
         Writeaprogramtosimulatetossingacointhathasbeenweightedsuchthatitlands with heads up 60 percent of the time. Have the user enter the number of tosses. Print the number of tosses that yielded heads and the number of tosses that yielded tails.
         */
        namespace EP_24{
            //Coin Object
            class Coin{
            private:
                char H = 'H';
                char T = 'T';
                int coinFlipBreak = 60;
                int randomNumber = 0;
            public:
                Coin();
                char flipCoin();
            };
            class EP_24{
            private:
                Coin coin;
                int numOfCoinFlips;
                char coinFace;
                int headCount = 0;
                int tailCount = 0;
            public:
                void execute();
            };
        }
        
    }
    
    
    namespace project{
        class Project1{
        private:
            ofstream inputStream;
            string textFile;
        public:
            Project1();
            void fillVector();
            void average(vector<double> vec, double &all_avg);
        };
    }
}

#endif /* HW8_hpp */
