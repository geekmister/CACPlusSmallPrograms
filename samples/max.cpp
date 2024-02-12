// Calculate the max of two numbers
// Created by geekmister on 2024/2/12.
//
#include <iostream>
using namespace std;

int max(int x, int y) {
    int z;
    if(x > y)
        z = x;
    else
        z = y;
    return z;
}

int main() {
    int x,y;
    cin >>x>>y;
    cout <<"the max number="<<max(x,y);
    return 0;
}