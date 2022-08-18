# SIMPLE
A simple programming language.

## Operators
- == - equality
- != - inequality
- <  - less than
- <= - lessequal
- >  - Greater than
- >= - Greater than
- -  - Subtract
- +  - Add
- *  - Multiply
- /  - Divide

## Special functions
- puts(value, stream) -> int - put value into stream return bytes written
- gets(count, stream) -> int - get count bytes from stream return bytes read
- open(path) -> stream       - open stream from <path> return <stream>
- close(stream) -> bool      - tries to close the stream and return true if it succeded
- len(val) -> int            - reads lenght of value
- type(val) -> type          - return type of val

## Statements
- fn <name>? (<arg>...?)                   - function definition
- if <expr> { <expr> } else { <expr> }     - if/else statement
- let <name> = <value>                     - immutable variable declaration

## Data types
- char 
- int
- long
- float
- double
- bool
- list
- vector
- hashMap
- function
