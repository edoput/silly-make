answer
======

This make loadable module provides the answer to life, the universe and everything else for you to use in your Makefile.


```Makefile
all:
        @echo The answer to life, the universe and everything is $(answer ) #  notice the space after
        # $(answer) is the value of the variable answer
        # $(answer ) is the value of the function answer

load answer.so
```

This is an experiment, a joke a learning opportunity.
