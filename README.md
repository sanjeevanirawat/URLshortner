# Design-a-URL-shortener

There are basically 3 techniques to generate a URL-shortner.

1.B62(Base 62)

2.MD5 Hash

3.Zoo Keeper

I have designed URL SHORTENER using B62 technique using the integer id stored in the database and convert the integer to a character string that is at most 6 characters long. This problem can basically seen as a base conversion problem where we have a 10 digit input number and we want to convert it into a 6 character long string.
B62 algorithm take decimal numbers basically (integer,long,etc) and gives out Base 62 output which contains the alphabetical letters,small alphabetical letters and also the numbers. More than 1 app servers can be used here and RDBMS database is used here.

We cannot use NO SQL database here because NO SQL gives consistency due to which if an error occurs we cannot use PUT-IF ABSENT and INSERT-IF NOT PRESENT kind of functions here to check if the random no. we are creating is already present in database or not. (These functions can be used in RDBMS) 
