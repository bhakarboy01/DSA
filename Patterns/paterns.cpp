// Question link: https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
#include <bits/stdc++.h>
using namespace std;

int main(){
// // 1st pattern
//     int n = 5;
//     for (int i=0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout << "*";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 2nd pattern
//     int n = 5;
//     for (int i=1; i<=n; i++){
//         for(int j = 0; j<i; j++){
//             cout << "*";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 3rd pattern
//     int n = 5;
//     for (int i=1; i<=5; i++){
//         for(int j = 1; j<=i; j++){
//             cout << i;
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 4th pattern
//     int n = 5;
//     for (int i=1; i<=5; i++){
//         for(int j = 1; j<=i; j++){
//             cout << j;
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 5th pattern
//     int n = 5;
//     for (int i=n; i>0; i--){
//         for(int j=0; j<i; j++){
//             cout << "*";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // // 6th pattern
//     int n = 5;
//     for (int i=n; i>0; i--){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 7th pattern
//     int n = 5;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(2*i + 1); j++){
//             cout<<"*";
//         }
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 8th pattern
//     int n = 5;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(2*(n-i)-1); j++){
//             cout<<"*";
//         }
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 9th pattern
//     int n = 5;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(2*i + 1); j++){
//             cout<<"*";
//         }
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         cout<< endl;
//     }
//     for (int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(2*(n-i)-1); j++){
//             cout<<"*";
//         }
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 10th pattern
//     int n = 5;
//     for (int i=1; i<=2*n-1; i++){
//         int stars = i;
//         if(i>n) stars = 2*n-i;
//         for(int j=0; j<stars; j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 11th pattern
//     int n = 5;
//     for(int i=1;i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             if ((i+j)%2==0) cout<<"1 ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }
//     cout<< endl<<endl<<endl;

// // 12th pattern
//     int n = 4;
//     for(int i=1;i<=n; i++){
//         int space = 2*(n-i);
//         for(int j = 1; j<=i; j++){
//             cout<<j;
//         }
//         for(int j=0;j<space; j++){
//             cout<<" ";
//         }
//         for(int j=i;j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     cout<< endl<<endl<<endl;

// // 13th pattern
//     int n = 5;
//     int count = 0;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             count += 1;
//             cout<<count<<" ";
//         }
//         cout<<endl;
//     }
//     cout<< endl<<endl<<endl;   
    
// // 14th pattern
//     int n = 5;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             char a = (char)j+64;
//             cout<<a;
//         }
//         cout<<endl;
//     }
//     cout<< endl<<endl<<endl; 

// // 15th pattern
//     int n = 5;
//     for(int i=1; i<=n;i++){
//         int il= n-i+1;
//         for(int j=1; j<=il; j++){
//             char a = (char)j+64;
//             cout<<a;
//         }
//         cout<<endl;
//     }
//     cout<< endl<<endl<<endl; 

// // 16th pattern
//     int n = 5;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             char a = (char)i+64;
//             cout<<a;
//         }
//         cout<<endl;
//     }
//     cout<< endl<<endl<<endl;

// // 17th pattern
//     int n = 4;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         int count =64;
//         for(int j=0; j<(2*i + 1); j++){
//             if(j>(2*i+1)/2){
//                 count--;
//             }
//             else{
//                 count++;
//             }
//             cout<<(char)count;
//         }
//         for(int j=0; j<(n-i-1); j++){
//             cout<<" ";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 18th pattern
//     int n = 5;
//     for (int i=0; i<n; i++){
//         int count = 65+n-i-1;
//         for(int j=0; j<=i; j++){
//             cout<<(char)count<<" ";
//             count ++;
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 19th pattern
//     int n = 5;
//     for (int i=0; i<n; i++){
//         int stars = n-i;
//         int spaces= 2*i;
//         for (int j=0;j<stars;j++){
//             cout<<"*";
//         }
//         for (int j=0;j<spaces;j++){
//             cout<<" ";
//         }
//         for (int j=0;j<stars;j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     for (int i=1; i<=n; i++){
//         int stars = i;
//         int spaces= 2*(n-i);
//         for (int j=0;j<stars;j++){
//             cout<<"*";
//         }
//         for (int j=0;j<spaces;j++){
//             cout<<" ";
//         }
//         for (int j=0;j<stars;j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     cout<< endl<<endl<<endl;

// // 20th pattern
//     int n = 5;
//     int stars = 0;
//     int spaces = 2*(n-stars);
//     for (int i=1; i<=2*n-1; i++){
//         if(i<=n){
//             spaces += -2;
//             stars++;
//             for (int j=0;j<stars;j++){
//                 cout<<"*";
//             }
//             for (int j=0;j<spaces;j++){
//                 cout<<" ";
//             }
//             for (int j=0;j<stars;j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         else{
//             stars--;
//             spaces +=2;
//             for (int j=0;j<stars;j++){
//                 cout<<"*";
//             }
//             for (int j=0;j<spaces;j++){
//                 cout<<" ";
//             }
//             for (int j=0;j<stars;j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
//     cout<< endl<<endl<<endl;

// // 21th pattern
//     int n = 5;
//     for (int i=1; i<=n; i++){
//         if(i==1 ||i==n){
//             for(int j=0; j<n; j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         else{
//             cout<<"*";
//             for(int j=0;j<n-2;j++){
//                 cout<<" ";
//             }
//             cout<<"*"<<endl;
//         }
//     }
//     cout<< endl<<endl<<endl;

// // 22th pattern
//     int n = 5;
//     for(int i=0;i<2*n-1; i++){
//         for(int j=0;j<2*n-1;j++){
//             int top = i;
//             int left = j;
//             int bottom=2*n-2-i;
//             int right = 2*n-2-j;
//             int a =4-min(min(top,bottom),min(right,left));
//             cout<<a<<" ";
//         }
//         cout<<endl;
//     }
//     cout<< endl<<endl<<endl;


}