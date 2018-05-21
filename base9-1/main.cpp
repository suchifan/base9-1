//
//  main.cpp
//  base9-1
//
//  Created by suchao on 5/21/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int *p1, int *p2){
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void mySort(int a[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(a[j] < a[j+1])
                //swap(&a[j], &a[j+1]);
                swap(a+j, a+j+1);
        }
    }
    
    for(int k=0; k<n; k++){
        cout << a[k];
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10] = {0, 2, 1, 3, 6, 9, 7, 8, 5, 4};
    mySort(a, 10);
    return 0;
}
