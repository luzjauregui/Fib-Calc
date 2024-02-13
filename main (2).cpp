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

/*
    // xxx fill in the missing codes 
    arr.resize(n);
    arr[0]=0;
    arr[1]=1;
    
    for (int i=0; i<n; i++)
    {
        arr[i]= arr [ i - 1] + arr [ i - 2];
        return arr[i];
    }
    
    //return 0;
}
*/
template<class T>
T fibRecurNoArray (vector<T>&  arr, int n) {
    // xxx fill in the missing codes 
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
    
    /*
    if (arr[n]!= -1)
        return arr[n]; //arr w/ int return
    if (n<=1)
     
    */
    
}
/*

        //arr.push_back(n);
     
        fibRecurArray(arr, n - 1);
        fibRecurArray(arr, n - 2);
        arr.push_back(arr[n-1] + arr[n - 2]);
    }
    /*}
    else 
    {
 
    }
	return arr[n];
	//return 0;
}
*/
void timeStamp() {
    // xxx replace YOUR_FULL_NAME with your name
    cout<<"Student Name:  Luz Jauregui "<< endl;
   
    time_t tmNow = time(0);
    char *dt = ctime(&tmNow);
    cout<<"Current Date/Time: "<<dt;
}

int main() {
	timeStamp ();
    int temp = 0;
    std::vector<int> arr;
    //arr.push_back (0);
   // arr.push_back (1);
	while (temp >= 0) {
		cout << "Please input an integer (a negative number will end the problem.)" << endl;
    	cin >> temp;
    	std::vector<long double> arr;
	    arr.resize (temp+1,0);	
        cout << "iteration:          : " << fibIt(arr, temp) << endl;
       // std::cout<<fibIt(arr, temp)<<" ";
        cout << "recursion with array: " << fibRecurArray(arr, temp) << endl;
        cout << "recursion w/o  array: " << fibRecurNoArray (arr, temp) << endl;
    } 
    return 0;
}



