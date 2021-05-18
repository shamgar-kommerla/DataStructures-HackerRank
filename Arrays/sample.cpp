#include <bits/stdc++.h>

using namespace std;


vector<int> reverseArray(vector<int> a) {
    int sz=a.size();
    vector<int> arr;
    for(int i=0;i<(sz);i++){
       arr.push_back(a[sz-i-1]);
    }
    return arr;
}

int main()
{
 int T;
 cin >> T;
 vector<int> a;
for(int i=0;i<T;i++){
    int temp;
    cin >> temp;
    a.push_back(temp);
}/*
for(int i=0;i<T;i++){
    cout << a[i] << " " ;
}*/

vector<int> res;
res = reverseArray(a);


for(int i=0;i<T;i++){
    cout << res[i] << " " ;
}

return 0;


}
