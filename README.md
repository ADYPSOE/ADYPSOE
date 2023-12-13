#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int>populationMap;
	
	populationMap["Maharshtra"]=130;
	populationMap["Goa"]=1339;
	populationMap["Delhi"]=1187;
	populationMap["Gujarat"]=234;
	
	string s;
	cout<<"Enter name of the State :";
	cin>>s;
	cout<<"State "<<s<<" population is "<<populationMap[s]<<" Millions"<<endl;

}
