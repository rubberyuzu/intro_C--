//
//  main.cpp
//  invalidPointer
//
//  Created by yuzus on 8/8/14.
//  Copyright (c) 2014 yuzus. All rights reserved.
//

#include <iostream>
using namespace std;

int* myFunc(){
    int phantom = 4;
    return &phantom;
}

int test() {
    int foo = 5;
    return foo;
}

            
int main()
{
    int* p = myFunc();
    cout << *p << endl;
    cout << test() << endl;
    cout << *p << endl; //breaks here. memory deallocated.
    
}

