#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    char Ar[1000][1000];
    cin >> n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
    {
        if (i>=(n-(j+1))) Ar[i][j] = '#';
        else Ar[i][j] = ' ';
    }

    for (int i=0;i<n;i++)
        {
        for (int j=0;j<n;j++)
            cout << Ar[i][j];
        cout << endl;
    }
    return 0;
}
