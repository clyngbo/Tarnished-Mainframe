#pragma once
#include <string.h>
#include <stdio.h>



System::Collections::ArrayList^ getDrives();

System::String^ makeTestFiles(int, int);

void checkStatus(System::Windows::Forms::CheckBox^);