ALL PROBLEMS GIVEN BY SLIDES
1.  Do-While Loop 

INTEGER x, y
SET x := 4, y := 8
DO
    PRINT x
    x := x + y + 1
WHILE x < 15 LOOP
END DO WHILE
Ans -; 4,13

2. Division and Bitwise Shift

INTEGER a, b, c
SET c = 12, b = 4
a := c / b
c = b >> a
PRINT c
Ans -:0

3. Logical/Bitwise Operations

INTEGER p, q, r, s
SET p := 4, q := 2, r := 1
s = (p AND q) OR (r + 1)
PRINT s
Ans-:2

4. Loop and Arithmetic
INTEGER a, b, c, d
SET b := 10, c := 11
a := b - c
FOR EACH c FROM 2 TO a LOOP
    b := b + c + 10
    b := b / 2
NEXT C
PRINT c
c := a + b + c
PRINT a, b, c
Ans-: -1, 9,19



5. Conditional If-Else Logic
INTEGER p, q, r
SET q := 30, p := 10, r := 20
IF (r > (r + p))
    q := 1
ELSE
    p := p - 2
    r := r - 2
END IF

IF (r > (q + p) || 1) THEN
    q := (0 ^ 5)
ELSE
    p := p + 2
    r := p + 2
END IF
PRINT p, q, r
Ans-: 8,5,18






