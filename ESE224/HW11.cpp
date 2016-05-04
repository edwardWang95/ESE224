//
//  HW11.cpp
//  ESE224
//
//  Created by Edward Wang on 5/3/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW11.hpp"

HW11::Project_1::Project_1(){
    //set iter to beginning of list
    iter = intList.begin();
}

void HW11::Project_1::execute(){
    //Ask for 5 numbers
    int temp = 0;
    cout << "Please enter 5 numbers." << endl;
    for(int i=0;i<5;i++){
        cout << "Enter number " << i << ": ";
        cin >> temp;
        intList.insert(iter, temp);
        iter++;
    }
    
    //Print out the numbers one by one
    for(iter = intList.begin();iter!=intList.end();iter++){
        cout << *iter << endl;
    }
}
//////////////////////////////////////////////////////////////////

void HW11::Project_2::execute(){
    //Ask for 5 numbers
    int temp = 0;
    cout << "Please enter 5 numbers." << endl;
    for(int i=0;i<5;i++){
        cout << "Enter number " << i << ": ";
        cin >> temp;
        intStack.push(temp);
    }
    
    //Print out the numbers one by one
    for(int i=0;i<5;i++){
        cout << intStack.top() << endl;
        intStack.pop();
    }
}