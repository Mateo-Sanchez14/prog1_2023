# Create N files with the name p01.c, p02.c, ..., pN.c

$quantity = 20

for ($i=1; $i -le $quantity; $i++) {
    $filename = "p{0:d2}.c" -f $i
    Set-Content $filename -Value @"
/*
    enunciado
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {

    return 0;
}
"@ -Encoding ASCII
}