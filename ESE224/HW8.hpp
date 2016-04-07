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

//EP_22
#include <cstdlib> //user for srand() and rand()
#include <time.h>

namespace HW8{
    namespace chapter6{
        //Fair Die Toss
        /*
         Write a program to simulate tossing a “fair” coin. Allow the user to enter the num- ber of tosses. Print the number of tosses that yielded heads and the number of tosses that yielded tails. What should be the percentage distribution of heads and tails?
         */
        class EP_22{
        private:
            int numOfDiceRolls;
            int coinFlipBreak = 50;
            string head = "Head";   //Greater equal to 50
            string tail = "Tail";   //Less than 50
            
        public:
            EP_22();
            void execute();
            void getNumOfDiceRolls();
            void printDiceRolls();
        };
        
        class EP_23{
        private:
            
        public:
            
        };
        
        class EP_24{
        private:
            
        public:
            
        };
        
    }
    
    namespace project{
        
    }
}

#endif /* HW8_hpp */
