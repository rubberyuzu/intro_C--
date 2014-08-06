//
//  main.cpp
//  createArray
//
//  Created by yuzus on 8/6/14.
//  Copyright (c) 2014 yuzus. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    cout << "plz enter 4 integers:" << endl;
    
    for(int i=0; i<4; i++)
        cin >> arr[i];
    cout << "Values in array are now:";
    for(int i=0; i<4; i++)
        cout << " " << arr[i];
    
    cout << endl;
    
    return 0;
}

