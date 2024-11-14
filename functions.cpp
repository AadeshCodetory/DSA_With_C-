               //Part:-5 of DSA Learning

#include<iostream>
using namespace std;
//    Q:-sum of the numbers
//      int digitSum(int n){
//         int digitSum=0;
//      while (n>0)
//      {
//         int lastDigit = n%10;
//         n=n/10;
//         digitSum+=lastDigit;
//      }
//      return digitSum;
//      }

// int main(){
    
//      cout<<"sum= "<<digitSum(1234)<<endl;
// }


// WAF to check Number is prime or not;
// #include <iostream>
// using namespace std;

// //Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) return false; // 0 and 1 are not prime
//     for (int i = 2; i * i <= num; ++i) {
//         if (num % i == 0) return false; // divisible by i, not prime
//     }
//     return true;
// }

// // Function to print prime numbers from 2 to N
// void printPrimes(int N) {
//     for (int i = 2; i <= N; ++i) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int N;
//     cout << "Enter the value of N: ";
//     cin >> N;
    
//     cout << "Prime numbers from 2 to " << N << " are: ";
//     printPrimes(N);
    
//     return 0;
// }

                  //Part:-6
//   this is theory part and it's cover
//   Binary Number System Concept


          //Part:- 7     

// int sumOfProduct(int arr[], int size){
//   int sum=0;
//   for(int i=0;i<size;i++){
//     sum=sum+arr[i];
//   }
//   return sum;
// }                   

// int main(){
//   int n;
//   cout<<"enter the number of array element: ";
//   cin>>n;
//   int arr[n];
//   cout<<"enter the element of the Array: ";
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   int sum=sumOfProduct(arr,n);
//   cout<<"sum of array element is "<<sum<<endl;
//     return 0;
// }

// ques: find the smallest value....
// int main(){
//     int smalest =INT8_MAX;
//     int nums[5];
//     for(int i=0; i<5; i++){
//         cin>>nums[i];
//     }
//     for(int i=0; i<5; i++){
//         if(nums[i]<smalest){
//             smalest=nums[i];
//         }
//     }
//     cout<<"The Smallest value is "<< smalest;
// }

// ques: find the Largest value....
// int main(){
//     int largest =INT8_MIN;
//     int nums[5];
//     for(int i=0; i<5; i++){
//         cin>>nums[i];
//     }
//     for(int i=0; i<5; i++){
//         if(nums[i]>largest){
//             largest=nums[i];
//         }
//     }
//     cout<<"The largest value is "<< smalest;
// }