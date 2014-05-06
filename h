// hora.cpp : Defines the entry point for the console application.
//ARTURO ARNEZ LOPEZ

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;
void main()
{
 int h1,h2,m1,m2,s1,s2,hf,mf,sf;

     hf=0;
	 mf=0;
	 sf=0;
 cin>>h1;
 cin>>m1;
 cin>>s1;
 cin>>h2;
 cin>>m2;
 cin>>s2;

 sf=s1+s2;
 if(sf>60);
 { sf=sf-60;
   mf=mf+1;
 }

 mf=mf+m1+m2;
 if(mf>60)
 { mf=mf-60;
 hf=hf+1;
 }
 hf=hf+h1+h2;
 if(hf>=24)
 { 
	 hf=hf-24;

 }
 cout<<hf<<":"<<mf<<":"<<sf;
 getch();
}

