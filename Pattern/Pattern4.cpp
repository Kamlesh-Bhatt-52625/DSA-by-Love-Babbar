#include<iostream>
using namespace std;

int main()
{
    int column,row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;
    int i=1;
    int k=1;
    while(i<=row){
        int j=1;
        while(j<=column){
            cout<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}