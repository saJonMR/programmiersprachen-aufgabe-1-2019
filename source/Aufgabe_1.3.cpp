//
//  Aufgabe_1.3.cpp
//  Aufgabe_1__rev_03_04_2019
//
//  Created by Jonas Roquette on 07.04.19.
//  Copyright © 2019 Goethes Nachbar. All rights reserved.
// 

#include <iostream>
using namespace std;

int main() {
    int min = 1;
    while (min % 20 != 0) {
        min++;
    }
    cout << min << endl;
    return 0;
}
