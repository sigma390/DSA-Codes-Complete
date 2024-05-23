#include<bits/stdc++.h>
using namespace std;

void replace_space(char *str){


    //1.count spaces
    int cnt = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            cnt++;
        }
        
    }

    //2.expand Array
    //find max array that is needed
    int idx = strlen(str)+ 2*cnt;
    str[idx] = '\0';

    //replacing with %20 and , traverse from end
    for (int i = strlen(str)-1; i>=0; i--)
    {
        //if we get " " replace with %20
        if (str[i]==' ')
        {
            str[idx-1]='0';
            str[idx-2]='2';
            str[idx-3]='%';
            idx = idx-3;
        }
        else{
            str[idx-1] = str[i];
            idx--;
        }
        
    }
    
    

   

}


int main() {
    char input[10000];
    cin.getline(input,1000);
    replace_space(input);
    cout<<input <<endl;

    return 0;
}