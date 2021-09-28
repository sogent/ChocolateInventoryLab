#include <iostream>
#include "ChocolateInventoryModules.h"
#include <vector>
using namespace std;

/*
 Note to self: initialize values you want to keep in the main function, pass by reference in functions to keep changes
 also, keep separate printing functions and functions that do calculations
 */

int main() {
    //Starting inventory:
    vector<int>inventoryLarge={1500};
    //5 pounds each

    vector<int>inventoryMedium={1200};
    //3 pounds each

    vector<int>inventorySmall={7000};
    //1 pound each

    //Prices of inventory per size:
    vector<float>priceLarge{30.50};
    vector<float>priceMedium{25.99};
    vector<float>priceSmall{10.50};

    bool run = true;
    cout<<"Welcome to \"Sarah's Succulents\" Chocolate Factory!"<<endl;
    while(run) {
        //menuOptions call will go here
        menuOptions();
        char userInput;
        cin >> userInput;
        toupper(userInput);
        switch (userInput) {
            case 'F':
                    //fillOrder function call will go here
                break;
            case 'P':
                    //printInventory function call will go here
                    printInventory(inventoryLarge, inventoryMedium, inventorySmall);
                break;
            case 'O':
                    //orderInventory function call will go here
                orderInventory(inventoryLarge, inventoryMedium, inventorySmall);
                cout << inventoryLarge.at(0)<<endl;
                cout<<inventoryMedium.at(0)<<endl;
                cout<<inventorySmall.at(0)<<endl;
                break;
            case 'E':
                    //Exit
                run = false;

                break;
            default:
                cout << "Invalid input, please try again" << endl;

                break;


        }





    }



    return 0;
}
