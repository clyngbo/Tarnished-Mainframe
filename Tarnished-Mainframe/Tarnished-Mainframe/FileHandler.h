#pragma once
#include <string.h>
#include <stdio.h>



System::Collections::ArrayList^ getDrives();

int makeTestFiles(int, int, int);

void checkStatus(System::Windows::Forms::CheckBox^);

void deleteTestfolder(System::String^);

long long copyAndDeleteTestfolder(System::String^, System::String^);