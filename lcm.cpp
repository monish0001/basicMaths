// The Least Common Multiple ( LCM ) is also referred to as the Lowest Common 
// Multiple ( LCM ) and Least Common Divisor ( LCD) . For two integers a and b, 
// denoted LCM(a,b), the LCM is the smallest positive integer that is evenly
//  divisible by both a and b. For example, LCM(2,3) = 6 and LCM(6,10) = 30.


// LCM(a,b)=(a*b)/gcd(a,b);  {this case valid only for two intger}


// LCM(a,b,c)=(a*b*c)/gcd(a,b,c);  {in this case above idea not valid}

// The idea here is to extend our relation for more than 2 numbers.
// Let’s say we have an array arr[] that contains n elements whose 
// LCM needed to be calculated.
// Initialize ans = arr[0].
// Iterate over all the elements of the array i.e. from i = 1 to i = n-1 
// At the ith iteration ans = LCM(arr[0], arr[1], …….., arr[i-1]). This can be
//  done easily as LCM(arr[0], arr[1], …., arr[i]) = LCM(ans, arr[i]). 
//  Thus at i’th iteration we just have to do 
//  ans = LCM(ans, arr[i]) = ans x arr[i] / gcd(ans, arr[i]) 



#include<bits/stdc++.h>
using namespace std;

int main(){

	int a,b;
	cin>>a>>b;
	int LCM=lcm(a,b);
	cout<<LCM;
	return 0;
}

//----------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int findlcm(int arr[], int n){
    
    int ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /(gcd(arr[i], ans)));

    return ans;
}



int main(){


	int arr[] = { 2, 7, 3, 9, 4 };
    int n = 5;
    cout<<findlcm(arr, n);
	return 0;
}








// Time Complexity: O(n * log(min(a, b))), where n represents the size of the given array.
// Auxiliary Space: O(n*log(min(a, b))) due to recursive stack space.