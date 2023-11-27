#include<iostream>
#include<vector>
using namespace std;
int main(){
        //any array
        char route[1000];
        cin.getline(route,1000);
        int x{0};
        int y{0};
        for (int i = 0; route[i]!= '\0'; i++)
        {
            switch (route[i])
            {
            case 'N': y++;
                break;
            case 'S': y--;
                break;
            case 'E': x++;
                break;
            case 'W': x--;
                break;
            default:
                break;
            }
        }
        cout<<x<<","<<y<<endl;
        //1ST QUADRANT
        if (x>=0 and y>=0)
        {
            while(y--){
                cout<<'S';
            }
            while (x--)
            {
                cout<<'E';
            }
        } 
        // 4TH QUAD
        else if (x>=0 and y< 0)
        {
            while(y++){
                cout<<'N';
            }
            while (x--)
            {
                cout<<'E';
            }
        }
        //2ND QUAD
        else if (x<0 and y>=0)
        {
            while(y--){
                cout<<'S';
            }
            while (x++)
            {
                cout<<'W';
            }
        }
        //3RD QUAD
        else if (x<0 and y<0)
        {
            while(y++){
                cout<<'N';
            }
            while (x++)
            {
                cout<<'W';
            }
        }  
    return 0;
}