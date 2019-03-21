#include <iostream>

using namespace std ;


int search(int arr[], int n , int x) {
    for(int i =0 ; i<n ; i++) {
        if(arr[i] == x ) {
            return 0 ;
        }
    }
    return -1 ;
}

int main() {
    int arr[] = {0,1,2,3,4,5,6};
    int length = sizeof(arr) / sizeof(arr[0]) ;
    cout << length << endl ;
    //for( int x : arr ){
    //    if ( x == 5) 
    //    cout << "congrats" << endl;
    // }

    int result = search(arr,length,10) ;
    ( result == -1 ) ? cout << "search is not present in array" << endl : cout << "search is present in array" << endl ;
    return 0 ;
}