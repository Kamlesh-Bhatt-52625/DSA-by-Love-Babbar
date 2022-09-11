#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    char ch = 'A';
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}