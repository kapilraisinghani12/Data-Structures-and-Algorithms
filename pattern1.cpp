#include <iostream>
using namespace std;
int main()
{
    // p-1
    // int n;
    // cin>>n;
    // int i=1;
    // while (i<=n)
    // {
    // int j=1;
    //    while (j<=n)
    //    {
    //     cout<<"* ";
    //     j++;

    //    }
    //    cout<<endl;
    //    i++;

    // }
    // p-2-
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    //      int n;
    //     cin>>n;
    //     int i=1;
    //     while (i<=n)
    //     {
    //     int j=1;
    //        while (j<=n)
    //        {
    //         cout<<n-j+1<<" ";
    //         j++;

    //        }
    //        cout<<endl;
    //        i++;

    //     }
    // p-3
    //     4
    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16
    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // p-4
//     4
// * 
// * *
// * * *
// * * * *
//   p-5
// 5
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
//  int n;
//     cin >> n;
//     int i = 1;
//     int count=1;
//     while (i <= n)
//     {
//         int j = 1;

//         while (j <= i)
//         {
//             cout << count << " ";
//            count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// p-6
// 4
// 1 
// 2 3
// 3 4 5
// 4 5 6 7
//  int n;
//     cin >> n;
//     int i = 1;
//     int count=1;
//     while (i <= n)
//     {
//         int j = 1;

//         while (j <= i)
//         {
//             cout << i+j-1<< " ";
            
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// p-7
// 4
// 1
// 2 3
// 3 4 5
// 4 5 6 7 
// int n;
//     cin >> n;
//     int i = 1;
//     int count=1;
//     while (i <= n)
//     {
//         int j = 1;

//         while (j <= i)
//         {
//             cout << i-j+1<< " ";
            
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// p-8
// 5
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E
// int n;
//     cin >> n;
//     int i = 1;
//     int count=1;
//     while (i <= n)
//     {
//         int j = 1;
//         char ch= 'A' + i - 1;

//         while (j <= n)
//         {
//             cout << ch<< " ";
            
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// p-9
int n;
    cin >> n;
    int i = 1;
    
    while (i <= n)
    {
        int j = 1;
        char ch= 'A'  ;
        
        while (j <= n)
        {
            cout << ch<< " ";
            ch = ch +1;
            j++;
        }
        cout << endl;
        i++;
    }

  
}
