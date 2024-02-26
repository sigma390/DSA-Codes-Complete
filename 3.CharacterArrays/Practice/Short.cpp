#include<bits/stdc++.h>
using namespace std;
int main(){
    char route[1000];
    
    cin.getline(route,1000);
    int x{0};
    int y{0};
    
    for (int i = 0; route[i]!='\0'; i++)
    {
       if (route[i]=='E')
       {
        x++;
       }
       if (route[i]=='W')
       {
        x--;
       }
        if (route[i]=='N')
       {
        y++;
       }
       if (route[i]=='S')
       {
        y--;
       }
       
       
       
    }
    cout<<x<<","<<y<<endl;

    if (x>=0 and y>=0)
    {
        while (y--)
        {
            cout<<'N';
        }
         while (x--)
        {
            cout<<'E';
        }
        
    }
    if (x>=0 and y<= 0)
    {
        while (y++)
        {
            cout<<'S';
        }
         while (x--)
        {
            cout<<'E';
        }
        
    }
    
    if (x<=0 and y<=0)
    {
        while (y++)
        {
            cout<<'S';
        }
         while (x++)
        {
            cout<<'W';
        }
        
    }
    
    if (x<=0 and y>=0)
    {
        while (y--)
        {
            cout<<'N';
        }
         while (x++)
        {
            cout<<'W';
        }
        
    }
    
    
    
    return 0;
    

}