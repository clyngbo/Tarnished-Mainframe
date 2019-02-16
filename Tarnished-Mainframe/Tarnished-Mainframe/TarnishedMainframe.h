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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  combo_nas;
	private: System::Windows::Forms::Button^  btn_browse;
	private: System::Windows::Forms::TextBox^  textbox_excel_folder;
	private: System::Windows::Forms::CheckBox^  chk_delete;
	private: System::Windows::Forms::Label^  label5;
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
			this->chk_delete = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_browse = (gcnew System::Windows::Forms::Button());
			this->textbox_excel_folder = (gcnew System::Windows::Forms::TextBox());
			this->combo_nas = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->Controls->Add(this->chk_delete);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btn_browse);
			this->groupBox1->Controls->Add(this->textbox_excel_folder);
			this->groupBox1->Controls->Add(this->combo_nas);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(307, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Sti hvor test filerne skal gemmes";
			// 
			// btn_browse
			// 
			this->btn_browse->Location = System::Drawing::Point(714, 58);
			this->btn_browse->Name = L"btn_browse";
			this->btn_browse->Size = System::Drawing::Size(75, 23);
			this->btn_browse->TabIndex = 14;
			this->btn_browse->Text = L"Gennemse";
			this->btn_browse->UseVisualStyleBackColor = true;
			this->btn_browse->Click += gcnew System::EventHandler(this, &TarnishedMainframe::btn_browse_Click);
			// 
			// textbox_excel_folder
			// 
			this->textbox_excel_folder->Location = System::Drawing::Point(515, 60);
			this->textbox_excel_folder->Name = L"textbox_excel_folder";
			this->textbox_excel_folder->Size = System::Drawing::Size(193, 20);
			this->textbox_excel_folder->TabIndex = 13;
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(304, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 26);
			this->label4->TabIndex = 11;
			this->label4->Text = L"NB: Hvis en Excel ikke kan oprettes, \r\nvil alle resultaterne gemmes i C:\\results."
				L"txt";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(304, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Sti hvor Excel fil skal gemmes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(304, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Sti til NAS";
			this->label2->Click += gcnew System::EventHandler(this, &TarnishedMainframe::label2_Click);
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
		//combo_nas->Items->AddRange(drives);
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btn_browse_Click(System::Object^  sender, System::EventArgs^  e) {
	folder_browser = gcnew System::Windows::Forms::FolderBrowserDialog();
	if (folder_browser->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
	{
		textbox_excel_folder->Text = folder_browser->SelectedPath;
	}
}
private: System::Void chk_delete_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	checkStatus(chk_delete);
}
private: System::Void combo_nas_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	System::Console::WriteLine("Sti til NAS er valgt: " + (System::String^)combo_nas->SelectedItem);
}
};
};

