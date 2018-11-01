#include "CPPStackVec.h"
CPPStackVec::CPPStackVec (){}
char CPPStackVec:: pop()
        {
            char c;
            if(data.size()==0){
                cout<<"error ";
                c=' ';
                return c;
                }
            c=data[data.size()-1];
            valarray<char>data2;
            data2.resize(data.size()-1);

            for(int i=0;i<data2.size();i++)
                {
                data2[i]=data[i];
                }
            data.resize(data.size()-1);
            data=data2;
            return c;
        }
void CPPStackVec::push(char v) {
  			valarray<char>data2;
  			data2.resize(data.size()+1);
            for(int i=0;i<data.size();i++)
                {
                data2[i]=data[i];
                }
            data2[data2.size()-1]=v;
            data.resize(data.size()+1);
            data=data2;
		}
void CPPStackVec::clear()
		{
        int size=data.size();
		data.resize(size);
		}
bool CPPStackVec:: IsEmpty()
		{
		if(data.size()==0)
            return true;
        return false;
		}
int CPPStackVec::getsize()
		{
		return data.size();
		}
