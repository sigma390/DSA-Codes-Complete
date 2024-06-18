#include<bits/stdc++.h>
using namespace std;

string win(string s, string p){

    //2 maps 
    unordered_map<char, int> FP; //frequency of pattern
    unordered_map<char, int> FS; //frequency of string 



    // Initialize frequency map for the pattern
    for (char ch : p) {
        FP[ch]++;
    }
    //vars 
    int cnt = 0;
    int start = 0;
    int start_idx = -1;
    int win_len;
    int min_win_so_far = INT_MAX;


    for (int i = 0; i < s.length(); i++)
    {
        //expand Window By Including Current Char
        char ch = s[i];
        FS[ch]++;


        //count how many chars Matched till now
        if (FP[ch]!=0 and FS[ch]<=FP[ch])
        {
            cnt++;
        }

        //chek if all characters Of PATTERN are Found then We must Contract 
        if(p.length()==cnt){
            //start Contracting From LEFT remve Unwanted and Duplicates , also the Frequency 
            while (FP[s[start]]==0 or FS[s[start]] > FP[s[start]]){
                FS[s[start]]--; //reduce frequency
                start++; // move window  start ++

            }
            //NOW check window size and p[ick min window]
            win_len = i - start+1;
            if (win_len<min_win_so_far)
            {
                min_win_so_far = win_len;
                start_idx = start;
            }
        }
        
    }

    //return String 
    if (start_idx==-1 )
    {
        return "NULL";

    }
    else{ 
        return s.substr(start_idx, min_win_so_far);
    }
    
    

    





}






int main(){
    string s = "fizzbuzz";
    string p = "fizzu";
    cout<<win(s,p);
    return 0;
}