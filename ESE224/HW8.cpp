//
//  HW8.cpp
//  ESE224
//
//  Created by Edward Wang on 4/7/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW8.hpp"

HW8::chapter6::EP_22::EP_22(){
    numOfCoinFlips = 0;
    srand(time(NULL));
}

void HW8::chapter6::EP_22::execute(){
    getNumOfDiceRolls();
    printDiceRolls();
}

void HW8::chapter6::EP_22::getNumOfDiceRolls(){
    cout << "Enter num of dice rolls: " << endl;
    cin >> numOfCoinFlips;
}

void HW8::chapter6::EP_22::printDiceRolls(){
    int randomNumber = 0;
    for(int i=0;i<numOfCoinFlips;i++){
        randomNumber = rand()%100;  //keep within range of 100
        if(randomNumber>coinFlipBreak){
            cout << head << endl;
            headCount++;
        }else{
            cout << tail << endl;
            tailCount++;
        }
    }
    cout << "Heads: " << headCount << endl;
    cout << "Tails: " << tailCount << endl;
}

///////////////////////////////////////////////////////////////

HW8::chapter6::EP_23::EP_23(){
    numOfCoinFlips = 0;
    srand(time(NULL));
}

void HW8::chapter6::EP_23::execute(){
    getNumOfDiceRolls();
    printDiceRolls();
}

void HW8::chapter6::EP_23::getNumOfDiceRolls(){
    cout << "Enter num of dice rolls: " << endl;
    cin >> numOfCoinFlips;
}

void HW8::chapter6::EP_23::printDiceRolls(){
    int randomNumber = 0;
    for(int i=0;i<numOfCoinFlips;i++){
        randomNumber = rand()%100;  //keep within range of 100
        if(randomNumber<coinFlipBreak){ //60% will be heads
            cout << head << endl;
            headCount++;
        }else{
            cout << tail << endl;
            tailCount++;
        }
    }
    cout << "Heads: " << headCount << endl;
    cout << "Tails: " << tailCount << endl;
}
///////////////////////////////////////////////////////////////
//EP24 version of number 22
HW8::chapter6::EP_24::Coin::Coin(){
    srand(time(NULL));
}

char HW8::chapter6::EP_24::Coin::flipCoin(){
    randomNumber = rand()%100;
    if(randomNumber<coinFlipBreak){
        return H;
    }else{
        return T;
    }
}

void HW8::chapter6::EP_24::EP_24::execute(){
    cout << "Enter number of coin flips" << endl;
    cin >> numOfCoinFlips;
    for(int i=0;i<numOfCoinFlips;i++){
        coinFace = coin.flipCoin();
        switch(coinFace){
            case 'H':
                cout << "Head" << endl;
                headCount++;
                break;
            case 'T':
                cout << "Tail" << endl;
                tailCount++;
                break;
        }
    }
    cout << "Heads: " << headCount << endl;
    cout << "Tails: " << tailCount << endl;
}

///////////////////////////////////////////////////////////////
//Project 1 and 2 code is location in main.cpp





















