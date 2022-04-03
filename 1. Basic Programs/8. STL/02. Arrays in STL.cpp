//arrays in container is the implementation of static array
// header : #include <array>
// declaration syntax : array <data type, size> object_name;

/*
member functions:

at(index) : used to fetch the value.
array <int, 3> a={1,2,3};
cout<<a.at(0);//1

front() : return first element;
cout<<a.front();//1

back() : returns last element.
cout<<a.back();//3

fill(value) : fills array with certain value.
array <int, 7> a={1,2,3};
a.fill(10);
for(int i=0;i<7;i++)
{
    cout<<a[i]<<endl;
}

array1.swap(array2) : swapping values of array.
array <int, 3> a={1,2,3};
array <int, 3> b={4,5,6};
a.swap(b);
for(int i=0;i<3;i++)
{
    cout<<b[i]<<endl;
}

size() : returns length of array.
array <int, 3> a={1,2,3};
cout<<a.size();

begin() : returns the iterator pointing to first element of array.
end() : returns the iterator pointing to element next to the last element of array.


*/