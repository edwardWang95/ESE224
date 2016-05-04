//
//  HW11.cpp
//  ESE224
//
//  Created by Edward Wang on 5/3/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "HW11.hpp"
using namespace HW11;

Project_1::Project_1(){
    //set iter to beginning of list
    iter = intList.begin();
}

void Project_1::execute(){
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

void Project_2::execute(){
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

//////////////////////////////////////////////////////////////////
void Project_3::execute(){
    Vehicle v1("Toyota", "2016"), v2("Honda","2016");
    SUV s1("Jeep1","2016",1000), s2("Jeep2","2016",1500);
    Vehicle *vehicleArray[2] = {&v1, &v2};
    SUV *suvArray[2] = {&s1, &s2};
    
    //Vehicle
    v1.setWeight(1000);
    v2.setWeight(1500);
    v1.setSeating(3);
    v2.setSeating(4);
    
    //SUV
    s1.setWeight(2000);
    s2.setWeight(2500);
    s1.setSeating(4);
    s2.setSeating(5);
    s1.setContent("Bricks");
    s2.setContent("Sand");
    
    Vehicle *v;
    for(int i=0;i<2;i++){
        v = vehicleArray[i];
        cout << "Vehicle " << (i+1) << endl;
        cout << "Make: " << v->getMake() << endl;
        cout << "Model: " << v->getModel() << endl;
        cout << "Seating: " << v->getSeating() << endl;
        cout << "Weight: " << v->getWeight() << endl;
        cout << endl;
    }
    
    SUV *s;
    for(int i=0;i<2;i++){
        s = suvArray[i];
        cout << "SUV " << (i+1) << endl;
        cout << "Make: " << s->getMake() << endl;
        cout << "Model: " << s->getModel() << endl;
        cout << "Seating: " << s->getSeating() << endl;
        cout << "Weight: " << s->getWeight() << endl;
        cout << "Cargo: " << s->getCargo() << endl;
        cout << "Content: " << s->getContent() << endl;
        cout << endl;
    }
}


//Vehicle
Vehicle::Vehicle(){
    make = "None";
    model = "2016";
    weight = 1000;
    seating = 2;
}

Vehicle::Vehicle(string make, string model){
    this->make = make;
    this->model = model;
    
}

void Vehicle::setWeight(double weight){
    this->weight = weight;
}

void Vehicle::setSeating(int seating){
    this->seating = seating;
}

double Vehicle::getWeight(){
    return weight;
}

int Vehicle::getSeating(){
    return seating;
}

string Vehicle::getMake(){
    return make;
}

string Vehicle::getModel(){
    return model;
}

//SUV
SUV::SUV(){
    cargo = 0;
    content = "Bricks";
}

SUV::SUV(string make, string model, double cargo){
    this->make = make;
    this->model = model;
    this->cargo = cargo;
}

void SUV::setContent(string content){
    this->content = content;
}

string SUV::getContent(){
    return content;
}

double SUV::getCargo(){
    return cargo;
}



