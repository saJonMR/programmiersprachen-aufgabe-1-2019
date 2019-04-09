//
//  Aufgabe_1.3.cpp
//  Aufgabe_1__rev_03_04_2019
//
//  Created by Jonas Roquette on 07.04.19.
//  Copyright © 2019 Goethes Nachbar. All rights reserved.
// 

#include <iostream>
using namespace std;

typedef long long int ll; 

unsigned int gcd(unsigned int a, unsigned int b)
{
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
    return 1;
}

    ll lcm (int arr[], int n)
    {
        ll result = arr[0];
        for (int i = 0; i < n; i++)
        {
            result = (((arr[i] * result)) / (gcd(arr[i], result)));
        }
        return result;
    }

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    ll save;
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    cout << lcm(arr, n) << "\n";

    return 0;
}