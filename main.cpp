#include <iostream>
#include "ChocolateInventoryModules.h"
#include <vector>
using namespace std;

/*
 Note to self: initialize values you want to keep in the main function, pass by reference in functions to keep changes
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

    bool run = true;
    cout<<endl;
    cout<<"Welcome to \"Sarah's Succulent Sweets\" Chocolate Factory!"<<endl;
    while(run) {
        //menuOptions function
        menuOptions();
        char userInput1, userInput;
        cin >> userInput1;
        userInput=toupper(userInput1);
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
