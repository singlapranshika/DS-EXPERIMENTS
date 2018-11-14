#include<iostream>
using namespace std;
void quadratic_probe(int table[],int key,int size)
{
    int h0=key%size;
    int h1;
    if(table[h0]==0)
    {
        table[h0]=key;
    }
    else
    {
        for(int i=0;i<size;i++)
        {
        h1=((key%size)+(i*i))%size;
        if(table[h1]==0)
        {
            break;
        }
        }
        table[h1]=key;
    }
}
void display(int table[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<table[i]<<" ";
    }
}
int main()
{
int size;
cin>>size;
int table[size]={0};
int nkey,key;
cin>>nkey;
for(int i=0;i<nkey;i++)
{
cin>>key;
quadratic_probe(table,key,size);
}
display(table,size);
}

