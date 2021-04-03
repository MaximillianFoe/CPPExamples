#include<iostream>
using namespace std;
 
int main()
{
   int m, n, M1[10][10], M2[10][10], sum[10][10];
 	
   cout << "Matris Satir Sayisi: ";
   cin >> m;
   cout << "Matris Sutun Sayisi: ";
   cin >> n;
   cout << "Matris_1 Degerlerini Giriniz: " << endl;
 
   for (int i = 0 ; i < m ; i++)
   for (int j = 0 ; j < n ; j++)
   cin >> M1[i][j];
 
   cout << "Matris_2 Degerlerini Giriniz: " << endl;
 
   for (int i = 0 ; i < m ;i++)
   for (int j = 0 ; j < n ; j++)
   cin >> M2[i][j];
 
   for (int i = 0 ; i < m ; i++)
   for (int j = 0 ; j < n ; j++)
   sum[i][j] = M1[i][j] + M2[i][j];
 
   cout << "Matrislerin Toplami: "<<endl;
 
   for (int i = 0 ; i < m ; i++)
   {
   for (int j = 0 ; j < n ; j++)
   cout << sum[i][j] << "\t";
   cout << endl;
   }
   return 0;
}
