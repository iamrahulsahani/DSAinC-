/*
Array declarations :

int a[3];               //garbage values

int a[3] = {1,2,3};     // [1,2,3]
int a[3] = (1,2,3);     // [1,2,3]

int a[3] = {};          // [0,0,0]
int a[3] = {0};         // [0,0,0]
int a[3] = {1};         // [1,0,0]

int a[3] = {[0...1]=3}; // [3,3,0]  { obsolete  }
int a[] = {[0...1]=3};  // [3,3]    { in gcc 2.5}

int *a;
int* a;
int * a;
int*a;

*/