using namespace std;


int main(){
    int n;
    cin >> n;
    
    if(n%2 == 1){ cout << "Weird" << endl;}
else{

if(2<=n && n<=5 || n>20) { cout << "Not Weird" << endl;}
else if(6<=n && n<=20) { cout << "Weird" << endl;}

}
    return 0;
}
