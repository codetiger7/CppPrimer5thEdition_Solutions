## [Exercise 7.1](ex7_1/main.cpp)

> Write a version of the transaction-processing program from § 1.6 (p. 24) using the *Sales_data* class you defined for the exercises § 2.6.1 (p. 72).


## [Exercise 7.2](ex7_2/main.cpp)

>Add the *combine* and *isbn* members to the *Sales_data* class you wrote for the exercises in § 2.6.2 (p. 76).

## [Exercise 7.3](ex7_3/main.cpp)

> Revise your transaction-processing program from § 7.1.1 (p. 256) to use these members.


## [Exercise 7.4](ex7_4/main.cpp)

> Write a class named *Person* that represents the name and address ofa person. Use a *string* to hold each of these elements. Subsequent exercises will incrementally add features to this class.


## [Exercise 7.5](ex7_5/main.cpp)

> Provide operations in your *Person* class to return to the name and address. Should these functions be *const*? Explain your choice.


- They should be const
	- the reason is that they are not changing any class variable just reading, this should be signified to the users via const function declaration.




## [Exercise 7.6](ex7_6/main.cpp)

> Define your own version of the *add*, *read*, and *print* functions.
> 


## [Exercise 7.7](ex7_7/main.cpp)

> Rewrite the transaction-processing program you wrote for the exercises in § 7.1.2 (p. 260) to use these new functions.


## [Exercise 7.8]

> Why does *read* define it's *Sales_data* parameter as a plain reference and *print* define it's parameter as a reference to const?

- *read* changes the class variables so the reference cannot be const

- *print* does not change any of the class variables therefore the reference should be const.


## [Exercise 7.9](ex7_9/main.cpp)

> Add operations to read and print *Person* objects to the code you wrote for the exercises in § 7.1.2 (p.260)



## [Exercise 7.10]

> What does the conditions in the following *if* statements do?

```cpp
if (read(read(cin, data1), data2))
```

- It reads in isbn, numbers og books sold and calculates the revenue.
- it does this into data1, and data2 objects.
- since the read into data1 returns the istream, this is then used for reading into the data2 object


## [Exercise 7.11](ex7_11/main.cpp)

> Add constructors to your *Sales_data* class and write a program to use each of the constructors.



## [Exercise 7.12](ex7_12/main.cpp)

> Move the defitition of the *Sales_data* constructor that takes an *istream*, into the body of the *Sales_data* class.

- no go

## [Exercise 7.13](ex7_13/main.cpp)

> Rewrite the probram from page 255 to use the *istream* constructor.


## [Exercise 7.14](ex7_14/main.cpp)

> Write a version of the default constructor that explicitly initializes the members to the values we have provided as in-class initializers.

```cpp
    Sales_data() 
    : unitsSold_(0)
    , revenue_(0)
    {
    }
```


## [Exercise 7.15](ex7_15/main.cpp)

> Add appropriate constructors to your *Person* class.



## [Exercise 7.16]

> What, if any, are the constraints on where and how often an access specifier may appear inside a class definition? What kinds of members should be defined after a *public* specifier? What kinds should be *private*?


- There are no constraints on where and how often an access specifier may appear inside a class definition
- Members after a public specifier should be interface related
- Members that are implementation related should be private



## [Exercise 7.17]

> What, if any, are the differences between using class or struct?

- the only difference is that struct has an implicit public specifier by default. And class has an implicit private specifier
- Also struct is recommended for use if you want all of your members to be public, if not use class.

## [Exercise 7.18]

> What is encapsulation? Why is it useful?

- encapsulation is hiding and making the implementation unavailable. Forcing users to use the interface. 
- It is useful because it limits the users possibility to use the software in unintended ways.


## [Exercise 7.19]

> Indicate which members of your *Person* class you would declare as *public* and which you would declare as *private*. Explain your choice.

```cpp

// the following members would be declared as public
// this because these are interface members useful
// and easy to use correctly

 Person() = default; 
 Person(std::string n, std::string add)
        : name_(n)
        , address_(add)
        {}

Person(std::istream& in);
const std::string& getName() const;
const std::string& getAddress() const;

```


```cpp
// the following members would be declared private
// this because these are implementation members
// not meant to be access directly outside the class

std::string name_;
std::string address_;

```



## [Exercise 7.20]

> When are friends useful? Discuss the pro's and con's using friends.

