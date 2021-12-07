#include<iostream>
using namespace std;
int fib(int u) {
 int m[60], g[60];
 m[1] = 1; m[2] = 1; m[3] = 1; m[4] = 2;
 g[1] = 0; g[2] = 0; g[3] = 0; g[4] = 1;
 for (int i = 5; i <= u; i++) {
 	 g[i] = m[i - 3];
  m[i] = m[i - 1] + g[i ];
 
 }return m[u];
}
int main() {
 int n, m[50] = { 0 };
 cin >> n;
 if (!((n > 0) && (n < 20))) 
 {
 cout << "WRONG!";
 return 0;
 }
 else {
  for (int i = 1; i <= n; i++) {
   cin >> m[i]; 
   if (!((m[i] > 0) && (m[i] < 45))) { cout << "WRONG!" << endl; }
   else
   {
        cout << fib(m[i]);
        if (i <= n - 1) cout << endl;
        }
  }
 }
}