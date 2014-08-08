//
//  main.cpp
//  pointerArray
//
//  Created by yuzus on 8/8/14.
//  Copyright (c) 2014 yuzus. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    long arr[] = {6,0,9,6};
    long *ptr = arr;
    cout << "ptr: " << ptr <<endl;
    cout << "*ptr: " << *ptr <<endl;
    ptr++;
    cout << "ptr: " << ptr <<endl;
    cout << "*ptr: " << *ptr <<endl;
    long *ptr2 = arr + 2;
    cout << "ptr2: " << ptr2 <<endl;
    cout << "*ptr2: " << *ptr2 <<endl;

}