- friends are useful when you need to access private members of a class from functions or classes outside the clas that owns them
- a simple way of letting encapsulation work with related functions

- a con is that is does spread the area of where the corruption of a class state can come from to include the friend members.


## [Exercise 7.21](ex7_21/main.cpp)

> Update your *Sales_data* class to hide its implementation. The program's you've writeen to use *Sales_data* operations should still continue to work. Recompile those programs with your new class definition to verify that they still work.


## [Exercise 7.22](ex7_22/main.cpp)

> Update your *Person* class to hide its implementation.


## [Exercise 7.25]

> Can *screen* safely rely on the default versions of copy and assignment? If so, why? If not, why not?

- Screen can rely on the copy and assignment that was synthesized.
- Because It does not allocate memory outside the class

## [Exercise 7.26](ex7_26/main.cpp)


## [Exercise 7.28]


## [Exercise 7.34]

> What would happen if we put the typedef of *pos* in the *Screen* class on page 285 as the last line in the class?

- We would get an unknown type error since we are trying to use a type that has not been defined.

```cpp
void setHeight(pos);
pos height = 0;
typedef std::string::size_type pos;
```
- Trying to use *pos* before it is defined or declared.


## [Exercise 7.35]

> Explain the foloowing code, indicating which definition of *Type* or *initialVal* is used for each use of those names. Say how you would fix any errors.


```cpp

typedef string Type; // string

Type initVal(); // string 

class Exercise
{
public:
   typedef double Type; // double
   Type setVal(Type);	// double, double
   Type initVal(); // double, in-class member function
private:
   int val;
};

Type Exercise::setVal(Type parm)   // string, double
{
   val = parm + initVal();		// initVal() member func.
   return val;
}
```


```cpp
// fix
Exercise::Type 
Exercise::setVal(Type parm);
```


## [Exercise 7.36]

> The following initializer is in error. Identify and fix the problem.


```cpp
struct X
{
	X (int i, int j)
	: base(i)
	, rem(base % j)
	{}
	
	int rem;
	int base;
};
```


- Fix

```cpp
// change order of initialization list
// change arguments used for initialization

	X(int i, int j)
	: rem(i % j)
	, base(i)
	{}
	
	int rem;
	int base;
```


## [Exercise 7.37]

> Using the version of *Sales_data* from this section,
> determine which constructor is used to initialize each of the following variables and list the values of the data members in each object:

```cpp

Sales_data first_item(cin); 
// the constructor taking the istream argument
// data member values are whatever the stream holds

Sales_data next;
// constructor with the default string
// bookNo empty, unsigned and double default initialized undefined

Sales_data last("9-999-99999-9");
// constructor with the default string parameter
// booknum as in argument, unsigned and double default
/// initialized undefined



```

## [Exercise 7.38](ex7_38/main.cpp)

> We might want to supply *cin* as a default argument to the constructor that takes an *istream&*. Write the constructor declaration that uses *cin* as a default argument.


## [Exercise 7.39]

> Would it be legal for both the constructor that takes a *string* and the one that takes an *istream&* to have default arguments? If not, why not?


- It would not be legal because when making an new Sales_data object the compiler needs to know which constructor to use. It cannot do that if we have two default constructors.


## [Exercise 7.40]

> Choose one of the following abstractions (or an abstraction of your own choosing). Determine what data are needed in the class. Provide an appropriate set of constructors. Explain your decisions.


f) Tree

- data
	- name
	- height
	- circumference

- constructors

Tree(std::string n = "");
Tree(std::string n, double ht, double cm);
Tree(std::istream&);


## [Exercise 7.43](ex7_43/main.cpp)


## [Exercise 7.44]

> Is the follwoing declaration legal? If not, why not?

```cpp
vector<NoDefault> vec(10);
```

- it is not legal because Nodefault has no default constructor
- 
## [Exercise 7.45]

> What if we defined the *vector* in the previous exercise to hold objects of type C?

- then is is legal because C has a default constructor



## [Exercise 7.46]

> Which, if any, of the following statements are untrue? Why?


> a) A class must provide at least one constructor
- false (if you don't provide one a default constructor is synthesized)


> b) A default constructor is a constructor with an empty parameter list.

- false, default constructor is the one used if nor arguments are supplied to the object creation.

> c) If there are no meaningful default values for a class, the class should not provide a default constructor.


> d) If a class does not define a default constructor, the compiler generates one that initializes each data member to the default value of its associated type.

- untrue






