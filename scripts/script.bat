@REM Create N files with the name p1.c, p2.c, ..., pN.c

@echo off
for /l %%i in (1,1,26) do (
    echo /*>> "p%%i.c"
    echo     enunciado>> "p%%i.c"
    echo */>> "p%%i.c"
    echo.>> "p%%i.c"
    echo #include ^<stdio.h^>> "p%%i.c"
    echo.>> "p%%i.c"
    echo int main(int argc, char const argv^[]) ^{>> "p%%i.c"
    echo.>> "p%%i.c"
    echo     return 0;>> "p%%i.c"
    echo ^}>> "p%%i.c"
)