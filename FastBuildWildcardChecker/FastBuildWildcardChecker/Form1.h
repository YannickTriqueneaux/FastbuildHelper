#pragma once

namespace FastBuildWildcardChecker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ListBox^  InputList;
	private: System::Windows::Forms::ListBox^  ResultList;

	protected: 

	private: System::Windows::Forms::Button^  RemoveButton;
	private: System::Windows::Forms::Button^  CheckButton;


	private: System::Windows::Forms::Button^  AddButton;
	private: System::Windows::Forms::TextBox^  AddFileTextBox;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  BrowsButton;





	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  PatternBox;
	private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Button^  ToClipBoardButton;
    private: System::Windows::Forms::Button^  ClearListsButton;

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
            this->InputList = (gcnew System::Windows::Forms::ListBox());
            this->ResultList = (gcnew System::Windows::Forms::ListBox());
            this->RemoveButton = (gcnew System::Windows::Forms::Button());
            this->CheckButton = (gcnew System::Windows::Forms::Button());
            this->AddButton = (gcnew System::Windows::Forms::Button());
            this->AddFileTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->BrowsButton = (gcnew System::Windows::Forms::Button());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->PatternBox = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->ToClipBoardButton = (gcnew System::Windows::Forms::Button());
            this->ClearListsButton = (gcnew System::Windows::Forms::Button());
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // groupBox1
            // 
            this->groupBox1->Location = System::Drawing::Point(15, 9);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(429, 466);
            this->groupBox1->TabIndex = 12;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Input file list";
            // 
            // InputList
            // 
            this->InputList->FormattingEnabled = true;
            this->InputList->Location = System::Drawing::Point(25, 76);
            this->InputList->Name = L"InputList";
            this->InputList->Size = System::Drawing::Size(375, 381);
            this->InputList->TabIndex = 0;
            // 
            // ResultList
            // 
            this->ResultList->FormattingEnabled = true;
            this->ResultList->Location = System::Drawing::Point(14, 24);
            this->ResultList->Name = L"ResultList";
            this->ResultList->Size = System::Drawing::Size(426, 381);
            this->ResultList->TabIndex = 1;
            // 
            // RemoveButton
            // 
            this->RemoveButton->Location = System::Drawing::Point(406, 110);
            this->RemoveButton->Name = L"RemoveButton";
            this->RemoveButton->Size = System::Drawing::Size(27, 23);
            this->RemoveButton->TabIndex = 2;
            this->RemoveButton->Text = L"-";
            this->RemoveButton->UseVisualStyleBackColor = true;
            this->RemoveButton->Click += gcnew System::EventHandler(this, &Form1::RemoveButton_Click);
            // 
            // CheckButton
            // 
            this->CheckButton->Location = System::Drawing::Point(451, 193);
            this->CheckButton->Name = L"CheckButton";
            this->CheckButton->Size = System::Drawing::Size(127, 48);
            this->CheckButton->TabIndex = 3;
            this->CheckButton->Text = L"Check";
            this->CheckButton->UseVisualStyleBackColor = true;
            this->CheckButton->Click += gcnew System::EventHandler(this, &Form1::CheckButton_Click);
            // 
            // AddButton
            // 
            this->AddButton->Location = System::Drawing::Point(406, 52);
            this->AddButton->Name = L"AddButton";
            this->AddButton->Size = System::Drawing::Size(27, 23);
            this->AddButton->TabIndex = 4;
            this->AddButton->Text = L"+";
            this->AddButton->UseVisualStyleBackColor = true;
            this->AddButton->Click += gcnew System::EventHandler(this, &Form1::AddButton_Click);
            // 
            // AddFileTextBox
            // 
            this->AddFileTextBox->Location = System::Drawing::Point(25, 52);
            this->AddFileTextBox->Name = L"AddFileTextBox";
            this->AddFileTextBox->Size = System::Drawing::Size(375, 20);
            this->AddFileTextBox->TabIndex = 5;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(25, 36);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(42, 13);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Add file";
            // 
            // BrowsButton
            // 
            this->BrowsButton->Location = System::Drawing::Point(406, 81);
            this->BrowsButton->Name = L"BrowsButton";
            this->BrowsButton->Size = System::Drawing::Size(27, 23);
            this->BrowsButton->TabIndex = 11;
            this->BrowsButton->Text = L"...";
            this->BrowsButton->UseVisualStyleBackColor = true;
            this->BrowsButton->Click += gcnew System::EventHandler(this, &Form1::BrowsButton_Click);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->ResultList);
            this->groupBox2->Location = System::Drawing::Point(584, 52);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(446, 419);
            this->groupBox2->TabIndex = 13;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Result file list";
            // 
            // PatternBox
            // 
            this->PatternBox->Location = System::Drawing::Point(451, 36);
            this->PatternBox->Name = L"PatternBox";
            this->PatternBox->Size = System::Drawing::Size(127, 20);
            this->PatternBox->TabIndex = 14;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(450, 20);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(47, 13);
            this->label2->TabIndex = 15;
            this->label2->Text = L"Pattern :";
            // 
            // ToClipBoardButton
            // 
            this->ToClipBoardButton->Location = System::Drawing::Point(453, 247);
            this->ToClipBoardButton->Name = L"ToClipBoardButton";
            this->ToClipBoardButton->Size = System::Drawing::Size(125, 40);
            this->ToClipBoardButton->TabIndex = 16;
            this->ToClipBoardButton->Text = L"Copy result to clipboard";
            this->ToClipBoardButton->UseVisualStyleBackColor = true;
            this->ToClipBoardButton->Click += gcnew System::EventHandler(this, &Form1::ToClipBoardButton_Click);
            // 
            // ClearListsButton
            // 
            this->ClearListsButton->Location = System::Drawing::Point(453, 293);
            this->ClearListsButton->Name = L"ClearListsButton";
            this->ClearListsButton->Size = System::Drawing::Size(125, 39);
            this->ClearListsButton->TabIndex = 17;
            this->ClearListsButton->Text = L"Clear Lists";
            this->ClearListsButton->UseVisualStyleBackColor = true;
            this->ClearListsButton->Click += gcnew System::EventHandler(this, &Form1::ClearListsButton_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1043, 487);
            this->Controls->Add(this->ClearListsButton);
            this->Controls->Add(this->ToClipBoardButton);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->PatternBox);
            this->Controls->Add(this->BrowsButton);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->AddFileTextBox);
            this->Controls->Add(this->AddButton);
            this->Controls->Add(this->CheckButton);
            this->Controls->Add(this->RemoveButton);
            this->Controls->Add(this->InputList);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Name = L"Form1";
            this->Text = L"WildcardHelper";
            this->groupBox2->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void AddButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(String::IsNullOrEmpty(AddFileTextBox->Text)) return;

			 this->InputList->Items->Add(AddFileTextBox->Text);
			 this->InputList->SelectedIndex = InputList->Items->Count -1;
		 }
         static String^ lastPathUsed = nullptr;
