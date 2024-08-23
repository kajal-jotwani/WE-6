#include<iostream>
using namespace std;

// approach 1
 int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
 } 





int main(){
    int a = 30;
    int b = 45;
    int result = gcd(a,b);
    cout<<result;
}