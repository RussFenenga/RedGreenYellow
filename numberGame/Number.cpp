//
//  Number.cpp
//  numberGame
//
//  Created by Russ Fenenga on 3/4/15.
//  Copyright (c) 2015 com. All rights reserved.
//


#include "Number.h"
#include <iostream>
using namespace std;

int corectNumber[3];
int guessNumber [3];
int correctNumberToModify[3];
int guessAttempt[3];

void Number::splitNumber(int number2Spilt){
    
    
    guessNumber[0] = number2Spilt / 100;
    number2Spilt -= guessNumber[0]*100;
    guessNumber[1] = number2Spilt / 10;
    number2Spilt -= guessNumber[1]*10;
    guessNumber[2] = number2Spilt;
    
}

Number::Number(int correctNumber){
    corectNumber[0] = correctNumber / 100;
    correctNumber -= corectNumber[0]*100;
    corectNumber[1] = correctNumber / 10;
    correctNumber -= corectNumber[1]*10;
    corectNumber[2] = correctNumber;
}

Number::Number(){
    
}

bool Number::calculateValues(){
    int numGreen = 0, numRed=0, numYellow = 0;
    bool allGreen = false;
    
    correctNumberToModify[0] = corectNumber[0];
    correctNumberToModify[1] = corectNumber[1];
    correctNumberToModify[2] = corectNumber[2];
    
    guessAttempt[0] = guessNumber[0];
    guessAttempt[1] = guessNumber[1];
    guessAttempt[2] = guessNumber[2];
    
    
    for (int i = 0; i < 3; i++){
        if(guessAttempt[i] == correctNumberToModify[i]){
            numGreen++;
            guessAttempt[i]=-1;
            correctNumberToModify[i]=-2;
        }
    }
    
    for (int k = 0; k < 3; k++){
        for (int j = 0; j < 3; j++){
            if (guessAttempt[k] == correctNumberToModify[j]){
                numYellow++;
                guessAttempt[k] = -1;
                correctNumberToModify[j] = -2;
            }
        }
    }
    numRed = (3 - numGreen - numYellow);
    
    cout << "Green:  " << numGreen << "\t";
    cout << "Yellow: " << numYellow << "\t";
    cout << "Red:    " << numRed << "\n";
    if(numGreen==3){
        allGreen = true;
    }
    return allGreen;
}