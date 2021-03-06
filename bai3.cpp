#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        char c;
        cin>>s>>c;
        int i= s.find(c,0);
        cout<< i <<endl;
    }
}