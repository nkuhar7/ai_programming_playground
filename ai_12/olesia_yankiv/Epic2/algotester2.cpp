#include <vector>
#include <iostream>

using namespace std;

int main ()
{
    int N;
    cout<<"Enter the number of numbers in array: "<<endl;
    cin>>N;
    vector <int> r(N);

    cout<<"Enter the values for numbers in array: "<<endl;
    for (int a=0; a<N; a++)
    {
        cin>>r[a];
    }

    double b,c,d;
    cout<<"Choose numbers to remove from array: "<<endl;
    cin>>b>>c>>d;

    for (int a=0; a<N; a++)
    if (r[a] == b || r[a] == c || r[a] == d)
    {
        {
            r.erase(r.begin() + a);
            a--;
           
        }
    }

    cout<<"The lefovers in array: "<<endl;
    int K = r.size();
    vector <int> arrayNew (K);
    for (int a=0; a<K; a++)
    {
        cout<<arrayNew[a]<<" ";
    }

    return 0;
}