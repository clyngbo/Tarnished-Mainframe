#include "FileHandler.h"
#include "TarnishedMainframe.h"
#include <iostream>
#include <stdio.h>
using namespace System;
using namespace System::Collections;
using namespace System::IO;
using namespace System::Data;
using namespace std;



System::Collections::ArrayList^ getDrives()
{
	System::Collections::ArrayList^ drives = gcnew System::Collections::ArrayList();
	cli::array<DriveInfo^>^ allDrives = System::IO::DriveInfo::GetDrives();
	System::String^ found = gcnew System::String(" er fundet.");
	for each (DriveInfo^ d in allDrives)
	{
		if (d->IsReady == true)
		{
			System::Console::WriteLine(d->Name + found);
			drives->Add(d->Name);
		}
	}
	return drives;
}

System::String^ makeTestFiles(int number, int size)
{
	System::String^ a = gcnew System::String("");
	return a;
}

void checkStatus(System::Windows::Forms::CheckBox^ chk)
{
	if (chk->Checked)
	{
		System::Console::WriteLine("Alle testfiler vil blive slettet efter brug.");
	}
	else 
	{
		System::Console::WriteLine("Ingen testfiler vil blive slettet efter brug.");
	}
}