#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
vector<string> vec;  
vec.push_back("HELLO ");  
vec.push_back("CPP !!");  
for(vector<string>::iterator i=vec.begin();i!=vec.end();i++)  
cout<<*i;  
return 0;   
}