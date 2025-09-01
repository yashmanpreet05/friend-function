#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void getdata();
    friend sum();
};
void getdata()
{
    cin<<"A="<<a;
    cin<<"B="<<b;
    a=a+b;
}
friend sum()
{
    cout<<"sum a+b="<<a;
}
int main()
{
    demo aa;
    aa.getdata;
    friend sum(aa);
    return 0;
}