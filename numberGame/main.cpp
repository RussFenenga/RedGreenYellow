//
//  main.cpp
//  numberGame
//
//  Created by Russ Fenenga on 3/4/15.
//  Copyright (c) 2015 com. All rights reserved.
//

#include <iostream>
#include "Number.h"
using namespace std;

int main() {
    bool done = false;
    int guessNumber = 0;
    srand(time(0));
    
    
    int correctAnswer = 100+ rand() % 899;
    cout << correctAnswer;
    Number num(correctAnswer); // take and load into the correct number array.
    while(!done){
        cout<< "Enter your guess: ";
        cin >> guessNumber;
        if(guessNumber>=100 && guessNumber <=999){
            Number guess;
            guess.splitNumber(guessNumber);
            done = guess.calculateValues();
        } else {
            cout << "You are an idiot plz follow the rulez.\n";
        }
    
    }
    cout << "U R THE WINRAR!!! \n";
   
}
