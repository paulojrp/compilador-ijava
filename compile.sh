lex ijparser.l
yacc -d ljparser.y
gcc -o ljparser y.tab.c lex.yy.c -ll -ly
./ljparser < demo.java
./ljparser < demo2.java
