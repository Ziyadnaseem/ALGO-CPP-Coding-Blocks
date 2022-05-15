/*You are given a running data stream of n integers. You read all integers from that running data stream and find effective median of elements read so far in efficient way. All numbers are unique in the datastream. Print only the integer part of the median.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q,n,num;
    cin>>q;
    while(q--)
    {
        cin>>n;
        priority_queue<int,vector<int>,greater<int>>pq_min;
        priority_queue<int>pq_max;
        while(n--)
        {
            cin>>num;
            if(pq_max.size()==pq_min.size())
            {
                if(pq_max.empty() || num<=pq_max.top())
                {
                    pq_max.push(num);
                    cout<<pq_max.top()<<" ";
                }
                else
                {
                    pq_min.push(num);
                    cout<<pq_min.top()<<" ";
                }
            }
            else
            {
                if(num<=pq_max.top())
                {
                    pq_max.push(num);
                }
                else
                {
                    pq_min.push(num);
                }
                if(pq_max.size()>pq_min.size())
                {
                    int temp=pq_max.top();
                    pq_max.pop();
                    pq_min.push(temp);
                }
                else if(pq_max.size()<pq_min.size())
                {
                    int temp=pq_min.top();
                    pq_min.pop();
                    pq_max.push(temp);
                }
                cout<<(pq_min.top()+pq_max.top())/2<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
