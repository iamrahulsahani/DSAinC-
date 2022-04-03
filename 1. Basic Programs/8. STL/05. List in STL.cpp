// List class supports bidirectional linear list. it does not supprt random access,
//so it can be accessed sequentially only.

//header - <list>

/*

creating list:
e.g. :
list <int> l1{10,20,30,40,50};

accessing list:
e.g. :
list <int> l1{10,20,30,40,50};
list <int>::iterator p=l1.begin();
while(p!=l1.end())
{
    cout<<*p<<endl;
    p++;
}

size(): To check  size of list.
e.g. :
list <int> l1{10,20,30,40,50};
cout<<l1.size()<<endl;//5

push_back(item) : Appends element to last.
e.g. :
l1.push_back(60);

push_front(item) : adds element at first position.
e.g. :
l1.push_front(0);

pop_back() : deletes the last element.
e.g. :
l1.pop_back();

pop_front() : deletes the first element.
e.g. :
l1.pop_front();

sort() : sort the list.
e.g. :
l1.sort();

reverse() : reverse the list.
e.g. :
l1.reverse();

remove(element); To delete a specific element.
e.g. :
l1.remove(50);

clear(); To delete all elements.
e.g. :
l1.clear();



*/