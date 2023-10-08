#include<bits/stdc++.h>
using namespace std;
int rev (int num){
    int s = 0;
    while (num!=0){
        s = (s*10)+(num%10);
        num/=10;
    }
    return s;
}
int check(int n){
    int cnt=0;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            cnt++;
        }
    }
    if (cnt==2) return 1;
    else return 0;
}
int main (){
    //nry_code();
    int n;
    cin>>n;
    int cnt = 0;
    cnt = check(n);
    if (cnt==0) cout << "not prime";
    else{
        int res = rev(n);//71
        cnt += check(res);
        if (cnt==2) cout << "circular prime";
        else cout << "prime but not a circular prime";
    }
    
    return 0;
}