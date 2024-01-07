#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cout<<"\t\tWelcome to Rohan's Cafe";
	cout<<"\n\t\t.....................";
	cout<<"\nOrder Your Food through Menu:";
	cout<<"\n\n\t1.Coke =220RS\n\t2.Tea =340Rs\n\t3.Coffe =430Rs\n\t4.Biryani Half plate =360Rs\n\t5.chicken karahi 1Kg =560Rs";
	cout<<"\n\nWhat do you want? Choose one(1-5)=";
	cin>>n;
	switch (n)
	{
		case 1:
			cout<<"\n\nHow Many?= ";
			cin>>a;
			b=220;
			c=a*b;
			cout<<"\nYou enter "<<a<<" Coke and you Bill i s= "<<c<<"Rs";
			break;
		case 2:
			cout<<"\n\nHow Many?= ";
			cin>>a;
			b=340;
			c=a*b;
			cout<<"\nYou enter "<<a<<" cup of Tea and you Bill is = "<<c<<"Rs";
			break;
		case 3:
			cout<<"\n\nHow Many?= ";
			cin>>a;
			b=430;
			c=a*b;
			cout<<"\nYou enter "<<a<<" cup of coffe and you Bill is = "<<c<<"Rs";
			break;
		case 4:
			cout<<"\n\nHow Many?= ";
			cin>>a;
			b=360;
			c=a*b;
			cout<<"\nYou enter "<<a<<" half plates of Biryani and you Bill is = "<<c<<"Rs";
			break;
		case 5:
			cout<<"\n\nHow Many?= ";
			cin>>a;
			b=560;
			c=a*b;
			cout<<"\nYou enter "<<a<<" Kg Chiken Karahi and you Bill is = "<<c<<"Rs";
			break;
			default:
			cout<<"You Enter Wrong Number \n Please try again";
	}
		cout<<"\n\n\t\tThanks for Visiting";
}
