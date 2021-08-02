#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

struct data{
    int n;
};

bool operator <(const data &l,const data &r)
{
    return l.n > r.n;
}

priority_queue <data> pq;

int main()
{
    int n;
    int a;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            if(pq.empty())
            {
                printf("0\n");
            }
            else{
                printf("%d\n",pq.top().n);
                pq.pop();
            }
        }
        else{
            pq.push({a});
        }
    }
    return 0;
}
