# String

## String Constructors

```cpp
string str1;
string str2("initial string"); // initial string
string str3(6, '*'); // ******
string str4("first string", 6, 6); // string
string str5(str2.begin(), str2.begin() + 5);
```

## String Functions

### Input Functions

```cpp
getline(cin, str); // get string value from input stream
push_back('c'); // input character at the end of string
```

### Capacity Functions

```cpp
pop_back(); // delete last character from string(c++11)
capacity(); // return the capacity allocated to string
resize(2); // change size of string, inc or dec
length(); // find the length of string
shrink_to_fit(); // dec the capacity of string to minimum capacity
```

### Iterator Functions

```cpp
begin(); // iterator to the start of string
end(); // iterator to the end of string
rbegin(); // reverse iterator to the end of string
eebd(); //  reverse iterator to the start of string
```

### Conversion Function

```cpp
stoi(); // convert string to int(c++11)
atoi(); // convert string to int
stod(); // convert string to double
to_string(12); // convert int to string
```

### Other Functions

```cpp
copy("string", 2, 1); // target array, length, starting position
swap("str1","str2"); // swap one string with other
size(); // return length of string
clear(); // empty the string
[0]; // get character at position of string
at(0); // get character at position of string
back(); // last character of string
front(); // first character of string
+ // append to the string
append("str"); // append to the string
assign("str") // assign content to string
insert(0,"value"); // insert at position of string
erase(4,1); // position, number of characters to erase
find("st",0); // string to find, startin position
rfind("st") // find the position of last occurence of string/character
substr(0,3); // starting position(inclusive), ending position(exclusive)
compare(str,str1) // compare two strings
npos // maximum value of size_t
```
