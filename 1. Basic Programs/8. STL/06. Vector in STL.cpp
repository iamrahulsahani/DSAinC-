//Most general purpose container is the Vector.
//It supports dynamic array.

//header- <vector>
//syntax- vector <int> v1;

/*

intitialize during declaration :
vector <string> v1{"rahul","sahani"}; //capacity = 2

fixed size vector:
vector <int> v1(5); //capacity = 5

initialize all elements:
vector <char> v1(4,'a'); //initializes 4 element char vector with 'a'

subscript [] works on vector:
v[3]; //index=3;

capacity(): returns capacity of vector.
vector <int> v1 {1,2,3};
cout<<v1.capacity();//3

size(): returns the size of vector. it is different from capacity.
vector <int> v1 {1,2,3};
cout<<v1.size();//3

clear(): it clears vector.
vector <int> v1 {1,2,3};
cout<<v1.clear();

push_back(item): adds element to last.
vector <int> v1 {1,2,3};
v1.push_back(4);
cout<<v1[3];//4

pop_back(): removes last element.
vector <int> v1 {1,2,3};
v1.pop_back();

front(): returns first element.
vector <int> v1 {1,2,3};
v1.front();//1

back(): returns last element.
vector <int> v1 {1,2,3};
v1.back();//3

at(index): returns value at index.
vector <int> v1 {1,2,3};
cout<<v1.at(0);//1

Note : Relational oprators works on vector. ==,!=,<,>.






*/

