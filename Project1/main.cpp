#include <iostream>
using namespace std;
#include "Vector3d.h"

int main()
{
    Vector3d v1(1, 2, 3);
    Vector3d v2(1, 2, 3);
    Vector3d v3 = v1.operator+(v2);
    cout <<"v1+v2 : "<< v3 << endl;
    

    return 0;
}