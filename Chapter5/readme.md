
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



## [Exercise 5.11](ex5_11/main.cpp)

>Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.
>

## [Exercise 5.12](ex5_12/main.cpp)

>Modyfy our vowel-counting program so that it counts the number of occurences of the following two-character sequences: *ff*, *fl*, and *fi*.


## Exercise 5.13

>Each of the programs highlighted text on page 184 contains a common programming error. Identify and correct each error.

-
**Question (a)**

```cpp
(a): 

unsigned aCnt 	= 0;
unsigned eCnt 	= 0;
unsinged iouCnt = 0;

char ch = next_text();

switch (ch)
{
	case 'a': aCnt++;
	case 'e': eCnt++;
	default : iouCnt++;
}
```
- there is no break after the post-increment statements
- that means that if *case 'a':* gets a match, both *aCnt*, *eCnt*, and *iouCnt* will be incremented.
- also while not directly a fault it is less resource demanding and clearer code to pre-increment, so do that  unless there is a specific reason to post-increment.
- fix it is easy we just add break; statements like so:

-
**Answer (a)**

```cpp
(a): 

unsigned aCnt 	= 0;
unsigned eCnt 	= 0;
unsinged iouCnt = 0;

char ch = next_text();

switch (ch)
{
	case 'a':
	 ++aCnt;
	 break;
	case 'e':
	 ++eCnt;
	 break;
	default : 
	 ++iouCnt;
	 break
}
```
-
**Question (b)**

```cpp

unsigned index = some_value();

switch (index)
{
	case 1:
		int ix = get_value();
		ivec[ix] = index;
		break;
	default:
		ix = ivec.size()-1;
		ivec[ix] = index;
```
-

**Answer (b)**

- define initializing a value in a case is not legal so *int ix = get_value();*  breaks the rules
- one way to solve this issue is to define and initialize *ix* outside the switch ctrl structure


```cpp
 
unsigned index = 1;

// define and initialize ix outside case
// 
int ix = 2;

   switch (index)
   {
      case 1:
      	  ix = get_value()
         ivec[ix] = index;
         break;
      default:
         ix = ivec.size()-1;
         ivec[ix] = index;
   }

```
-


**Question (d)**

```cpp
unsigned ival = 512;
unsigned jval = 1024;
unsigned kval = 4096;

unsigned bufsize;
unsigned swt = get_bufCnt();

switch (swt)
{
	case ival:
		bufsize = ival * sizeof(int);
		break;
	
	case jval:
		bufsize = jval * sizeof(int);
		break;
	
	case kval:
		bufsize = kval * sizeof(int);
		break;
}
```


**Answer (d)**

- the *case* labes must be **integral expressions** that are also **constants**
- currently the case lables are not *constants* we can fix it by adding const to their definitions:



```cpp

/// adding const fixes the case label checks
const unsigned ival = 512;
const unsigned jval = 1024;
const unsigned kval = 4096;

unsigned bufsize;

// adding const here is better practice
// since we do not change swt
const unsigned swt = get_bufCnt();

switch (swt)
{
	case ival:
		bufsize = ival * sizeof(int);
		break;
	
	case jval:
		bufsize = jval * sizeof(int);
		break;
	
	case kval:
		bufsize = kval * sizeof(int);
		break;
}
```
-

## [Exercise 5.14](ex5_14/main.cpp)

> Write a program to read *string*s from standard input looking for duplicated words.
> 
>  The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a message saying that no word was repeated. For example, if the input is :
> 
> *how now now now brown cow cow*
> 
> the output should indicate that the word *now* occured three times

-

## Exercise 5.15

> Explain each of the following loops. Correct any problems you detect.
> 

-
**Question (a)**

```cpp
(a)
for (int ix = 0; ix != sz; ++ix)		{ /* ... */ }

if (ix != sz)
	// ...
```

**Answer (a)**

- the for loop check that *ix* is unequal to *size*
- the *if* check after the for loop doesnt make any sense
- this because the *if* will never be true since the *for* loop will only end once *ix == size* unless there is a some sort of escape in the body.
- more importantly sinze *ix* was defined in the scope of the for, it will be out of scope once we get to the if and hence we have an error.
- this can be fixed:

```cp

(a)
int ix = 0;
for (; ix != sz; ++ix)		{ /* ... */ }

if (ix != sz)
	// ...
```
-

**Question (b)**

```cpp
(b)
int ix;
for (ix != sz; ++ix)	{ /* ... */ }
```

**Answer (b)**

- *ix* is never initialized so the condition *ix != sz* is undefined
- Fix this by initializing ix;

```cpp
(b)
// initialize ix so condition: ix != sz, is not undefined
int ix = 0;

for (ix != sz; ++ix)	{ /* ... */ }
```
-

