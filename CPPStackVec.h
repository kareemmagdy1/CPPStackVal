// Author:  Kareem Magdy
// ID:      20170197
// Program: CPPStackVal
// Date:    31 October 2018

#ifndef CPPSTACKVEC_H
#define CPPSTACKVEC_H
#include <cstdlib>
#include <iostream>
#include <string>
#include <valarray>
using namespace std;
class CPPStackVec
{
   private:
       valarray<char>data;
  public:
	  	CPPStackVec ();
        char pop();
		void push(char v);
		void clear();
		bool IsEmpty();
		int getsize();
};
#endif // CPPSTACKVEC_H
