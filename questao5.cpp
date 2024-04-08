#include<iostream>

using namespace std;

int main(){
    string x = "ola mundo";
    for(int i = x.length(); i>=0; i--){
        cout << x[i];
    }
    cout << endl;
}