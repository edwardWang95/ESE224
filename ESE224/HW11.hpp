//
//  HW11.hpp
//  ESE224
//
//  Created by Edward Wang on 5/3/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef HW11_hpp
#define HW11_hpp

#include <stdio.h>
#include <iostream>

//libraries
#include <list>
#include <stack>


using namespace std;

namespace HW11{
    /*
     Write a program that create a list<int> using STL, add 5 numbers, then print them one by one (20pt)
     Repeat the above using stack (20pt)
     */
    class Project_1{
    private:
        list<int> intList;
        list<int>::iterator iter;
    public:
        Project_1();
        void execute();
    };
    
    /*
     Repeat the above using stack (20pt)
     */
    class Project_2{
    private:
        stack<int> intStack;
    public:
        void execute();
        
    };
    
    
}

#endif /* HW11_hpp */
