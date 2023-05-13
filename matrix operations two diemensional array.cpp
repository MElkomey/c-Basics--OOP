#include<iostream>
using namespace std;

void display_matrix(int arr[][4],int rows);
int main()
{
	int sum=0;
	int sum_diagonal=0;
	int matrix[6][4];
	for(int row=0;row<6;row++)
	  for(int col=0;col<4;col++)
	  {
	  cout<<"Enter the value of "<<row<<","<<col<<"\n";
	  cin>>matrix[row][col];
      }
      
      for(int row=0;row<6;row++)
	    for(int col=0;col<4;col++)
	    {
	    	sum+=matrix[row][col];
		}
		cout<<"Matrix sum is  "<<sum<<"\n";
		
	for(int row=0;row<6;row++)
	  for(int col=0;col<4;col++)
	  {
	  	if(row==col)
	  	  {
	  	  	sum_diagonal+=matrix[row][col];
		  }
	  }	
	  cout<<"matrix diagonal sum is"<<sum_diagonal<<"\n\n";
	  cout<<"the matrix is:\n";
    	display_matrix(matrix,6);
}

void display_matrix(int arr[][4],int rows)
{
	for(int row=0;row<rows;row++)
	{
	  for(int col=0;col<4;col++)
	  {
	  	cout<<arr[row][col]<<"\t";
	  }
	  cout<<"\n";
    }   
}
