//
// Created by Sarah Ogent on 9/27/21.
//
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
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
    cout<<endl;
    cout<<right<<setw(20)<<"Chocolate Inventory"<<endl;
    cout<<"Large Bars: "<<right<<setw(9)<<sizeLarge.at(0)<<endl;
    cout<<"Medium Bars: "<<right<<setw(8)<<sizeMedium.at(0)<<endl;
    cout<<"Small Bars: "<<right<<setw(9)<<sizeSmall.at(0);
    cout<<endl;

}

void fillOrder(vector<int>&sizeLarge, vector<int>&sizeMedium, vector<int>&sizeSmall, int& OrderNum) {
    int numPounds;
    int i = 0;
    int LargeBars = 0;
    int MediumBars = 0;
    int SmallBars = 0;
    int LargeBarPounds=5;
    int MediumBarPounds=2;
    int SmallBarPounds=1;
    float LargeBarCost=30.50;
    float MediumBarCost=25.99;
    float SmallBarCost=10.50;
    float totalBarCost=0;
    float LargeBarTax=0;
    float MediumBarTax=0;
    float SmallBarTax=0;
    float totalTax=0;
    float shippingCost=0;
    float shipmentPounds=0;
    float completeTotal=0;

    bool run = true;
    while (run) {
        cout<<endl;
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


        while(i<numPounds&&numPounds>2){
            if(sizeMedium.at(0)<=0){
                break;
            }
            numPounds=numPounds-2;
            ++MediumBars;
            --sizeMedium.at(0);
        }


        while(i<numPounds){
            if(sizeSmall.at(0)==0){
                break;
            }
            numPounds=numPounds-1;
            ++SmallBars;
            --sizeSmall.at(0);
        }

        //Cost of bars
        LargeBarCost=(LargeBars*LargeBarCost);
        MediumBarCost=(MediumBars*MediumBarCost);
        SmallBarCost=(SmallBars*SmallBarCost);
        totalBarCost=LargeBarCost+MediumBarCost+SmallBarCost;

        //find tax on order
        LargeBarTax = LargeBars*0.75;
        MediumBarTax = MediumBars*0.75;
        SmallBarTax = SmallBars*0.75;
        totalTax= LargeBarTax+MediumBarTax+SmallBarTax;

        //find shipping charge amount
        shipmentPounds = (LargeBars*LargeBarPounds)+(MediumBars*MediumBarPounds)+(SmallBars*SmallBarPounds);
        if(shipmentPounds>=0&&shipmentPounds<=10){
            shippingCost=5.25;
        } else if(shipmentPounds>=11&&shipmentPounds<=20){
            shippingCost=7.75;
        } else if(shipmentPounds>=21&&shipmentPounds<=50){
            shippingCost=12.25;
        } else if(shipmentPounds>50){
            shippingCost=19.75;
        }

    ++OrderNum;
    break;
    }

    completeTotal = totalBarCost + totalTax + shippingCost;
    cout<<setprecision(2)<<fixed;
    //order print out
    cout<<right<<setw(24)<< "Chocolate Order #"<<OrderNum<<endl;
    cout<<left<<setw(10)<<"Large Bars: "<<LargeBars<<right<<setw(10)<<"$"<<LargeBarCost<<endl;
    cout<<"Medium Bars: "<<MediumBars<<right<<setw(10)<<"$"<<MediumBarCost<<endl;
    cout<<"Small bars: "<<SmallBars<<setw(15)<<right<<setw(13)<<"$"<<SmallBarCost<<endl;

    cout<<endl;
    //shipping, taxes and total print out
    cout<<left<<setw(10)<<"Sub Total: "<<right<<setw(10)<<"$"<<totalBarCost<<endl;
    cout<<left<<setw(10)<<"Tax Total: "<<right<<setw(10)<<"$"<<totalTax<<endl;
    cout<<left<<setw(5)<<"Shipping Total: "<<right<<setw(5)<<"$"<<shippingCost<<endl;
    cout<<left<<setw(10)<<"Total cost: "<<right<<setw(9)<<"$"<<completeTotal<<endl;


}

void orderInventory(vector<int>&sizeLarge, vector<int>&sizeMedium, vector<int>&sizeSmall){

     int userNum;
     bool run=true;
    while(run) {
        cout << "What size of bar would you like to order (L, M, or S)?"<<endl;
        char userInput;
        cin >>userInput;
        toupper(userInput);
        if (userInput == 'L') {
            cout << "How many bars are needed?"<<endl;
            cin>>userNum;
            if(userNum<0){
                cout<<"Invalid entry, please try again"<<endl;
                cout<<endl;
                continue;
            }
            sizeLarge.at(0) = userNum + sizeLarge.at(0);
            break;

        } else if (userInput == 'M') {
            cout << "How many bars are needed?"<<endl;
            cin>>userNum;
            if(userNum<0) {
                cout << "Invalid entry, please try again" << endl;
                cout << endl;
                continue;
            }
            sizeMedium.at(0) = userNum + sizeMedium.at(0);
            break;

        } else if (userInput == 'S') {
            cout << "How many bars are needed?"<<endl;
            cin>>userNum;
            if(userNum<0) {
                cout << "Invalid entry, please try again" << endl;
                cout << endl;
                continue;
            }
            sizeSmall.at(0) = userNum + sizeSmall.at(0);
           break;

        } else{
            cout<<"Invalid entry, please try again"<<endl;
            cout<<endl;
        }
    }
}

