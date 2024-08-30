//Aryan Thorat 032 

#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    return 0;
}


/*Output:
0x7ffea5d78b24
0x7ffea5d78b24
10*/