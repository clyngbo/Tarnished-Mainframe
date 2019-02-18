#include "FileHandler.h"
#include "TarnishedMainframe.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <WinBase.h>
#include <filesystem>
#include <msclr\marshal.h>
using namespace System;
using namespace System::Collections;
using namespace System::IO;
using namespace System::Data;
using namespace std;
using namespace msclr::interop;

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
	long long new_size;
	long long size_of_1GB = 1073741824;
	System::String^ dir;
	switch (unit)
	{
	case 0:
		new_size = 1024 * size - 1;
		break;
	case 1:
		new_size = 1024 * 1024 * size - 1;
		break;
	case 2:
		new_size = size_of_1GB * (long long)size;
		break;
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

	for (int x = 0; x < number; x++)
	{
		System::String^ name_of_file = dir + "testfil_" + System::Convert::ToString(x) + ".img";
		System::IO::FileStream^ fs = gcnew System::IO::FileStream(name_of_file, FileMode::Create);
		fs->Seek(new_size, SeekOrigin::Begin);
		fs->WriteByte(0);
		fs->Close();
		System::Console::WriteLine(name_of_file);
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

void deleteTestfolder(System::String^ path)
{
	try {
		System::IO::Directory::Delete(path, true);
		System::Console::WriteLine("Alle test filer er blevet slettet.");
	}
	catch (System::IO::IOException^ e)
	{
		System::Console::WriteLine("Test filerne blev ikke slettet. Du må slette dem manuelt.\n Følgende fejlmeddelse fra systemet: \n"+ e->Message);
	}
}

long long copyAndDeleteTestfolder(System::String^ from, System::String^ to)
{
	msclr::interop::marshal_context mc;
	//LPCTSTR sauce = mc.marshal_as<LPCTSTR>(from);

	LPCTSTR distf = mc.marshal_as<LPCTSTR>(to);

	std::filesystem::path sauce = mc.marshal_as<std::string>(from);
	std::filesystem::path dist = mc.marshal_as<std::string>(to);

	CreateDirectory(distf, NULL);
	System::String^ cmd = "copy " + from + " " + to;
	System::Diagnostics::Stopwatch^ sw = gcnew System::Diagnostics::Stopwatch();
	//System::IO::FileInfo^ di = gcnew System::IO::FileInfo(from);
	
	
	sw->Start();
	std::filesystem::copy(sauce, dist, std::filesystem::copy_options::recursive);
	//System::IO::Directory::Move(from, to);
	//MoveFile(sauce, dist);
	//di->MoveTo(to);
	sw->Stop();
	//deleteTestfolder(from);
	System::Console::WriteLine(sw->Elapsed);
	return sw->ElapsedMilliseconds;
}