#include<iostream>

using namespace std;

void swapS(string& s){
    for(int i=0; i< s.length()-1; i++)
        for(int j=i+1; j<s.length(); j++)
            if(s[i] > s[j]){
                char c;
                c= s[i]; s[i]= s[j]; s[j]=c;
            }
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        swapS(s);
        cout<<s<<endl;
    }
}