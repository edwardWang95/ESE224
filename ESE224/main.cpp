//
//  main.cpp
//  ESE224
//
//  Created by Edward Wang on 3/9/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include <iostream>
#include "HW6.hpp"

void startHW6();

int main(int argc, const char * argv[]) {
    startHW6();
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
