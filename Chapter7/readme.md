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





