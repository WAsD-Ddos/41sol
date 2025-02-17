#include <iostream>
#include <string>
using namespace std;


#define N 10


int main() {
    int first[]{10,5,5,5,5,5,5,5,8,4};
    int  second[]{5,7,8,9,1,8,9,9,7,1};
    int  third[]{ 1,2,3,4,5,6,7,8,9,10 };
    //cout << "first (1-5) - 1 group,second (5-10) - 2 group,third(10 - 15)" << endl; 
    //for (int  i  = 1; i  < N; i ++)
    //{
    //    cin >> array[i];
    //    if(i>5)
    //}

    int mid1=0,mid2=0,mid3=0;
    for (int i = 1; i < N; i++)
    {
        mid1 += first[i];
        mid2 += second[i];
        mid3 += third[i];
    }
    mid1 /= N;
    mid2 /= N;
    mid3 /= N;
    int max = mid3;
    if (mid1 > mid2 || mid1>mid3) {
        max = mid1;
    }
    else if (mid2 > mid3) { max = mid2; }

    cout << "grat avg mark is " << to_string(max);
    
    return 0;
}