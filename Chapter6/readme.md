# Chapter 6. Functions

## Exercise 6.1

> What is the difference between a parameter and an argument ?

- The a parameter is a local variable definition in the function scope.
- An argument is the variable sendt in during the function call that initializes the parameter.
- I.e. the difference is that the argument is the initializer and the parameter is the variable getting initialized with the argument value.



## Exercise 6.2

> Indicated which of the following functions are in error and why. Suggest how you might correct the problems.

-
**Question (a)**

```cpp
(a)
int f() {
	string s;
	// ...
	return s;
}
```


**Answer (a)

- The return value is not a string, which  it should be.


```cpp
(a)
string f()
{
	string s;
	// ...
	return s;
}
```
-

**Question (b)**

```cpp
(b)
f2(int i) { /* ... */ }
```

**Answer (b)**

- function is missing a return type
- if it doesnt return anything it should have the return type void.

```cpp

void f2(int i)
{
	/* ... */
}
```
-

**Question (c)**

```cpp
int calc(int v1, int v1) /* ... */ }
```

**Answer (c)**

- both parameter are the same
- the function is missing a starting curly brace

```cpp
int calc(int v1, int v2)
{
	/* ... */
}
```
-

**Question (d)**

```cpp
double square(double x) return x * x;
```

**Answer (d)**

- function is missing it's block, that is it has no curly braces to define it's body

```cpp
double square(double x)
{
	return x * x;
}
```
-

## [Exercise 6.3](ex6_3/main.cpp)

> Write and test your own version of *fact*.


## [Exercise 6.4](ex6_4/main.cpp)

> Write a function that interacts with the user, asking for a number and generating the factorial of that number. Call this function from *main*.

## [Exercise 6.5](ex6_5/main.cpp)

> Write a function to return the absolute value of it's argument.


## Exercise 6.6

> Explain the differences between a parameter, a local variable, and a local static variable. Give an example of a function in which each might be useful.

- a parameter is a local variable that is initialized in the function header by arguments
- a local variale is an object that is initialized only if its definition contains an initializer.
- a local static variable is a variable that does keeps it value after the function call is over.


**parameter**

```cpp
double
convertDollarsToCrowns(double dollars, double convRate) //useful parameters
{
	return dollars * convRate;
}
```

**local variable**

```cpp
int 
factorial(int num)
{
	fact = 1;	// useful local variable
	
	while( num > 1)
		fact *= num--;
}
```


**local static variable**

```cpp
int lastValue(int val)
{
	// static local value useful for implementing memory 
	static int last  = 0;
	
	int temp = last;
	last = val;
	
	return temp;
}

```


## [Exercise 6.7](ex6_7/main.cpp)

> Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.


## Exercise 6.8

> Write a header file named *chapter6.h* that contains declarations for the functions you wrote for the exercises §6.1 (p. 205).

```cpp

// headerFile.h

int f();

void f2(int i);

int calc(int v1, int v2);


double square(double x);

int fact(int val);

void factorialInteraction(int val);

int absoluteValue(int value);
```




## [Exercise 6.10](ex6_10/main.cpp)

> Using pointers, write a function to swap the values of two *int*s. Test the function by calling it and printing the swapped values.


## [Exercise 6.11](ex6_11/main.cpp)

> Write and test your own version of *reset* that takes a reference.


## [Exercise 6.12](ex6_12/main.cpp)

> Rewrite the program from [exercise 6.10](ex6_10/main.cpp) in § 6.2.1 (p.. 210) to use references instead of pointers to swap the value of two *int*s. Which version do you think would be easier to use and why?


 - I think it is easier to use the references
 - because au contraire a pointers, you don't have to think about how to use the methods with references
 - you can just send in the values same way as when you are doing copy by value.


## Exercise 6.13

> Assuming *T* is the name of a type, explain the difference between a function declared as *void f(T)* and *void f(T&)*.

