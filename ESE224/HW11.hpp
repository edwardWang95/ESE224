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

#include <string>
#include "fruit.h"

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
    
    /*
     Write a base vehicle class (20pt)
     Protected members: string make, model; double weight; int seating,
     Public constructors: vehicle(); vehicle(string make, string model);
     Public member functions: void setweight(double); void setseating(int); double getweight(); int getseating();
     */
    class Vehicle{
    protected:
        string make;
        string model;
        double weight;
        int seating;
    public:
        Vehicle();
        Vehicle(string make, string model);
        //Setters
        void setWeight(double weight);
        void setSeating(int seating);
        //Getters
        double getWeight();
        int getSeating();
        string getMake();
        string getModel();
    };
    
    /*
     Write a derived SUV class from vehicle, add (20pt)
     Protected members: double cargo, string content
     Public constructors: SUV(), SUV(string make, string model, double cargo)
     Public member function: void setcontent(string); string getcontent();
     */
    class SUV: public Vehicle{
    protected:
        double cargo;
        string content;
    public:
        SUV();
        SUV(string make, string model, double cargo);
        //Setters
        void setContent(string content);
        //Getters
        string getContent();
        double getCargo();
    };
    
    /*
     Write a main function that creates 2 vehicles objects, 2 SUV objects, set their weight, seating, content (for SUV objects), then get and print out these variables for each object (20pt)
     */
    class Project_3{
    public:
        void execute();
    };
    
}

#endif /* HW11_hpp */
