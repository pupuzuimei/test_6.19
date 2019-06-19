//
//  main.cpp
//  test_6.19
//
//  Created by s20181106278 on 2019/6/19.
//  Copyright © 2019 s20181106278. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream inf("/Users/s20181106278/Desktop/inf.txt");
    if (inf.is_open())
    {
        inf << "This is a line.\n";
        inf << "This is another line.\n";
        inf.close();
    }
    return 0;
}
