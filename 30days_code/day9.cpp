#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int i){
    if(i <=1) return 1;
    else{
        return i*factorial(i-1);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    cin >> count;
    cout << factorial(count);
    return 0;
}
