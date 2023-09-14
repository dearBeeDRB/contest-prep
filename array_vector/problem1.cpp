#include<iostream>
#include<vector>
using namespace std;
vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector <int> v;
        int start_idx, end_idx;
        
        for(int i=0; i<=n-2; i++){
            long long sum = 0LL + arr[i];
            // cout<<sum<<endl;
            for(int j=i+1; j<=n-1; j++){
                sum += arr[j];
                if(sum == s){
                    start_idx = i+1;
                    end_idx = j+1;
                    v.push_back(start_idx);
                    v.push_back(end_idx);
                    return v;
                }
                else if(sum<s){
                    continue;
                }
                else{
                    break;
                }
            }
            
        }
        v.push_back(-1);
        return v;
    }
int main(){
    int size=5;
    long long sum= 10;
    vector <int> vect = { 3, 2, 5, 1, 6};

    vector <int> ans;

    ans = subarraySum(vect, 5, 10);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}