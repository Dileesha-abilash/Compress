//
// Created by dilee on 17/08/2024.
//
#include "Helper.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned int alder_checksum( int ary[9]) {
    // int ary[9]={87,105,107,105,112,101,100,105,97};
    int sumA = 1;
    int legth= 9;
    int sumB=legth;
    for(int i=0;i<legth;i++) {
        sumA+=ary[i];
        sumB+= ary[i]*(legth-i);
        // std::cout<<sumB<< std::endl;
    }

    unsigned final =   sumA % 65521 +(sumB <<16);
    return final;
}

void generateRandomArray(int *arr, int size) {
    cout << " main ";

    // Seed the random number generator with the current time
    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 256; // Generate a random number between 0 and 255
        cout <<arr[i]<< " ";
    }


}