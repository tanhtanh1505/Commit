#include<iostream>
#include<string>

using namespace std;

string findLongestPrefix(string s1, string s2){
    int i=0;
    string s;
    while(s1[i] == s2[i]){
        s+= s1[i];
        i++;
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s,st;
    getline(cin, s);
    st=s;
    for(int i=1; i<n; i++){
        string ss;
        getline(cin,ss);
        st = min(st, findLongestPrefix(st,ss));
    }
    cout<<st;
}
