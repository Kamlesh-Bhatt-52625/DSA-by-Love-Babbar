#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Entere the number of rows: ";
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}