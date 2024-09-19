#include <iostream>
#include <fstream>
using namespace std;
class customer
{
	public:
	string Name;
    string Model;
    string reason;
    string Address,Pnum;
    char data;
    int days,rentalfee;
};

class rent : public customer 
{
	public:
	
	
	void data()
	{
	cout<<"\n\t\t\t\t KINDLY ENTER YOUR DETAILS"<<endl;
	cout<<"\t\t\t-------------------------------------------"<<endl;
	cout <<"\n\t\t\tPlease Enter Your Name: ";
    getline(cin,Name);
    cout<<"\t\t\tEnter your Phone Number:";
    getline(cin,Pnum);
    cout<<"\t\t\tEnter your Address:";
    getline(cin,Address);
    do
    {
        cout <<"\nPlease Select a Car"<<endl;
        cout<<"Enter 'A' for Thar .\t Rent=2500"<<endl;
        cout<<"Enter 'B' for S-Series.\t Rent=3000"<<endl;
        cout<<"Enter 'C' for Nano.\t Rent=1200"<<endl;
        cout<<endl;
        cout<<"Choose a Car from the above options: ";
        cin >>Model;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(Model=="A")
 {
 cout<<"You have choosed thar \n"<<endl;
 cout<<"Colour=Black\n";
 cout<<"Company=Mahindera\n";
 cout<<"Model=Thar\n";
 cout<<"Max_speed=200 km/h\n";
 rentalfee=2500;
 

  }
  if(Model=="B")
  {
		cout<<"You have choosed S-Series"<<endl;
cout<<"You have choosed S-Series\n"<<endl;
 cout<<"Colour=White\n";
 cout<<"Company=Mercedes\n";
 cout<<"Model=S-Series\n";
 cout<<"Max_speed=300 km/h\n";
 rentalfee=3000;        
     }
 
 if(Model=="C")
 {
	     cout<<"You have choosed Nano"<<endl;
cout<<"You have choosed Nano\n"<<endl;
 cout<<"Colour=Red\n";
 cout<<"Company=Maruti suzuki\n";
 cout<<"Model=Nano\n";
 cout<<"Max_speed=100 km/h\n";
    rentalfee=1200;
	}
 
if(Model !="A" && Model !="B" &&  Model !="C" )
     
      cout<<"Invaild Car Model. Please try again!"<<endl;
    }while(Model !="A" && Model !="B" &&  Model !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl; 
   cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		cout<<"Calculating rent. Please wait......"<<endl;
		if(Model == "A"||Model=="a")
        rentalfee=days*rentalfee;
        if(Model == "B" ||Model=="b")
        rentalfee=days*rentalfee;
        if(Model == "C" ||Model=="c")
        rentalfee=days*rentalfee;
    }
void showrent()
    {
    cout << "\n\t\t\t\t***Rental Bill**"<<endl;
    cout << "\t\t-----------------------------------------------|"<<endl;
    cout<<"\t\t-------------Customer Details--------------------|"<<endl;
    cout << "\t\t|	| Customer Name:"<<"------------------------|"<<Name<<endl;
   cout << "\t\t|	| Customer Ph Number :"<<"------------------|"<<Pnum<<endl;
    cout << "\t\t|	| Customer Address :"<<"--------------------|"<<Address<<endl;
    cout<<"\n\t\t---------------Car  Details----------------"<<endl;
    cout << "\t\t|	| Car Model :"<<"---------------------------|"<<Model<<endl;
   cout << "\t\t|	| Number of days :"<<"----------------------|"<<days<<endl;
    cout << "\t\t|	 ________"<<endl;
    cout <<"\n";
    cout << "\t\t|	| Total Rental Amount is :"<<"--------------|"<<"Rs."<<rentalfee<<endl;
    cout << "\t\t|	 ________"<<endl;
    cout << "\t\t|	 # This is a computer generated bill and it does not"<<endl;
    cout << "\t\t|	 require an Authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t|----------------------------------------------"<<endl;
    cout << "\t\t|	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t|	Otherwise penalty fee will be applied"<<endl;
    cout << "\t\t|----------------------------------------------"<<endl;
    int f;
    system("PAUSE");
    
	}
};
class welcome 
{
	public:
	int Start()
	{
  char str[1000];
  cout<<"\t\t\t||\t\t Welcome to MEGHA Rentals                   ||"<<endl;
  cout<<"\t\t\t||\t Visit Us Today And Get your Choice           ||"<<endl;
  cout<<"\t\t\t|| Hamare Yahan Sasti Aur Acchi gadiyan Milti hai ||"<<endl;
  cout << endl;
		cout << "\t\t**************************" << endl;
		cout << "\t\t||                                                                       ||" << endl;
		cout << "\t\t||  --------------------------------------------         _____   ||" << endl;
		cout << "\t\t||  |                                          |    _//][___||   ||" << endl;
		cout << "\t\t||  | 		   THE MEGHA RENTAL's               |   |_o _ |  -| _|   ||" << endl;
		cout << "\t\t||  |                                          |    ()-----------()'   ||" << endl;
		cout << "\t\t||  --------------------------------------------                         ||" << endl;
		cout << "\t\t||                                                                       ||" << endl;
		cout << "\t\t**************************" << endl;
		cout << endl;
}

};
int main()
{
welcome obj1; 
obj1.Start(); 
rent obj2; 
obj2.data();
obj2.calculate();
obj2.showrent();
return 0; 
}