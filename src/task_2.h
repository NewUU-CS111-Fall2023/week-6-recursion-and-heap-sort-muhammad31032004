#include <iostream> 

using namespace std; 

void pow_of_two(int n) { 
    if(n==1) { 
        cout<<"YES"; return; 
    } else if(n%2==1) { 
        cout<<"NO"; 
        return; 
    } 
    pow_of_two(n/2);
    cout<<"0"<<endl; 
}

int main(){ 
    int a;
    cin>>a; 
    pow_of_two(a); 
} 
//time complexity: O(logn)
