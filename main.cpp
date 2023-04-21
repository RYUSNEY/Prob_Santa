//RUSMAN SNEYDER APAZA PARICAHUA

#include <iostream>

using namespace std;

void MaxAle(int w, int n)
{
    int k, adq = 0, may, a[n], p[n];

    for(int i = 0; i < n ; i++)
    {
        cin>>p[i]>>a[i];
    }

    while(w > adq)
    {
        k = 0;
        may = 0;

        for(int j = 0; j < n ; j++)
        {
            if(a[j] > may)
            {
                may = a[j];
                k = j;
            }
        }

        if(adq + p[k] <= w)
        {
            if(a[k] != 0)
                cout<<p[k]<<" : "<<a[k]<<endl;

            adq += p[k];
        }

        a[k] = 0;
    }
}

int main()
{
    int w, n;

    cin>>w>>n;

    MaxAle(w,n);

    return 0;
}







