#include <iostream>
using namespace std;
int main()
{
    // Q:- number is prime or not

    // int n;
    // cout << "Enter the Number ";
    // cin >> n;
    // bool isPrime = true;
    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == false)
    // {
    //     cout << "Number is not Prime" << endl;
    // }
    // else
    // {
    //     cout << "Number is Prime" << endl;
    // }

    // Q:- star pattern
    // number patter
    // int n;
    // cout << "Enter the Number ";
    // cin >> n;
    // int num=1;
    // for (int i = 0; i < n; i++)
    // {
    //    for(int j=0; j<n;j++){
    //     cout << num<<" ";
    //     num++;
    //    }
    //    cout << endl;
    // }

    // Char pattern
    //  int n;
    //  cout << "Enter the Number ";
    //  cin >> n;
    //  char ch='A';
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<n;j++){
    //          cout<<ch<<" ";
    //          ch++;
    //      }
    //      cout<<endl;
    //  }

    // half star trangle:-
    //  int n;
    //  cout<<"enter a number ";
    //  cin>>n;
    //  for(int i=0;i<n;i++){
    //      //this loop for star pattern
    //      // for(int j=0;j<i+1;j++){
    //      //     cout<<"* ";
    //      // }
    //      // cout<<endl;

    //     for(int j=0;j<i+1; j++){
    //         cout<<(i+1)<<" ";

    //     }
    //     cout<<endl;

    // }

    // half char repeat pattern
    //  int n;
    //  cout<<"enter a number ";
    //  cin>>n;
    //  char ch='A';
    //  for(int i=1; i<=n;i++){
    //      for(int j=1;j<=i;j++){
    //          cout<<ch<<" ";
    //      }
    //      ch++;
    //      cout<<endl;
    //  }

    // half trangle num pattern
    //    int n;
    //    cout<<"Enter a number:-";
    //    cin>>n;

    //   for(int i=0;i<n;i++){
    //      for(int j=1;j<=i+1;j++){
    //         cout<<j<<" ";
    //      }

    //      cout<<endl;
    //   }

    //    A
    //    B A
    //    C B A
    //    D C D A
    //     int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;

    // for (int i = 0; i < n; ++i) {
    //     // Print characters in reverse order for each row
    //     for (int j = i; j >= 0; --j) {
    //         cout << char('A' + j) << " ";
    //     }
    //     cout << endl;
    // }

    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // top
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}