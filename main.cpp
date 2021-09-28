#include <iostream>
#include "ChocolateInventoryModules.h"
#include <vector>
using namespace std;

/*
 Note to self: initialize values you want to keep in the main function, pass by reference in functions to keep changes
 also, keep separate printing functions and functions that do calculations
 */

int main() {
    //Initialize inventory order number
    int ChocolateOrderNum=0;

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
    cout<<endl;
    cout<<"Welcome to \"Sarah's Succulent Sweets\" Chocolate Factory!"<<endl;
    while(run) {
        //menuOptions function
        menuOptions();
        char userInput;
        cin >> userInput;
        toupper(userInput);
        switch (userInput) {
            case 'F':
                    //fillOrder function
                fillOrder(inventoryLarge, inventoryMedium, inventorySmall, ChocolateOrderNum);
                break;
            case 'P':
                    //printInventory function
                    printInventory(inventoryLarge, inventoryMedium, inventorySmall);
                break;
            case 'O':
                    //orderInventory
                orderInventory(inventoryLarge, inventoryMedium, inventorySmall);
                break;
            case 'E':
                    //Exit
                    cout<< "Goodbye!"<<endl;
                run = false;

                break;
            default:
                cout << "Invalid input, please try again" << endl;
                cout<<endl;

                break;


        }
    }
    return 0;
}
