#pragma once
#include <stdio.h>
#include <Windows.h>
#include <vector>
#include <cstring>
#include "FileHandler.h"


namespace TarnishedMainframe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;



	/// <summary>
	/// Summary for TarnishedMainframe
	/// </summary>
	public ref class TarnishedMainframe : public System::Windows::Forms::Form
	{
	public:
		TarnishedMainframe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TarnishedMainframe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;



	private: System::Windows::Forms::CheckBox^  chk_1x20gb;
	private: System::Windows::Forms::CheckBox^  chk_1x2gb;
	private: System::Windows::Forms::CheckBox^  chk_200x10mb;
	private: System::Windows::Forms::CheckBox^  chk_1024x64kb;
	private: System::Windows::Forms::CheckBox^  chk_4096x4kb;
	private: System::Windows::Forms::CheckBox^  chk_all;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::FolderBrowserDialog^  folder_browser;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  combo_nas;


	private: System::Windows::Forms::CheckBox^  chk_delete;
	private: System::Windows::Forms::Button^  btn_run;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->chk_delete = (gcnew System::Windows::Forms::CheckBox());
			this->combo_nas = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chk_1x20gb = (gcnew System::Windows::Forms::CheckBox());
			this->chk_1x2gb = (gcnew System::Windows::Forms::CheckBox());
			this->chk_200x10mb = (gcnew System::Windows::Forms::CheckBox());
			this->chk_1024x64kb = (gcnew System::Windows::Forms::CheckBox());
			this->chk_4096x4kb = (gcnew System::Windows::Forms::CheckBox());
			this->chk_all = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_run);
			this->groupBox1->Controls->Add(this->chk_delete);
			this->groupBox1->Controls->Add(this->combo_nas);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->chk_1x20gb);
			this->groupBox1->Controls->Add(this->chk_1x2gb);
			this->groupBox1->Controls->Add(this->chk_200x10mb);
			this->groupBox1->Controls->Add(this->chk_1024x64kb);
			this->groupBox1->Controls->Add(this->chk_4096x4kb);
			this->groupBox1->Controls->Add(this->chk_all);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1071, 209);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Setup";
			// 
			// btn_run
			// 
			this->btn_run->Location = System::Drawing::Point(990, 180);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(75, 23);
			this->btn_run->TabIndex = 17;
			this->btn_run->Text = L"Kør test";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &TarnishedMainframe::btn_run_Click);
			// 
			// chk_delete
			// 
			this->chk_delete->AutoSize = true;
			this->chk_delete->Location = System::Drawing::Point(10, 180);
			this->chk_delete->Name = L"chk_delete";
			this->chk_delete->Size = System::Drawing::Size(131, 17);
			this->chk_delete->TabIndex = 16;
			this->chk_delete->Text = L"Slet test filer efter brug";
			this->chk_delete->UseVisualStyleBackColor = true;
			this->chk_delete->CheckedChanged += gcnew System::EventHandler(this, &TarnishedMainframe::chk_delete_CheckedChanged);
			// 
			// combo_nas
			// 
			this->combo_nas->FormattingEnabled = true;
			this->combo_nas->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Finder dine drev..." });
			this->combo_nas->Location = System::Drawing::Point(515, 37);
			this->combo_nas->Name = L"combo_nas";
			this->combo_nas->Size = System::Drawing::Size(121, 21);
			this->combo_nas->Sorted = true;
			this->combo_nas->TabIndex = 12;
			this->combo_nas->SelectedIndexChanged += gcnew System::EventHandler(this, &TarnishedMainframe::combo_nas_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(304, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Sti til NAS";
			// 
			// chk_1x20gb
			// 
			this->chk_1x20gb->AutoSize = true;
			this->chk_1x20gb->Location = System::Drawing::Point(10, 157);
			this->chk_1x20gb->Name = L"chk_1x20gb";
			this->chk_1x20gb->Size = System::Drawing::Size(73, 17);
			this->chk_1x20gb->TabIndex = 8;
			this->chk_1x20gb->Text = L"1 x 20 GB";
			this->chk_1x20gb->UseVisualStyleBackColor = true;
			this->chk_1x20gb->CheckedChanged += gcnew System::EventHandler(this, &TarnishedMainframe::chk_1x20gb_CheckedChanged);
			// 
			// chk_1x2gb
			// 
			this->chk_1x2gb->AutoSize = true;
			this->chk_1x2gb->Location = System::Drawing::Point(10, 133);
			this->chk_1x2gb->Name = L"chk_1x2gb";
			this->chk_1x2gb->Size = System::Drawing::Size(67, 17);
			this->chk_1x2gb->TabIndex = 7;
			this->chk_1x2gb->Text = L"1 x 2 GB";
			this->chk_1x2gb->UseVisualStyleBackColor = true;
			this->chk_1x2gb->CheckedChanged += gcnew System::EventHandler(this, &TarnishedMainframe::chk_1x2gb_CheckedChanged);
			// 
			// chk_200x10mb
			// 
			this->chk_200x10mb->AutoSize = true;
			this->chk_200x10mb->Location = System::Drawing::Point(10, 109);
			this->chk_200x10mb->Name = L"chk_200x10mb";
			this->chk_200x10mb->Size = System::Drawing::Size(86, 17);
			this->chk_200x10mb->TabIndex = 6;
			this->chk_200x10mb->Text = L"200 x 10 MB";
			this->chk_200x10mb->UseVisualStyleBackColor = true;
			this->chk_200x10mb->CheckedChanged += gcnew System::EventHandler(this, &TarnishedMainframe::chk_200x10mb_CheckedChanged);
			// 
			// chk_1024x64kb
			// 
			this->chk_1024x64kb->AutoSize = true;
			this->chk_1024x64kb->Location = System::Drawing::Point(10, 85);
			this->chk_1024x64kb->Name = L"chk_1024x64kb";
			this->chk_1024x64kb->Size = System::Drawing::Size(90, 17);
			this->chk_1024x64kb->TabIndex = 5;
			this->chk_1024x64kb->Text = L"1024 x 64 KB";
			this->chk_1024x64kb->UseVisualStyleBackColor = true;
			this->chk_1024x64kb->CheckedChanged += gcnew System::EventHandler(this, &TarnishedMainframe::chk_1024x64kb_CheckedChanged);
			// 
			// chk_4096x4kb
			// 
			this->chk_4096x4kb->AutoSize = true;
			this->chk_4096x4kb->Location = System::Drawing::Point(10, 60);
			this->chk_4096x4kb->Name = L"chk_4096x4kb";
			this->chk_4096x4kb->Size = System::Drawing::Size(84, 17);
			this->chk_4096x4kb->TabIndex = 4;
			this->chk_4096x4kb->Text = L"4096 x 4 KB";
			this->chk_4096x4kb->UseVisualStyleBackColor = true;
			this->chk_4096x4kb->CheckedChanged += gcnew System::EventHandler(this, &TarnishedMainframe::chk_4096x4kb_CheckedChanged);
			// 
			// chk_all
			// 
			this->chk_all->AutoSize = true;
			this->chk_all->Location = System::Drawing::Point(10, 37);
			this->chk_all->Name = L"chk_all";
			this->chk_all->Size = System::Drawing::Size(43, 17);
			this->chk_all->TabIndex = 3;
			this->chk_all->Text = L"Alle";
			this->chk_all->UseVisualStyleBackColor = true;
			this->chk_all->CheckedChanged += gcnew System::EventHandler(this, &TarnishedMainframe::chk_all_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Test med:";
			// 
			// TarnishedMainframe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 237);
			this->Controls->Add(this->groupBox1);
			this->Name = L"TarnishedMainframe";
			this->Text = L"Tarnished Mainframe";
			this->Load += gcnew System::EventHandler(this, &TarnishedMainframe::TarnishedMainframe_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private:
		void showCheckboxes()
		{
			chk_1024x64kb->Visible = true;
			chk_1x20gb->Visible = true;
			chk_1x2gb->Visible = true;
			chk_200x10mb->Visible = true;
			chk_4096x4kb->Visible = true;
		}

		void hideCheckboxes()
		{
			chk_1024x64kb->Visible = false;
			chk_1x20gb->Visible = false;
			chk_1x2gb->Visible = false;
			chk_200x10mb->Visible = false;
			chk_4096x4kb->Visible = false;
		}


	private: System::Void chk_all_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (chk_all->Checked)
		{
			hideCheckboxes();
			printf("Alle muligheder er valgt\n");
		}
		else
		{
			showCheckboxes();
			printf("Alle muligheder er tilgængelige igen\n");
		}
	}
	private: System::Void TarnishedMainframe_Load(System::Object^  sender, System::EventArgs^  e) {
		
		combo_nas->Items->Clear();
		System::Collections::ArrayList^ drives = getDrives();
		for each (System::String^ s in drives)
		{
			combo_nas->Items->Add(s);
		}
		//makeTestFiles(1, 20, 2);
		//makeTestFiles(1, 2, 2);
		makeTestFiles(200, 10, 1);
		//makeTestFiles(1024, 64, 0);
		//makeTestFiles(4096, 4, 0);
		copyAndDeleteTestfolder("Test_Filer", "E:/Test_Filer/");
	}


private: System::Void chk_delete_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	checkStatus(chk_delete);
}
private: System::Void combo_nas_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	System::Console::WriteLine("Sti til NAS er valgt: " + (System::String^)combo_nas->SelectedItem);
}
private: System::Void btn_run_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void chk_4096x4kb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!chk_4096x4kb->Checked && chk_all->Checked)
	{
		chk_all->Checked = false;
	}
}
private: System::Void chk_1024x64kb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!chk_1024x64kb->Checked && chk_all->Checked)
	{
		chk_all->Checked = false;
	}
}
private: System::Void chk_200x10mb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!chk_200x10mb->Checked && chk_all->Checked)
	{
		chk_all->Checked = false;
	}
}
private: System::Void chk_1x2gb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!chk_1x2gb->Checked && chk_all->Checked)
	{
		chk_all->Checked = false;
	}
}
private: System::Void chk_1x20gb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!chk_1x20gb->Checked && chk_all->Checked)
	{
		chk_all->Checked = false;
	}
}
};
};

