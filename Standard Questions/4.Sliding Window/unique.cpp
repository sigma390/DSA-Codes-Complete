#include<bits/stdc++.h>
using namespace std;


string unk(string s){
    //two pointers
    int j = 0;
    int i = 0;
    //map 
    unordered_map<char, int> res;
    int win_len = 0;
    int max_win_len = 0;
    int start_win = -1;

    //traverse
    while(j<s.length()){
        char ch = s[j];
        //check its there in hashmap or not and its idx is > start of curent window
        if(res.count(ch) and res[ch]>=i){
            i = res[ch]+1;
            win_len = j-i; //updated Window Length Excluding current char 

        }

        //update last occuranvce
        res[ch] = j;
        win_len++;
        j++;

        //update amx_window length
        if (win_len>max_win_len)
        {
            max_win_len = win_len;
            start_win = i;
        }
        

    }
    return s.substr (start_win, max_win_len);

}

int main(){
    string s = "abcabed";
    string s1 = "prateekbhaiya";
    cout<<unk(s);
    cout<<unk(s1);
    return 0;
}