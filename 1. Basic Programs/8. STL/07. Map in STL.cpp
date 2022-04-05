// Maps are used to replicate associative arrays.

// Map contains key-value pair in which every key is unique & key can't be changed but 
//value can be changed.

// Map automatically sorts the keys.

//header - <map>

/*

initialize during declaration:
map <int, string> customer{ {100,"rahul"}, {200,"aditya"} };

assigning values:
map <int, string> customer;
customer[100]="rahul";
customer[200]="aditya";

[] brackets : To access data
map <int, string> customer{ {100,"rahul"}, {200,"aditya"} };
cout<<customer[100];//rahul

at() : To access data
map <int, string> customer{ {100,"rahul"}, {200,"aditya"} };
cout<<customer.at(100);//rahul

size(): returns size of map.
cout<<customer.size();

empty(): returns 1 if it is empty else returns 0.
cout<<customer.empty();

clear(): removes all data.
customer.clear();

insert(): To insert a pair in map.
map <int, string> customer;
customer.insert(pair<int, string>(100, "rahul"));

access all elements in map:
map <int, string> customer;
customer[100]="rahul";
customer[200]="aditya";
customer[300]="ankur";
map<int, string>::iterator p=customer.begin();
while(p!=customer.end())
{
    cout<<p->second<<endl;
    p++;
}

*/



