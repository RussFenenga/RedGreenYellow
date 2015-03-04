//
//  Number.h
//  numberGame
//
//  Created by Russ Fenenga on 3/4/15.
//  Copyright (c) 2015 com. All rights reserved.
//

#ifndef __numberGame__Number__
#define __numberGame__Number__

#include <stdio.h>
#include <vector>
using namespace std;

class Number{
public:
    Number(int);
    Number();
    bool calculateValues();
    void splitNumber(int);
};

#endif /* defined(__numberGame__Number__) */
