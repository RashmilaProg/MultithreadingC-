/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//ways to create threads

//function pointer

// void fun(int x)
// {
//     while(x>=0)
//     {
//         cout<<x<<endl;
//         x--;
//     }
// }

// int main()
// {
//     std::cout<<"Hello World";
//     thread th1(fun, 10);
//     th1.join();

//     return 0;
// }

//lambda function

// int main()
// {
// 	std::cout<<"Hello World";
// 	thread th1([](int x)
// 	{
// 		while(x>=0)
// 		{
// 			cout<<x<<endl;
// 			x--;
// 		}
// 	}
// 	, 10);
// 	th1.join();

// 	return 0;
// }

//Functor

// class Base
// {
// public:
// 	void operator()(int x)
// 	{
// 		while(x>=0)
// 		{
// 			cout<<x<<endl;
// 			x--;
// 		}
// 	}
// };

// int main()
// {
// 	std::cout<<"Hello World";
// 	thread th1(Base(), 10);
// 	th1.join();

// 	return 0;
// }


//Non static member function

// class Base
// {
// public:
// 	void fun(int x)
// 	{
// 		while(x>=0)
// 		{
// 			cout<<x<<endl;
// 			x--;
// 		}
// 	}
// };

// int main()
// {
// 	std::cout<<"Hello World";
// 	Base b;
// 	thread th1(&Base::fun, &b, 10);
// 	th1.join();

// 	return 0;
// }

//Static member function

class Base
{
public:
	static void fun(int x)
	{
		while(x>=0)
		{
			cout<<x<<endl;
			x--;
		}
	}
};

int main()
{
	std::cout<<"Hello World";
	thread th1(&Base::fun, 10);
	th1.join();

	return 0;
}