/*
Assignment 7
Write a program to swap different types of values using function overloading so that
changes made in formal parameter should be reflected in actual parameter.
Name-Dev Sarode
Division-12
Roll no-11260
Date-08/04/2025
*/

#include<iostream>
#include<string>
using namespace std;

class swapping{
public:
 	void input( int &w, int &r, float &f, float &g, char &j, char &k, string &o, string &i ){
 		cout<<"Enter integers values to swap : "<<endl;
 		cin>>w;
 		cin>>r;
 		
 		cout<<"Enter floating values to swap : "<<endl;
 		cin>>f;
 		cin>>g;
 		
 		cout<<"Enter character values to swap : "<<endl;
 		cin>>j;
 		cin>>k;
 		
 		cout<<"Enter string values to swap : "<<endl;
 		cin>>o;
 		cin>>i;
 	}
 	
 	void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    	}
    
    	void swap(float &a, float &b) {
        float temp = a;
        a = b;
        b = temp;
    	}
    	
    	void swap(char &a, char &b) {
        char temp = a;
        a = b;
        b = temp;
        }
        
        void swap(string &a, string &b) {
        string temp = a;
        a = b;
        b = temp;
    }	

};

int main(){
	swapping s;
	int x;
	int y;
	float p;
	float q;
	char u;
	char v;
	string g;
	string h;
	
	s.input(x,y,p,q,u,v,g,h);
	
	cout<<"Before swapping integers: x = "<< x <<" & y = "<< y << endl;
	s.swap(x,y);
	cout<<"After swapping integers: x = "<< x <<" & y = "<< y << endl;
	
	
	cout<<"Before swapping floating values : p = "<< p <<" & q = "<< q << endl;
	s.swap(p,q);
	cout<<"After swapping floating values : p = "<< p <<" & q = "<< q << endl;
	
	
	cout<<"Before swapping integers: u = "<< u <<" & v = "<< v << endl;
	s.swap(u,v);
	cout<<"After swapping integers: u = "<< u <<" & v = "<< v << endl;
	
	
	cout<<"Before swapping string values : g = "<< g <<" & h = "<< h << endl;
	s.swap(g,h);
	cout<<"After swapping string values : g = "<< g <<" & h = "<< h << endl;
	
	return 0;
}