**Question (c)**

```cpp
(c)
for (int ix = 0; ix != sz; ++ix, ++ sz)	  { /* ... */ }

```

**Answer (c)**

- there is a space between the preincrement operator *++* and the *sz* variable
- this for loop is infinite as long as *sz ≠ 0*
- the reason is that when *ix* increases by 1, then so does *sz*
- a simple fix can be made by removing *++ sz*


```cpp

(c)
for (int ix = 0; ix != sz; ++ix)	  { /* ... */ }
```
-

## Exercise 5.16

> The *while* loop is particulary good executing while some conditions holds; for example, when we need to read values until end-of-life. The *for* loop is generally thought of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If you could only use one loop, which would you choose? Why?

**Question/Assignment:**

1. Write an idiomatic use of each loop
2. and then rewrite each using the other loop construct.
3. If you could only use one loop, which would you choose?
4. Why?


**Answer:**

- [idiom](https://en.wikipedia.org/wiki/Programming_idiom#Examples_of_simple_idioms)
- what is an idiomatic use of each loop (idiomatic) ?


- Ok now we know what an idiomatic use of a loop is we can write.


*Example of idiomatic use for each loop:*

```cpp

int i = 0;
while( i != 5)
{
	cout << i << endl;
	++i;
}


for(int j = 10; j != 5; --j)
{
	cout << j << endl;
}


// rewriting

int i = 10;
while (i != 5)
{
	cout << i << endl;
	--i;
}


for(int j = 0; j != 5; ++j)
{
	cout << j << endl;
}
```

- If i could only choose one loop I would use the while loop
- It seems more basic and more easily applicable to everything



## [Exercise 5.17](ex5_17/main.cpp)

> Given two *vector*s of *int*s, write a program to determine whether one *vector* is a prefix of the other. For *vector*s of unequal length, compare the number of elements of the smaller *vector*. For esxample, given the *vector*s containing 0,1,1, and 2 and 0,1,1,23,5,8 respectively your program should return true.


## Exercise 5.18
> Explaine each of the following loops. Correct andy problems you detect.

**Question (a)**

```cpp
(a)

do
	int v1, v2;
	cout << "Please enter two number to sum:";
	if (cin >> v1 >> v2)
		cout << "Sum is: " << v1 + v2 << endl;

while (cin);
```

-
**Answer (a)**

- there is no curly braces containing the body of the do while


```cpp
do
{
	int v1 = 0;
	int v2 = 0;
	cout << "Please enter two number to sum:";
	
	if (cin >> v1 >> v2)
		cout << "Sum is: " << v1 + v2 << endl;
		
} while (cin);
```
-

**Question (b)**

```cpp
do {
	// ...
} while (int ival = get_response());
```

**Answer (b)**

- it is not legal to define a variable in the do while header
- this is because it can't really be used anywhere.

```cpp
do
{
	// ...
} while (get_response())
```
-

**Question (c)**

```cpp
do {
	int ival = get_response();
} while (ival);
```
**Answer (c)**

- the ival defined in the do while body is out of scope in the do while header.
- solve by declaring outside the do while structure

```cpp
int ival = 0;

do
{
	ival = get_response();
} while (ival);
```

-


## [Exercise 5.19](ex5_19/main.cpp)

> Write a program that uses a *do while* loop to repetively request two *string*s from the user and report which *string* is less than the other.



## [Exercise 5.20](ex5_20/main.cpp)

>Write a program to read a sequence of *string*s from the standard input until either the same word occurs twice in succession or all the words hav been read. Use a *while* loop to read the text one word at a time. Use the *break* statement to terminate the loop if a word occurs twice in succession. Print the word if it occurs twice in succession, or else print a message saying that no word was repeated.

## [Exercise 5.21](ex5_21/main.cpp)

> Revise the program from the exercise in § 5.5.2 (p. 191) to that it looks only for duplicated words that start with an uppercase letter.


## [Exercise 5.22](ex5_22/main.cpp)

> The last example in this section that jumped back to *begin* could be better writtenusing a loop. Rewrite the code to eliminate the *goto*.






## [Exercise 5.23](ex5_23/main.cpp)

> Write a program that reads two integers from the standard input nad prints the result of dividing the first number by the second.


## [Exercise 5.24](ex5_24/main.cpp)

> Revise your program to throw an exception if the second number is zero. Test your program with a zero input to see what happens on your system if you don't *catch* an exception.


## Exercise 5.25](ex5_25/main.cpp)

> Revise your program from the previous exercise to use a *try* block to *catch* the expection. The *catch* clause should print a message to the user and ask them to supply a new number and repeat the code inside the *try*.
















