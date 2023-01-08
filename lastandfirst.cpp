#include<iostream>
#include<math.h>
using namespace std;

int firstOccrence (int arr[], int n, int key) {
   
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while( s <= e ) {
      
      if (arr[mid] == key){
         ans = mid;
         e = mid -1;
      }

      else if (arr[mid] > key) {
        e = mid - 1;
      }

      else {
        s = mid +1;
      }
      mid = s + (e-s)/2;

     }

      return ans;

}

int lastOccrence (int arr[], int n, int key) {
   
 int s = 0;
 int e = n-1;
 int ans = -1;
 int mid = s + (e-s)/2;

 while( s <= e ) {
      
  if (arr[mid] == key){
   ans = mid;
    s = mid +1;
   }

 else if (arr[mid] > key) {
   e = mid - 1;
   }

 else {
  s = mid +1;
   }
 mid = s + (e-s)/2;
return ans;
 }
}

int main() {

    int arr [5] = {1,3,3,3,2};

    cout << firstOccrence(arr,5,3);
    cout << lastOccrence(arr,5,3);

   return 0; 

}