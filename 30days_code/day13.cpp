#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
    if(ar.size()<=1)
        return;
    
    int tmpvar = 0;
    for(int i = ar.size()-1; i < ar.size(); i++){ // we only handle the last element.
        tmpvar = ar[i];
        
        int j = i-1;
        while(ar[j] > tmpvar){
            ar[j+1] = ar[j];
            j--;
            if(j <0)
                break;
            for(vector<int>::iterator it = ar.begin(); it!=ar.end(); ++it){
                cout << (*it) << " ";
            }
            cout << endl;
        }
        ar[j+1] = tmpvar;
        for(vector<int>::iterator it = ar.begin(); it!=ar.end(); ++it){
            cout << (*it) << " ";
        }
        cout << endl;
        
        
    }
    


}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}




