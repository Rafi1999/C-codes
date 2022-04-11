#include<iostream>
using namespace std;
class A{
int i;
};
void set(A ob, int x){
    cout<<"Hey";
    ob.i = x;
}
int main()
{
A ob;
set(ob,6);
return 0;
}
