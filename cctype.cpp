//
//  main.cpp
//  cctype
//
//  Created by yuzus on 8/7/14.
//  Copyright (c) 2014 yuzus. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char messyString[] = "12y765U1432Zu1423Sai1324JO!!?..A123Nd123432y1324Mo5643243ri!!321!Y12o123YO";
    char current = messyString[0];
    for(int i=0; current != '\0'; current = messyString[++i]){
        if(isalpha(current)){
            cout << (char)(isupper(current) ? tolower(current) : current);
        }else if(ispunct(current)){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}

