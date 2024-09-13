#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N,K,temp,counter=0,i,j,e;
    char samp;
    int check=0;
    while(cin>>N>>K && N!=0 && K!=0)
    {
     vector<vector<char> >cont(N,vector<char>(K));
    for(i=0;i<N;i++)
    {
    for(j=0;j<K;j++)
    {
    cin>>cont[i][j];
    }
    cout<<"\n";
    }
    vector<int>b(N);
    for(i=0;i<N;i++)
    {
    cin>>b[i];
    }
    cout<<"\n";
    vector<int>c(N);
    c=b;
    for(i=0;i<K;i++)
    {
    for(j=0;j<N;j++)
    {
    samp=cont[j][i];
    for(e=j+1;e<N;e++)
    {
    if(samp==cont[e][i] && samp!='-')
    {
    counter++;
    
    if(b[j]>b[e])
    {
    temp=b[j];
    b[j]=b[e];
    b[e]=temp;
    }
    
   
    }
    
    }
    if(counter>1){
    cout<<"Invalid network\n";
    check++;
    break;}
     else
    counter=0;
    }
    if(check==1)
    break;
    }
   
    sort(c.begin(),c.end());
    
    if(b==c)
    cout<<"Sorted\n";
    if(b!=c && check==0)
    cout<<"Not sorted\n";
}
    
    return 0;
}
