#include <iostream>

using namespace std ;

int search(int arr[] ,int l, int r, int x ) {
    if(r>=1){
        cout << "hello world" << endl ;
        int middle = l + (r-1)/2 ;
        if(arr[middle] == x )
        {
            cout << "hel11" <<  endl ;
            return middle ;
        }
        else if ( arr[middle] > x )
        return search(arr, l, middle-1, x) ;
        return search(arr, middle + 1, r, x) ;
    }
    return -1 ;
}

int main() {
    int arr[] = { 2,3,4,6,8 };
    int length = sizeof(arr) / sizeof(arr[0]) ;
    cout << length << endl ;
    int result = search( arr, 0, length - 1, 3) ;
    (result == -1 ) ? cout << "search is not present in array" << endl : cout << "search is present in array" << endl ;
    return 0 ;
}