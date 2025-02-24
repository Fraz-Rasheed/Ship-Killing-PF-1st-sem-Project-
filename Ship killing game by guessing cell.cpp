#include<iostream>
using namespace std;

void show(){
		cout<<"   \t\t\t\t   Ship Killing Game\t\t\t\t\tPress 0 to exit the game...\n\n\n\n";

}

int main()
{

int a[4][7]={{0,0,0,0,1,0,1},
              {1,0,1,1,0,0,0},
              {1,1,0,0,1,1,0},
              {0,0,1,0,1,0,0}};
        
		int  chance=10;
int hit=0;

int row,column;
int total=11;
show();
while(chance !=0&& hit!=total)
{

	cout<<"  -----------\n";
for(int i=0;i<4;i++){
	cout<<"  | ";
	for(int j=0;j<7;j++)
	{

if(a[i][j]==2)
{
	cout<<"0";
}else{
	cout<<"-";
}
	}
	cout<<" |\n";
}
cout<<"  -----------\n";

cout<<"Remaining Lifes : "<<chance<<"\nRemaining Ships : "<<total-hit<<"\n";
cout<<"\nEnter the row number between 1-4 :";
cin>>row;

if(row==0){
	break;
}

if(row>4||row<1)
{
	system("CLS");
	show();
	continue;
}

cout<<"Enter the column number between 1-7 :";
cin>>column;

if(column==0){
	break;
}

if(column>7||column<1)
{
	system("CLS");
	show();
	continue;
}

cout<<"\n\n";

if(a[row-1][column-1]==1)
{
		system("CLS");
		show();
	hit++;
	cout<<"You HIT the Ship !!\n";
	cout<<"----------------------\n\n";

	a[row-1][column-1]={2};
}
else
{
if(a[row-1][column-1]==2)
{
		system("CLS");
		show();
	cout<<"You have already tried this area...\n\n";
}else{
	
	system("CLS");
	show();
	a[row-1][column-1]=2;
	chance --;
	cout<<"You missed the ship.....\n";
	cout<<"------------------------\n\n";
}
}



}
if(hit==11)
{

cout<<"\n===== Y O U   W O N =====\n\nReamining lifes :"<<chance<<endl<<endl;
}
else if(hit!=11&&chance==0)
{
	
	cout<<"\n\t\tYou lose....\n\t\tBest of Luck for next time...";
}else{
	
	cout<<"\nExiting the game...";
}
return 0;	
}