- a function declared as *void f(T)* is a function that copies by value. That is there is no link between the argument and the parameter of the function.
- a function declared as *void f(T&)* is a function that makes a reference to the argument. And hence there is a link between the argument and parameter in the sense that the parameter is a reference to the arguments.


## Exercise 6.14

> Give an example of when a parameter should be a reference type. Give an example of when a parameter should not be a reference.

```cpp
void process(string& text);

void process(int value);
```

## Exercise 6.15

> Explain the rationale for the type of each of *find_char*'s parameters. In particular, why is *s* a reference to *const* but *occurs* is a plain reference? Why are these parameters references, byt the *char* parameter *c* is not? What would happen if we made *s* a plain reference? What if we made *occurs* a reference to *const*?


```cpp
string::size_type find_char(const string& s,
								 char c,
								 string::size_type& occurs)
{
	auto ret = s.size();
	occurs = 0;
	
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			
			++occurs;
		}
	}
	
	return ret;
}
```


- *s* is reference to const because string is a class type so it could be quite resource intensive to copy the whole value, and it is const because we don't want to change the value in the string
- *occurs* is a plain reference because we want to change *occurs* in the function
- *char c* is not a reference because it is a built-in type and we would not gain any performance by using a reference
- also someimes using references can be a way of returning more than one value from a function.
- if *s* is made a plain reference nothing would happen differently except that the code would be more unclear.
- the program wouldn't work since we are changing *occurs* inside the function



## Exercise 6.16

> The following function, although legal, is less useful than it might be. Identify and correct the limitation on this function:

```cpp
bool is_empty(string& s) { return s.empty(); }
```

- first of all since it does not change the string is should be a const reference.
- second its a function that might be better of just using s.empty() directly.


## [Exercise 6.17](ex6_17/main.cpp)
## [Exercise 6.17b](ex6_17b/main.cpp)

> Write a function to determine whether a *string* contains any capital letters. Write a function to change a *string* to all lowercase. Do the parameters you used in these functions have the same type? If so, why? If not, why not?

- the parameter in the first case is a const string ref, while in the second it's a plain *string&*.
- They are not the same because in the second version we want to change a string to all lower letters while in the first we are only looking to detect capital letters.




## Exercise 6.18

> Write declarations for each of the following functions. When you write these declarations, use the name of the function to indicate what the function does.


**(a)** A function named *compare* that returns a *bool* and has two parameters that are references to a class named *matrix*.

```cpp
bool compare( const Matrix&, const Matrix&);
```

**(b)** A function named *change_val* that returns a *vector<int>* iterator and takes two parameters: One is an *int* and the other is an iterator for a *vector<int>*.

```cpp
vector<int>::iterator change_val(int v, vector<int>::iterator it);
```

## [Exercise 6.19](ex6_19/main.cpp)

> Given the follwoing declarations, determine which calls are legal and which are illegal. For those that are illegal, explain why.

```cpp
double calc(double);

int count(const string&, char);

int sum(vector<int>::iterator, vector<int>::iterator, int);

vector<int> vec(10);
```
-
**Question (a)** *calc(23.4, 55.1);


**Answer (a)**

- illegal: trying to use function with more parameters than is defined

-
**Question (b)** *count("abcda", 'a');*

**Answer (b)**

- legal

-
**Question (c)** *calc(66);*

**Answer (c)** 

- legal: is impl conv to double.

-

**Question (d)** *sum(vec.begin(), vec.end(), 3.8);*

**Answer (d)**

- legal: with truncated 3.8; (implicitly converted to int)


## Exercise 6.20

> When should reference parameters be references to *const* ?
> What happens if we make a parameter a plain reference when it could be a reference to *const* ?



- a parameter should be a reference to *const*, **unless** it is being changed inside the function.

- what happens if we make a parameter a plain reference when it could be a reference to const is:
	- we make the code unclear, as users will think that the reference is changed inside the function
	- we make the code less usable: as now the function can not be used by *const* arguments. (if parameter had been a ref to *const* the function would have handle both *const* and plain arguments.

 



