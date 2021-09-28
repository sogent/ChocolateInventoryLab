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

void fillOrder(vector<int>&sizeLarge, vector<int>&sizeMedium, vector<int>&sizeSmall, int& OrderNum) {
    int numPounds;
    int i = 0;
    int LargeBars = 0;
    int MediumBars = 0;
    int SmallBars = 0;
    int remainderPounds=0;
    bool run = true;
    while (run) {
        cout << "Please fill the number of pounds of chocolate in the order: ";
        cin >> numPounds;

        while(i<numPounds){
            if(sizeLarge.at(0)<=0){
                break;
            }
            numPounds=numPounds-5;
            ++LargeBars;
            --sizeLarge.at(0);
        }

        cout<< numPounds<<endl;

        while(i<numPounds&&numPounds>2){
            if(sizeMedium.at(0)<=0){
                break;
            }
            numPounds=numPounds-2;
            ++MediumBars;
            --sizeMedium.at(0);
        }

        cout<<numPounds<<endl;

        while(i<numPounds){
            if(sizeSmall.at(0)==0){
                break;
            }
            numPounds=numPounds-1;
            ++SmallBars;
            --sizeSmall.at(0);
        }



    ++OrderNum;
    break;
    }
    cout << "Chocolate Order #"<<OrderNum<<endl;
    cout<<"Large Bars: "<<LargeBars<<endl;
    cout<<"Medium Bars: "<<MediumBars<<endl;
    cout<<"Small Bars: "<<SmallBars<<endl;

    //shipping and taxes still need to be added
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

