#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    unsigned center = 0; int div1 = 0;
    try {
        for (center; center < 5; center++)
        {
            Console::WriteLine("Test Test Test {0} {1}", "Hello World", center);
        }
        double div = center / div1;
        Console::WriteLine(div1);
        }
    catch (Exception^ ex)
    {
        Console::WriteLine("O exceptie " + ex->Message);
    }
    return 0;
}
