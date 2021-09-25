#include <iostream>
using namespace std;


//function declarations
void menuOptions(){
    cout << "Please enter one of the following menu options: " << endl;
    cout << "F - Fill an order" << endl;
    cout << "P - Print inventory" << endl;
    cout << "O - Order inventory" << endl;
    cout << "E - Exit" << endl;
}

void printInventory(){
    //this function prints a receipt of the inventory
}




int main() {
    bool run = true;
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
                break;
            case 'O':
                    //orderInventory function call will go here
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
