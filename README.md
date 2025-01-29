# bin2dec

<p>A cli who converts 64-bit signed binary into decimal. By default, it'll treat all binaries as unsigned, if you want to treat as signed, you have to pass the "-s" argument.</p>

# Requirements

- GCC
- Make

# Usage

- After cloning the repo, just type: </br>

```
$ make
```

- Run the executable

```
$ ./bin2dec
            "-s" <binary>
            - Treat the most significant bit as indicative whether
            - number is positive or not.
            Ex: ./bin2dec -s 11010 // -26
            - If you dont pass the "-s" argument.
            Ex: ./bin2dec 11010 // 26
```

This project was inspired by [this repo](https://github.com/florinpop17/app-ideas/blob/master/Projects/1-Beginner/Bin2Dec-App.md)
