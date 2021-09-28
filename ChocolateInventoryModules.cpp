//
// Created by Sarah Ogent on 9/27/21.
//
#include <iostream>
#include <vector>
#include "ChocolateInventoryModules.h"
using namespace std;

void menuOptions(){
    cout<<endl;
    cout << "Please enter one of the following menu options: " << endl;
    cout << "F - Fill an order" << endl;
    cout << "P - Print inventory" << endl;
    cout << "O - Order inventory" << endl;
    cout << "E - Exit" << endl;
}

void printInventory(vector<int>sizeLarge, vector<int>sizeMedium, vector<int>sizeSmall){
    //this function prints a receipt of the inventory
    cout<<"Chocolate Inventory"<<endl;
    cout<<"Large Bars: "<<sizeLarge.at(0)<<endl;
    cout<<"Medium Bars: "<<sizeMedium.at(0)<<endl;
    cout<<"Small Bars: "<<sizeSmall.at(0)<<endl;
    cout<<endl;

}

void fillOrder(){

}

 int orderInventory(vector<int>&sizeLarge, vector<int>&sizeMedium, vector<int>&sizeSmall){
    char userInput;
    int userNum;
    cout << "What size of bar would you like to order (L, M, or S)?"<<endl;
    cin >>userInput;
    cout << "How many bars are needed?"<<endl;
    cin>>userNum;
    if(userInput=='L'){
        sizeLarge.at(0)=userNum+sizeLarge.at(0);
        return sizeLarge.at(0);
    } else if(userInput=='M'){
        sizeMedium.at(0)=userNum+sizeMedium.at(0);
        return sizeMedium.at(0);
    } else if(userInput=='S'){
        sizeSmall.at(0)=userNum+sizeSmall.at(0);
        return sizeSmall.at(0);
    }

}

