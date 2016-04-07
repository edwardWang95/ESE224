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

void startHW6();
void startHW8();

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
    ep22.execute();
}
