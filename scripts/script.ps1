for ($i=1; $i -le 20; $i++) {
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