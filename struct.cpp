#include<iostream>
using namespace std;
struct part
{
 int modelnumber;
 int partnumber;
 float cost;
};
int main()
{
    part part1;
    part1.modelnumber = 6244;
    part1.partnumber = 123;
    part1.cost = 217.34;
    cout<<"Model "<<part1.modelnumber<<endl;
    cout<<"Part "<<part1.partnumber<<endl;
    cout<<"Cost "<<part1.cost<<endl;
    return 0;
}
