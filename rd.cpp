#include<iostream>
#include <cstdlib>







using namespace std;



	int main () {

	
	int t1, t2;
	
	int K=0;

	


	

	for (t1 = 40; t1>=0; t1--) {


	int r1 =  ((rand() % 9)+1);

	cout<<"r1 is "<<r1<<endl;

	

	if (r1 != 6)  {


	K++;

	cout<<"K is "<<K<<endl;



	}







	
	if (r1 == 6) {

	for (t2 = t1 ; t2>=0; t2--) {


	int r2 = ((rand() % 9)+1);

	cout<<r2<<endl;

	}

		
	
	}

	
	if (r1 == 6) {break;}

	
	}


	}


	

