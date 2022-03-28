//----------------Differrent ways of creating string----------------------------------------------------------
/*
string s1="hello";
string s2=("hello");
string s1= string("hello");
string s1.assign("hello");
*/
//---------------Concatenation of char array & string is possible-----------------------------------------------------------
/*
char str[]="students";
string s1="hello";
string s2=s1+str;
*/

//------------------Input Functions---------------------------------------------------
/*
getline() : Takes a line as input
e.g. : 
cout<<"Enter your name:\n";
string str;
getline(cin, str);
cout<<str;

push_back(): inserts a single character at the end.
e.g. :
string str="rahul";
str.push_back('s');
cout<<str; //rahuls

pop_back(): deletes the last character.
e.g. :
string str="rahul";
str.pop_back();
cout<<str; //rahu
*/

//-----------------------Methods in String---------------------------------------------------
/*
assign(string) : To assign value of string.
e.g : 
string s1;
s1.assign("rahul");

append(string) : To concatenate strings;
e.g : 
string s1;
s1.append("rahul");

insert(index, string) : To insert a value in a string.
e.g. :
string s1="hello";
s1.insert(2,"123"); //he123llo

replace(starting index, length, string) : To replace the values.
e.g. :
string s1="hello";
s1.replace(1,3,"A"); //hAo

erase() : To clear a string.
e.g. :
string s1="hello";
s1.erase() //

find(string) : To find a substring(if not found , returns -1). always store the return
value to int variable because if you directly print the return value in not found case
the it gives garbage value.
e.g. :
string s1="hello online students";
int i = s1.find("online");
cout<<i;//6

rfind(string) : same as find but it finds from reverse.

compare(string): To comapre two strings. it returns different values for different case.
e.g : 
string s1="Amar";
string s2="Amit";
int i = s1.compare(s2);
cout<<i; //-1

0 = both string is same
-1 = both string is different but 2nd string is oppposite from dictionary order
1 = both string is different but 2nd string is in dictionary order

size(string)/length(): Returns size of string.
e.g :
string s1="rahul";
cout<< s1.size(); //5

swap() : Swaps the values of strings
e.g :
string s1="r",s2="s";
s1.swap(s2);
cout<<s1<<endl;
cout<<s2;

capacity(): Returns the capacity allocated to string.
e.g :
string str="r";
cout<<str.capacity();//15

*/


//--------------------------------------------------------------------------


