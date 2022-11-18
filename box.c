#include <stdio.h>

int    main(int argc, char** argv) {printf("WARNING: TEXT WRAPPING MAY BREAK THE OUTPUT\n")    ;

int    x = 10; int y = 10; if (argc >= 2) { x = atoi(argv[1]);if(argc>=3){y=atoi(argv[2]);}   ;}
for    (int i=0;i<y;i++) { for (int j=0;j<x;j++) { if (((j==0) || (i==0)||(j==x-1)||(i==y-    1)

)||    ((j==0) && (i==0))) { printf("%c ", '@');}else{printf("%c ",'#');}}printf("\n");       }}