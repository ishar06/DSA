#include <iostream>
using namespace std;

void func(int a[5])
{
    int i;
    for(i = 1; i < 3; i++)
    {
        a[i] = a[i-1] + a[i+1];
        if(a[i]%2 == 0)
            a[i] /= 2;
    }
}

int main(){
    int a1[5] = {1,2,3,4,5};
    int a2[5] = {5,4,3,2,1};
    int a3[5] = {5,65,45,2,25};
    func(a1);
    func(a2);
    func(a3);
    for (int e: a1){
        cout << e << " ";
    }
    cout << endl;
    for (int e: a2){
        cout << e << " ";
    }
    cout << endl;
    for (int e : a3){
        cout << e << " ";
    }
    cout << endl;
}