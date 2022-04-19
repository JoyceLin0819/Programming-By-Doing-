// Joyce Lin Pointer #3
#include <iostream>
using namespace std;
const int M = 3;
const int N = 3;
void printArr(int *array, int sizeArr){
    for(int i=0;i<sizeArr;i++)
    cout<<*(array+i)<<endl; // print value pointed by *(100 + i)
}
void print2D(int arr[M][N]){
    // print out 2D array
    for (int i = 0; i < M; i++){
      for (int j = 0; j < N; j++){
        cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
void print2DP(int *arr, int r, int c){
    for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
        cout<<*(arr+i+j)<<" "; // print out value pointed by (1+i+j)
      }cout<<endl;
    }
}
int main()
{
    int arr[6]={3,6,2,5,3,1};
    printArr(&arr[0],6);
    /* Result: 3
               6
               2
               5
               3
               1 */
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print2D(arr2);
    /* Result: 123
               456
               789 */
    cout<<endl;
    print2DP(&arr2[0][0],3,3); 
    /* Result: 123
               234
               345 */
    return 0;
}