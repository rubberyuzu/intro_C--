//
//  main.cpp
//  cstring
//
//  Created by yuzus on 8/7/14.
//  Copyright (c) 2014 yuzus. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char fragment1[]="andymori is n";
    char fragment2[]="ot over";
    char finalString[20]="";
    
    strcat(finalString, fragment1);
    strcat(finalString, fragment2);
    
    cout << finalString<<endl;
    return 0;
}

