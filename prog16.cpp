// Implement recursion on a sequential code
#include <iostream>
  using namespace std;

  int fib(int n)
  {
    int i, fi, fim1, fim2;

    if (n == 0 || n == 1) return 1;

    i = 2;
    fi = 2;
    fim1 = 1;
    fim2 = 1;

    while (i < n) {
      i++;
      fim2 = fim1;
      fim1 = fi;
      fi = fim1 + fim2;
    }
    return fi;
  }
//Convert the fib function to generate fibonacci series recursively
  int main()
  {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;
    cout << "Fib(" << n << ") = " << fib(n) << "." << endl;
    return 0;
  }
