#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main()
{
 string dif1;
string dif0;
dif0="---------- Begin Simulation Statistics ----------";
dif1="---------- End Simulation Statistics   ----------";
int startcount=0;
int startflag=0;
string filename;
string filelocation;

 //read by line and print out
 ifstream infile;

cout<<"please input the location of stats.txt"<<endl;
cin>>filelocation;
std::string fullname = filelocation+"stats.txt";// int to string
 infile.open(fullname);
ofstream outfile;
 if(!infile.is_open())
 {  
  cout<<"Can not open the file"<<endl;
  return 0;
 }
 else
 {
  string line;       //read one line everytime
  while(!infile.eof())
  {
   getline(infile,line);
  if(line==dif0)
  {
        startflag=1;
	startcount+=1;
       std::string filename = filelocation+"/"+std::to_string(startcount) + ".txt";// int to string
	
	//create new file

 	
 	outfile.open(filename);
 	if(!outfile.is_open())
	 {
	  cout<<"Can not open the file."<<endl;
	  return 0;
	 }
//write new file



	   cout<<filename<<endl;
   }
	if(line==dif1)
	{
	startflag=0;
	}
	
	//  outfile.clear();
	  outfile<<line<<endl;
	if(startflag==0)
	{
	 outfile.close(); //end of the new file
	}	
	   
   }
 }
	 infile.close();
	

 return 0;
 
 
}

