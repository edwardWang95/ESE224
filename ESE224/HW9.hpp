//
//  HW9.hpp
//  ESE224
//
//  Created by Edward Wang on 4/12/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef HW9_hpp
#define HW9_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

namespace HW9{
    namespace chapter7{
        /*
         Write a function that receives two one-dimensional array that correspond to the flight-path angles and the corresponding coefficients of lift. The function should sort the flight-path angles into ascending order while maintaining the correspon- dence between the flight-path angles and the corresponding coefficients of lift. As- sume that the corresponding function prototype is
         */
        class EP_17{
        private:
            
        public:
            void reorder(double x[], double y[], int size);
        };
    }
    
    namespace Project{
        /*
         Given an array of 34, 30, 45, 66, 90, 85, 78, 6
         -Write the sequence of numbers after each exchange step during selection sort
         -Write the values of top, mid, bottom for each step during binary search of 78 on the sorted array
         */
        class SortArray{
        private:
            int testArray[8] = {34, 30, 45, 66, 90, 85, 78, 6};
            
            //selection sort
            void selectionSort();
            void printArray();
            
            //binary search
            void binarySearch(int wantedValue);
            int mid=0;
            int bottom = 0;
            int top = 0;
            void setBottomAndTop();
            void printMidTopBottom();

        public:
            void execute();
        };
    }
}

#endif /* HW9_hpp */
