// The greatest common divisor (GCD) of two or more numbers is the greatest common 
// factor number that divides them, exactly. It is also called the highest common
// factor (HCF). For example, the greatest common factor of 15 and 10 is 5, 
// since both the numbers can be divided by 5. 15/5 = 3.



#include<bits/stdc++.h>

using namespace std;


int main(){

	int a,b;
	cin>>a>>b;

	int gcd=1;

	for(int i=1;i<min(a,b);i++){

		if((a%i==0)&&(b%i==0))
			gcd=i;
	}

	cout<<gcd;


	return 0;
}


// Time Complexity: O(min(a,b))


int gcd(int a,int b){

	if(a==0) return b;

	if(b==0) return a;

	if(a==b) return a;


	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}

// Time Complexity: O(min(a,b))
// Auxiliary Space: O(min(a,b)) because it uses internal stack data 
// structure in recursion.



int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}


// Time Complexity: O(log(min(a,b)))



// Function to find gcd of array of numbers

int findGCD(int arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);

    // if(result == 1)
    // {
    // return 1;
    // }
  }
  return result;
}

//Time Complexity: O(N * log(N)), where N is the largest element of the array