#include <iostream>
using namespace std;

class array
{
	private:
		int*a;
		int size;
		int length;
	public:
		array()
		{
			size=10;
			a=new int[10];
			length=0;
		}
		array(int sz)
		{
			size=sz;
			length=0;
			a=new int[size];
		}
		~array()
		{
			delete []a;
		}
		void display();
		void insert(int index,int x);
		int delet(int index);
};

void array::display()
{
	for(int i=0;i<length;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}


void array::insert(int index,int x)
{
	if(index>=0 && index<=length)
	{
		for(int i=length-1;i>=index;i--)
			a[i+1]=a[i];
	 	a[index]=x;
		length++;
	}
}

int array::delet(int index)
{
	int x=0;
	if(index>=0 && index<length)
	{
		x=a[index];
		for(int i=index;i<length-1;i++)
			a[i]=a[i+1];
		length--;
	}
	return x;
}


int main()
{
	array arr(10);
	int num;
	int element;

	cout<<"your array is empty"<<endl;
	cout<<" Insert elements into array "<<endl;
	cout<<"Enter the no of element to enter "<<endl;
	cin>>num;
	cout<<"Enter the elements "<<endl;
	for(int i=0;i<num;i++){
		cin>>element;
		arr.insert(i,element);

	}
	cout<<endl;
	cout<<"The array is "<<endl;
	arr.display();



	while(true){
	cout<<"To insert element enter position and elemnt "<<endl;
	int pos;
	cin>>pos>>element;
	arr.insert(pos,element);
	cout<<endl;
	cout<<"The array is "<<endl;
	arr.display();
	}



/*
	arr.insert(0,5);
	arr.insert(1,6);
	arr.insert(2,9);
	arr.insert(3,9);
	arr.display();

	cout<<arr.delet(0)<<endl;
	arr.display();
*/


	return 0;

}
			
