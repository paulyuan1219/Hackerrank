#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(){
    int n;
    cin >> n;
    int oldn = n;
    
    int count = 0;
    int maxcount = 0;
//    string result;
    vector<int> result;
    
    while(n>0){
        int remainder = n % 2;
        result.push_back(remainder);
        
        if(remainder==0){
            count = 0;
        }
        else{
            count++;
            if(maxcount < count){
                maxcount = count;
            }
        }
        
        n = n/2;
           
    }

    cout << maxcount;
    /*
    cout << "The binary representation of " << oldn << " is ";
    for(int i = result.size()-1; i>=0; i--){
        cout << result[i];
    }
    cout << ", so the maximum number of consecutive 1's is " << maxcount << ".";*/
    return 0;
//    The binary representation of  is , so the maximum number of consecutive 's is .
}
