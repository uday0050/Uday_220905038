#include <iostream>
using namespace std;

int main() {
    int i,j,k;
    for(i=0;i<=10;i++)
    {
        for(j=10;j>=i;j--)
        cout <<" ";
        for(k=0;k<=i;k++)
        cout<<"* ";
        cout<<'\n';
    }
    return 0;
}
