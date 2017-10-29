#include<iostream>
using namespace std;

template <typename T>
T skuare(T x)
{
	return x*x;
}

template <typename T>
class Vector
{
	T arr[1000];
	int size;
public:
	Vector():size(0){}
	void push(T x){ arr[size]=x;size++;}
	T get(int i) const{return arr[i];}
	int getsize()const{return size;}
	void print() const{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
};

template <typename T>
Vector<T> operator * (const Vector<T>& val1,Vector<T>& val2)
{
	Vector<T> returnvec;
	for (int i = 0; i < val1.getsize(); ++i)
	{
		returnvec.push(val1.get(i)*val2.get(i));
	}
	return returnvec;
}


int main()
{
	Vector<int> vec;
	vec.push(11.32);
	vec.push(21.901);
	vec.push(1221.12);
	vec.push(1.21);
	vec.push(29123.123);
	

	cout<<"To the Power of Two : "<<endl;
	Vector<int> vec2;
	vec2=skuare(vec);
	vec2.print();
	return 0;
}