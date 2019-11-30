#include <iostream>

using namespace std;
template<typename array>double calculatetotal(array arr,int size){
    int total = 0;
    for(int i=0 ;i<size;i++){
        total = total + arr[i];
    }
    return total;
}
int main(int argc,char**argv)
{
    int arring[] = {5,10,15,20,25,30};
    double arring2[] = {10.5,20.1,30.6};
    cout << "Total int is " <<calculatetotal(arring,6)<< endl;
    cout << "Total double is " <<calculatetotal(arring2,3)<< endl;
    return 0;
}
