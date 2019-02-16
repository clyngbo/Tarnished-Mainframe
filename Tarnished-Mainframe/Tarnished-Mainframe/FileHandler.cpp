#include "FileHandler.h"

#include <stdio.h>
using namespace System;
using namespace System::Collections;
using namespace System::IO;
using namespace System::Data;


System::Collections::ArrayList^ getDrives()
{
	System::Collections::ArrayList^ drives = gcnew System::Collections::ArrayList();
	cli::array<DriveInfo^>^ allDrives = System::IO::DriveInfo::GetDrives();
	for each (DriveInfo^ d in allDrives)
	{
		if (d->IsReady == true)
		{
			drives->Add(d->Name);
		}
	}
	return drives;
}