private: System::Void BrowsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
             if (lastPathUsed != nullptr){
                 openFileDialog1->InitialDirectory = lastPathUsed;
             }
             else{
                 openFileDialog1->InitialDirectory = "c:\\";
             }
			 openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			 openFileDialog1->FilterIndex = 2;
			 openFileDialog1->RestoreDirectory = true;
             openFileDialog1->Multiselect = true;
             try
             {
                 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
                 {
                     if (openFileDialog1->FileNames->Length > 0){
                         lastPathUsed = System::IO::Path::GetDirectoryName(openFileDialog1->FileNames[0]->ToString());
                         for (int i = 0; i < openFileDialog1->FileNames->Length; ++i)
                         {
                             this->InputList->Items->Add(openFileDialog1->FileNames[i]->Clone());
                         }
                     }
                 }
             }
             catch (...)
             {
                 lastPathUsed = nullptr;
             }
		 }
private: System::Void RemoveButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->InputList->Items->Count <= 0) return;
			 this->InputList->Items->RemoveAt(this->InputList->SelectedIndex);
		 }

		 //algorithm copied form FastBuild code version 0.87 - should have to be updated   (AString.cpp  AString::MatchI)
		 // NOTE: This code is based on that in the C/C++ Users Journal (Mike Cornelison)
		 bool match(const char * pat, const char * str){
			 bool star;

new_segment:
			 star = false;
			 if ( *pat == '*' )
			 {
				 star = true;
				 do { pat++; } while ( *pat == '*' );
			 }

test_match:
			 int i;
			 for ( i = 0; pat[i] && (pat[i] != '*'); i++ )
			 {
				 char a = str[i]; a = ( ( a >= 'A' ) && ( a <= 'Z' ) ) ? 'a' + ( a - 'A' ) : a;
				 char b = pat[i]; b = ( ( b >= 'A' ) && ( b <= 'Z' ) ) ? 'a' + ( b - 'A' ) : b;
				 if ( a != b )
				 {
					 if ( !str[i] ) return false;
					 if ( ( pat[i] == '?' ) && ( str[i] != '.' ) ) continue;
					 if ( !star ) return false;
					 str++;
					 goto test_match;
				 }
			 }
			 if ( pat[i] == '*' )
			 {
				 str += i;
				 pat += i;
				 goto new_segment;
			 }
			 if ( !str[i] ) return true;
			 if ( i && pat[i - 1] == '*' ) return true;
			 if ( !star ) return false;
			 str++;
			 goto test_match;
		 }


private: System::Void CheckButton_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ patstr = PatternBox->Text;
			using System::IntPtr;
			using System::Runtime::InteropServices::Marshal;


			ResultList->Items->Clear();

			const char* pat = (const char*)(Marshal::StringToHGlobalAnsi(patstr)).ToPointer( );

			auto count = this->InputList->Items->Count;
			for (auto i = 0; i< count;++i)
			{
				auto filestr = static_cast<String^>(this->InputList->Items[i]);
				const char* file = (const char*)(Marshal::StringToHGlobalAnsi(filestr)).ToPointer( );
				if(match(pat,file)){
					ResultList->Items->Add(filestr->Clone());
				}
				Marshal::FreeHGlobal(IntPtr((void*)file));
			}


			Marshal::FreeHGlobal(IntPtr((void*)pat));
		 }
private: System::Void ToClipBoardButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if(this->ResultList->Items->Count == 0) return;

		System::String^ result = "";
		auto count = this->ResultList->Items->Count;
		auto i = 0;
		for (; i< count -1;++i)
		{
			result += static_cast<String^>(this->ResultList->Items[i]);
			result += "\n";
		}
		result += static_cast<String^>(this->ResultList->Items[i]);

		Clipboard::SetDataObject(result, true);
	}
private: System::Void ClearListsButton_Click(System::Object^  sender, System::EventArgs^  e) {
    this->InputList->Items->Clear();
    this->ResultList->Items->Clear();
}
};
}

