#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    char ch = 65;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        ch++;
        row++;
    }
    return 0;
}