
 &nbsp; 
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;



##Exercise 5.1

>*a) What is a null statement?*

> *b) When might you use a null statement?*



##Exercise 5.4


>Explain each of the following examples, and correct any problems you detect.

**Question (a)**

```
(a) while (string::iterator iter != s.end()) { /* . . . */ }
```
**Answer (a):**

- we define an itertor and test it immediately.
- we do not initializing it to a value.
- when testing we are testing an iterator that is undefined against the one past last element in s, so result is undefined.
- a better way of approaching the code would be to define and initialize the string::iterator outside the loop like this.
- then test it against the one place past last element, since iter now contains the first element it is not undefined, and the result is not undefined either.



```cpp
string::iterator iter = s.begin();

while (iter != s.end())
{
	/* . . . */
}

```


**Question (b):**

```cpp
(b) while (bool status = find(word))	{	/* . . . */ }

if (!status)	{ /* . . . */ }
```


**Answer (b):**

- bool variable **status** is defined in the while scope
- it goes out of scope after at the end of the while body
- hence trying to use it in the if ctrl structure is not working
- since it is like using a variable that does not exist anymore
- better to define and initialize it outside the while loop


```cpp
bool status = false;

while (status = find(word))
{
	/* ... */
}

if (!status)
{
	/* ... */
}
```



## [Exercise 5.5](ex5_5/main.cpp)

>  Using an *if-else* statement, write your own version of the program togenerate the letter grade from a numberic grade.


## [Exercise 5.6](ex5_6/main.cpp)

> Rewrite your grading rogram to use the conditional operator (§ 4.7, p. 151) in place of the *if-else* statement.

## Exercise 5.7
>Correct the errors in each of the following code fragments:

-

**(a) Question**

```cpp
(a) if (ival1 !=ival2)
		ival1 = ival2
	 else
	 	ival1 = ival2 = 0;
```



**(a) Answer**
- make expression a statement by adding semicolon.

```ival1 = ival2;```

-

**(b) Question**

```cpp

(b) if (ival < minval)
		minval = ival;
		occurs = 1;
```

**(b) Answers**

- the indentation seems to imply that variable *occurs* is only set equal to 1
- if ival is less than minval. This is incorrect *occurs* executes whether *if* is true or false.
- should look like this

```cpp
if (ival < minval)
{
	minval = ival;
	occurs = 1;
}
```
-
**(c) Question**

```cpp
(c)if (int ival = get_value())
		cout << "ival = " << ival << endl;
		
	if(!ival)
		cout << "ival = 0\n";
```

**(c) Answer**

- ival is defined in the if control structure
- therefore its scope ends before the second if
- the second if tries to used ival which is now out of scope and does not exist.
- a solution would be do define ival outside the if ctrl strucure like this:

```cpp
int ival = 0;

if (ival = get_value())
	cout << "ival = " << ival << endl;

if (!ival)
	cout << "ival = 0\n";
```

-

**(d) Question**

```cpp
(d) if (ival = 0)
		ival = get_value();
```

**(d) Answer**

- since we are assigning *ival = 0*
- the if condition will never be true
- an *if* control structure will test true for any value but *0*

-

## Exercise 5.8
>What is a "dangling *else*"? How are *else* clauses resolved in C++?


- Dangling *else* is the problem of knowing which *if* statement an *else* belongs to
- *C++* solves this by always letting *else* belong to the the closest unmatched *if*
- Note: you can change which *if* an *else* belongs to by using curly braces.


## [Exercise 5.9](ex5_9/main.cpp)

>Write a program using a series of *if* statements to count the number of vowels in the text read from *cin*.



## [Exercise 5.10](ex5_10/main.cpp)
>There is one problem with our vowel-counting program as we've implemented it: It doesn't count capital letters as vowels. Write a program that counts both lower- and uppercase letters as the appropriate vowel--that is, your program should count both *'a'* and *'A'* as a part of *aCnt*, and so forth.



## Exercise 5.11

>Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.
>

## Exercise 5.12

>Modyfy our vowel-counting program so that it counts the number of occurences of the following two-character sequences: *ff*, *fl*, and *fi*.
>

## Exercise 5.13

>Each of the programs highlighted text on page 184 contains a common programming error. Identify and correct each error.















 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;
 &nbsp;







