/*************************************************************************
	> File Name: OJ208.cpp
	> Author: dofo-eat
	> Mail:2354787023@qq.com 
	> Created Time: 2019年12月11日 星期三 20时59分10秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int n, m;
    cin >> n;
    int a[105];
    int temp = 0;
    int b[10005] = {0};
    for(int i = 0; i < n; i++) {
        cin >> temp;
        b[temp]++;
    }
    cin >> m;
    for(int i = 100; i >= 0; i--) {
        if(b[i] >=  m) {
            cout << b[i];
            break;
        }     
    }
    return 0;
}
