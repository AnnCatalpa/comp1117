#include <iostream>

int main(void)
{
    using namespace std;
    cout << "Enter a non-negative integer: ";
    int n;
    cin >> n;
    
    int i = 0;        // usually called loop variable or index variable
    int result = 1;   // 0!, which is the proper initial value.
    
    while (i < n)
    {
        result = (i + 1) * result;   // extend i! to (i+1)!
        i = i + 1;
    }
	
    cout << "The factorial of " << n << " is "  << result << endl;
	
    return 0;
}

  
  
