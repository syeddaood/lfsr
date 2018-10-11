#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
 int array[93];
 int arrat[84];
 int arrayC[111];
 int s[80];
 srand((unsigned)time(0)); 
     
    for(int i=0; i<93; i++)
        array[i] = (rand()%2); 
         
 
	for(int i=0; i<84; i++)
		arrat[i]=(rand()%2);
       
       
		for(int i=0; i<111; i++)
		arrayC[i]=(rand()%2);
		
		
		for(int i=0;i<80;i++)
		{
				int a1;
				int resulta;
				a1=array[90]&array[91];
				resulta=(a1^array[92])^array[65];
				
				
				int resultb;
				a1=arrat[81]&arrat[82];
				resultb=(a1^arrat[83])^arrat[68];
				
				int resultc;
				a1=arrayC[108]&arrayC[109];
				resultc=(a1^arrayC[110])^arrayC[65];
				
				s[i]=resulta^resultb^resultc;
				
				
				int a,b,c;
				a=array[68]^resultc;
				b=arrat[77]^resulta;
				c=arrayC[86]^resultb;
				int temp;
			for(int j=0;j<=92;j++)
	        {
	            temp = array[93];
	            array[93] = array[j];
	            array[j] = temp;
	          
	        }
			array[0]=a;	
				
				for(int j=0;j<=83;j++)
	        {
	            temp = arrat[83];
	            arrat[83] = arrat[j];
	            arrat[j] = temp;
	          
	        }
			
			arrat[0]=b;
				for(int j=0;j<=110;j++)
	        {
	            temp = arrayC[111];
	            arrayC[111] = arrayC[j];
	            arrayC[j] = temp;
	          
	        }	
				
				arrayC[0]=c;
			
			
			
		}
		
		for(int i=0;i<80;i++)
			cout<<s[i];
		
		
		
}
