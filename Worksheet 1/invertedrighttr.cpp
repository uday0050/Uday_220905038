#include <iostream>
using namespace std;

int main() {
    int i,j;
    for(i=0;i<=8;i++)
    {
        for(j=8;j>=i;j--)
        cout <<"* ";
        cout<<'\n';
    }
    return 0;
}
