#include<bits/stdc++.h>
using namespace std;


//step : 1 extract string at key thats a column 
//returns a Colum key = 2 ; means second Column

string extractStringKey(string str, int key){
    //string tokeniser inbuilt 
    char *s = strtok((char*) str.c_str(), " "); //  str.c_str() converts a C++ std::string to a C-style string (const char*).
    while(key>1){
        s = strtok(NULL," ");
        key--;
    }
    return (string)s;

}

bool lexCompare(pair<string, string>s1 ,  pair<string , string>s2){
    //store keys in Local vars
    string k1 = s1.second;
    string k2 = s2.second;

    return stoi(k1)<stoi(k2);
}

bool numCompare(pair<string, string>s1 ,  pair<string , string>s2){
     string k1 = s1.second;
    string k2 = s2.second;

    return k1<k2;
}



int main(){
    // string s = "10 20 30 40";
    // cout<< extractStringKey(s, 2); //give me 2nd column

    //1. to take necessary Inputs

    int n;
    cin>>n;

    string temp;
    vector<string > ss ;
    for (int i = 0; i < n; i++)
    {
        getline(cin , temp); //includes White spaces 
        ss.push_back(temp);
    }

    //to get fals/ true and key
    int key;
    string reversa , order;
    cin>>key>>reversa>>order; //take single Word as Input

    //1. extract tokens
    vector<pair<string,string>>vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({ss[i], extractStringKey(ss[i], key)});
    }
    
    //2. sorting
    if (order=="numeric")
    {
        sort(vp.begin(), vp.end() , numCompare);
    }else{
              sort(vp.begin(), vp.end() , lexCompare);
    }

    //3. reversal
    if (reversa=="true")
    {
        reverse(vp.begin(), vp.end());
    }

    //4. Output
    for (int i = 0; i < n ; i++)
    {
        cout<<vp[i].first<<" ";
    }
    
    
    
    




    return 0;
}