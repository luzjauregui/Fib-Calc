#include <iostream>
#include <vector>

using namespace std;


template<class T>
T fibIt(vector<T>& arr, int n)
{
    arr.resize(n);
    if (n >= 0)
        arr[0] = 0;
    if (n >= 1)
        arr[1] = 1;
        
    int i;
    for ( i = 2; i <= n; i++) 
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n]; 
}

template<class T>
T fibRecurNoArray (vector<T>&  arr, int n) {
   
    if (n>1)
    {
        return fibRecurNoArray(arr, n-1) + fibRecurNoArray(arr, n-2);
    }
    else
    {
        return n;
    }
    
	return 0;
}


template<class T>

T fibRecurArray(vector<T>& arr, int n)
{
    
    if( arr[n] != 0)
    {
        return arr[n];
    }
    if (n<=1)
    {
        return n;
    }
    arr[n] = fibRecurArray(arr, n - 1) + fibRecurArray(arr, n-2);
    return arr[n];
    
    
}

void timeStamp() {
    cout<<"Name:  Luz Jauregui "<< endl;
   
    time_t tmNow = time(0);
    char *dt = time(&tmNow);
    cout<<"Current Date/Time: "<<dt;
}

int main() {
	timeStamp ();
    int temp = 0;
    std::vector<int> arr;

	while (temp >= 0) {
		cout << "Please input an integer (a negative number will end the problem.)" << endl;
    	cin >> temp;
    	std::vector<long double> arr;
	    arr.resize (temp+1,0);	
        cout << "iteration:          : " << fibIt(arr, temp) << endl;
       
        cout << "recursion with array: " << fibRecurArray(arr, temp) << endl;
        cout << "recursion w/o  array: " << fibRecurNoArray (arr, temp) << endl;
    } 
    return 0;
}



