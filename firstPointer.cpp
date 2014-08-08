//
//  main.cpp
//  firstPointer
//
//  Created by yuzus on 8/8/14.
//  Copyright (c) 2014 yuzus. All rights reserved.
//

#include <iostream>
using namespace std;

void squareByPtr(int* numPtr){
    cout << *numPtr <<endl;
    cout << numPtr <<endl;
    *numPtr = *numPtr * *numPtr;
}

//int test(int* a, int* b, int* c) {
//    return *a * *a;
//    b = b * b;
//    c = c * c;
//}

int test2(int a) {
    return a * a;
}


void test3(int& a) {
    a = 4;
}

int main()
{
    int x = 5;
    int y = 3;
//    cout << &x <<endl;
    squareByPtr(&x);
    cout << &x << endl;
    cout << x << endl;

    x = test2(x);
    
    const int* b = &x;
    //*b = 3;
    b = &y;
    int* const c = &x;
    *c = 4;
    //c = &y;

    test3(x);
}

