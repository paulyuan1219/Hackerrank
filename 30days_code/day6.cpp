#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count = 0;
    cin >> count;
    for(int i = 1; i <=count; i++){
        string tmpstr;
        cin >> tmpstr;
        
        if(tmpstr.length() == 0){
            cout << endl;
        }
        else{
            for(int j = 0; j <tmpstr.length(); j+=2){
                cout << tmpstr[j];
            }
            
            cout << " ";

            for(int j = 1; j <tmpstr.length(); j+=2){
                cout << tmpstr[j];
            }
            
            cout << endl;

            
        }
    }
    return 0;
}
