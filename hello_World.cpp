#include <iostream>
# include <stdio.h>
#include<String>

int main()
{
   std::string str;
   std::cin >> str ; 
   std::cout<<"your entered file is " << str ;
    return 0;
}

// to generate .exe file , that file should be in active mode i.e cursor should in that file
// otherwise ERROR ->  "file format not recognized; treating as linker script" + "syntax error" + 
// ""error: ld returned 1 exit status" + "The terminal process terminated with exit code: 1" 
// 1) Ctrl + Shift + b i.e Terminal -> Run build task   OR 
// 2) Terminal -> Run Task -> compile C++ file -> continue without scanning OR 
// 3) Ctrl + F5 i.e Debug -> start without debugging

//                  then 
// to run the created .exe file after it has been created 1)Ctrl + Alt + F5
//                                                         2)Terminal -> Run Task -> Run C++ file