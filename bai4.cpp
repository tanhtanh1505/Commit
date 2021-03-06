string findLongestPrefix(string s1, string s2){
    int i=0;
    string s;
    while(s1[i] == s2[i]){
        s+= s1[i];
        i++;
    }
    return s;
}