#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
typedef map <int,string> mapType;
mapType populationMap;
populationMap.insert(pair<int,string>(1234,"Amit XYZ"));
populationMap.insert(pair<int, string>(2222, "Rahul"));
populationMap.insert(pair<int, string>(3333, "Shweta"));
populationMap.insert(pair<int, string>(4444, "Aditi"));
populationMap.insert(pair<int, string>(9999, "Pooja"));
populationMap.insert(pair<int, string>(7777, "Ketaki"));
mapType::iterator iter;
cout<<"========Population of states in India==========\n";
cout<<"\n Size of populationMap"<<populationMap.size()<<"\n";
for (iter = populationMap.begin(); iter != populationMap.end(); iter++) {
cout << iter->first <<": "<< iter->second<<"\n";
}
int PRN;
cout<<"\n Enter PRN of the student :";
cin>>PRN;
iter = populationMap.find(PRN);
if( iter!= populationMap.end() )
cout<<PRN <<" 's name is " <<iter->second ;
else
cout<<"Key is not populationMap"<<"\n";
populationMap.clear();
}
