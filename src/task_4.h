#include <iostream>
#include <cmath>

using namespace std;

void prime_check(int a, int div){
    if(a==2){
        cout<<"YES";
        return;
    } else if(a%div==0){
        cout<<"NO";
        return;
    } else if(div> ::sqrt(a)){
        cout<<"YES";
        return;
    }

    prime_check(a,div+1);
}
int main(){
    int n=2;
    int a;
    cin>>a;
    prime_check(a,n);
}
//time complexity (worst case): O(n)
