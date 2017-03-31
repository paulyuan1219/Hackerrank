#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> ht;// = new map<string, int>();
    
    int count;
    cin >> count;
    for(int i = 0; i < count; i++){
        string name;
        int tel;
        cin >> name >> tel;
        ht.insert(pair<string, int>(name, tel));
    }
    
    map<string, int>::iterator it;
    while(true){
        string name;
        cin >> name;
        if(name.length() == 0) break;
        
        it = ht.find(name);
        
        if(it != ht.end()){
            cout << name << "=" << ht[name] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
        
    }
                  
                  
    return 0;
}
