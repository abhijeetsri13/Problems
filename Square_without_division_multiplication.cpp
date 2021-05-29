#include<iostream>
using namespace std;
int main()
{
	int i=0;

	std::cin>>i;
	int temp = i;
	int msb=0;
	int sq=0;
	while(temp!=0)
	{
		temp=temp&(temp-1);
		msb++;
	}
	cout<<"MSB is :"<<msb<<endl;
	temp =i;
	for(int i=1;i<msb;i++)
		{
			temp=temp<<1;

		}
	if(i&1){
		temp = temp+i;
		cout<<"\nAdding\n";
	}
	cout<<"\nSquare is "<<temp<<endl;

	return 0;
}