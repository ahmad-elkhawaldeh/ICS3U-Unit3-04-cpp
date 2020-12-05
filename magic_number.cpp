// copyright (c) 2020 Ahmad All rights reserved
//
// created by Ahmad El-khawaldeh
// created on Nov 2020
// This program will tell u if your input is possitive or negative

#include<iostream>
using namespace std;

int main() {
    int num;

    // input
    cout << "Enter an integer : ";
    cin >> num;

    // process and output
    if (num > 0)
        cout << num << " is a positive number.";
    else if (num < 0)
        cout << num << " is a negative number.";
    else if (num == 0)
        cout << num << " is == 0 .";
}



