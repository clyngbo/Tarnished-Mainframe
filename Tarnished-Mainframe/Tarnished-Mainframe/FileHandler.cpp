#include "FileHandler.h"
#include "TarnishedMainframe.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Collections;
using namespace System::IO;
using namespace System::Data;
using namespace std;

enum units {KB=0, MB=1, GB=2};


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

int makeTestFiles(int number, int size, int unit)
{
	
	CreateDirectory((LPCTSTR)L"Test_Filer", NULL);
	long new_size;
	System::String^ dir;
	switch (unit)
	{
	case 0:
		new_size = 1024 * size - 1;
		break;
	case 1:
		new_size = 1024 * 1024 * size - 1;
	case 2: 
		new_size = 1024 * 1024 * 1024 * size -1;
	default:
		break;
	}
	
	switch (size)
	{
	case 4:
		CreateDirectory((LPCTSTR)L"Test_Filer/4KB", NULL);
		dir = "Test_Filer/4KB/";
		break;
	case 64:
		CreateDirectory((LPCTSTR)L"Test_Filer/64KB", NULL);
		dir = "Test_Filer/64KB/";
		break;
	case 10:
		CreateDirectory((LPCTSTR)L"Test_Filer/10MB", NULL);
		dir = "Test_Filer/10MB/";
		break;
	case 2:
		CreateDirectory((LPCTSTR)L"Test_Filer/2GB", NULL);
		dir = "Test_Filer/2GB/";
		break;
	case 20:
		CreateDirectory((LPCTSTR)L"Test_Filer/20GB", NULL);
		dir = "Test_Filer/20GB/";
		break;
	default:
		System::Console::WriteLine("Kunne ikke oprette en mappe.");
		break;
	}
	System::Console::WriteLine("New Size = " + System::Convert::ToString(new_size) + " Number = " + System::Convert::ToString(number));
	//std::vector<char> empty(1024, 0);
	for (int x = 0; x < number; x++)
	{
		System::String^ name_of_file = dir + "testfil_" + System::Convert::ToString(x) + ".img";
		//msclr::interop::marshal_context context;
		//std::string string_name_of_file = context.marshal_as<std::string>(name_of_file);

		System::IO::FileStream^ fs = gcnew System::IO::FileStream(name_of_file, FileMode::Create);
		fs->Seek(new_size, SeekOrigin::Begin);
		fs->WriteByte(0);
		fs->Close();
		System::Console::WriteLine(name_of_file);
		/*for (int i = 0; i < new_size; i++)
			{
				
				std::ofstream ofs(string_name_of_file, std::ios::binary | std::ios::out);
				System::Console::WriteLine(name_of_file);
				if (!ofs.write(&empty[0], empty.size()))
				{
					std::cerr << "Problem med at skrive til fil" << std::endl;
					return 255;
				}
			}*/
	}

	return 0;

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