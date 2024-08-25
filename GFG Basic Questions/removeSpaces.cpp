#include<bits/stdc++.h>
using namespace std;



string removeString(string str){

    string res = "";
    for ( auto x : str)
    {
        if(x !=' '){
            res+=x;
        }
    }

    return res;
    


}




int main(){
    string str = "Hello Development!! hjkdsckjdsj vbjhsxjsnvdsn";
    string a = removeString(str);
    cout<< a<<endl;

    return 0;
}