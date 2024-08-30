//Aryan Thorat 032
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    float b = 9.4;
    float *fptr = &b;
    bool d = 1;
    bool *dptr = &d;
    
    cout << "For Integer:"<<endl;
    cout << "Before increment-"<<endl;
    cout << ptr<< endl;
    ptr++;
    cout << "After increment-"<<endl;
    cout << ptr<< endl;
    cout<< endl;
    cout << "For Float:"<<endl;
    cout << "Before increment-"<<endl;
    cout << fptr<< endl;
    fptr++;
    cout << "After increment-"<<endl;
    cout << fptr<<endl;
    cout<< endl;
    cout << "For Boolean:"<<endl;
    cout << "Before increment-"<<endl;
    cout << dptr<< endl;
    dptr++;
    cout << "After incremen-t"<<endl;
    cout << dptr<<endl;
    cout<< endl;

    return 0;
}
/*For Integer:
Before increment-
0x7ffd727d3404
After increment-
0x7ffd727d3408

For Float:
Before increment-
0x7ffd727d3400
After increment-
0x7ffd727d3404

For Boolean:
Before increment-
0x7ffd727d33ff
After incremen-t
0x7ffd727d3400
*/