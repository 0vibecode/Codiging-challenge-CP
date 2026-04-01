#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_points(vector<int> v, int w){
    int lsum = 0;
    int rsum = 0;
    int maxsum = 0;
    int vsize = v.size(); // length of vector
    //cout<<v[vsize-1]<<endl;
    for (int i = 0; i < w; i++)
    {
        maxsum = maxsum + v[i];
    }
    //cout<<maxsum<<endl;
    lsum = maxsum;
    for (int i = w-1; i >= 0; i--)
    {
        lsum = lsum - v[i];
        //cout<<lsum<<endl;
        rsum = rsum + v[vsize-1];
        //cout<<rsum<<endl;
        vsize = vsize-1;
        maxsum = max(maxsum,lsum+rsum);
    }
    return maxsum;
}
int main() {
    cout << "Maxsum for given points array" << endl;
    vector<int> vec = {6,2,3,4,7,2,1,7,1};
    int win_size = 4;
    int res = max_points(vec,win_size);
    cout<<"The result is "<<res<<endl;
return 0;
}