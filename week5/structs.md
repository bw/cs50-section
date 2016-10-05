**See [CS50 style guide](https://manual.cs50.net/style/#structures) for official syntax recommendations for structs.**

**If you're curious about how typedef works--**

Typedef is just a way to use a different keyword synonymous with a given type. For example, we could do the following:

```
typedef int km_per_hour;

km_per_hour my_speed = 65; // This is the same as int my_speed = 65
```


Declaring a struct in general creates a new type, and when we typedef it, it just gives us another keyword to access it by. In general we do this so that we don't have to use the "struct" word everywhere, but the trailing definition can be anything you want. So you could do this:

```
typedef struct student {

...
} something_irrelevant;
```


And then you can either say

```
struct student my_student; //or
something_irrelevant my_student;
```

And they mean exactly the same thing.

 

