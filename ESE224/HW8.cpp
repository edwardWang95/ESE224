//
//  HW8.cpp
//  ESE224
//
//  Created by Edward Wang on 4/7/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW8.hpp"

HW8::chapter6::EP_22::EP_22(){
    numOfDiceRolls = 0;
    srand(time(NULL));
}

void HW8::chapter6::EP_22::execute(){
    getNumOfDiceRolls();
    printDiceRolls();
}

void HW8::chapter6::EP_22::getNumOfDiceRolls(){
    cout << "Enter num of dice rolls: " << endl;
    cin >> numOfDiceRolls;
}

void HW8::chapter6::EP_22::printDiceRolls(){
    int randomNumber;
    for(int i=0;i<numOfDiceRolls;i++){
        randomNumber = rand()%100;  //keep within range of 100
        if(randomNumber>coinFlipBreak){
            cout << head << endl;
        }else{
            cout << tail << endl;
        }
    }
}