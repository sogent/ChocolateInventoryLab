//
// Created by Sarah Ogent on 9/27/21.
//
#include <vector>
using namespace std;

#ifndef CHOCOLATEINVENTORYLAB_CHOCOLATEINVENTORYMODULES_H
#define CHOCOLATEINVENTORYLAB_CHOCOLATEINVENTORYMODULES_H

void menuOptions();
void printInventory(vector<int>sizeLarge, vector<int>sizeMedium, vector<int>sizeSmall);
int orderInventory(vector<int>&sizeLarge, vector<int>&sizeMedium, vector<int>&sizeSmall);
void fillOrder(vector<int>&sizeLarge, vector<int>&sizeMedium, vector<int>&sizeSmall, int& OrderNum);

#endif //CHOCOLATEINVENTORYLAB_CHOCOLATEINVENTORYMODULES_H
