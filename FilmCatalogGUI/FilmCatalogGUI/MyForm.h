#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ ModifyButton;
	private: System::Windows::Forms::Button^ SimpleDisplayButton;
	private: System::Windows::Forms::Button^ DetailedDisplayButton;
	private: System::Windows::Forms::Button^ QuitButton;
	protected:
	protected:
	private: System::Windows::Forms::Label^ TitleLabel;
	private: System::Windows::Forms::TextBox^ TitleBox;
	private: System::Windows::Forms::TextBox^ MarkBox;
	private: System::Windows::Forms::Label^ MarkLabel;
	private: System::Windows::Forms::TextBox^ DirectorBox;
	private: System::Windows::Forms::Label^ DirectorLabel;
	private: System::Windows::Forms::TextBox^ YearBox;
	private: System::Windows::Forms::Label^ YearLabel;
	private: System::Windows::Forms::TextBox^ CommentBox;
	private: System::Windows::Forms::Label^ CommentLabel;
	private: System::Windows::Forms::Button^ NewFilmButton;
	private: System::Windows::Forms::ListBox^ CatalogDisplayBox;
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
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->ModifyButton = (gcnew System::Windows::Forms::Button());
			this->SimpleDisplayButton = (gcnew System::Windows::Forms::Button());
			this->DetailedDisplayButton = (gcnew System::Windows::Forms::Button());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->TitleLabel = (gcnew System::Windows::Forms::Label());
			this->TitleBox = (gcnew System::Windows::Forms::TextBox());
			this->MarkBox = (gcnew System::Windows::Forms::TextBox());
			this->MarkLabel = (gcnew System::Windows::Forms::Label());
			this->DirectorBox = (gcnew System::Windows::Forms::TextBox());
			this->DirectorLabel = (gcnew System::Windows::Forms::Label());
			this->YearBox = (gcnew System::Windows::Forms::TextBox());
			this->YearLabel = (gcnew System::Windows::Forms::Label());
			this->CommentBox = (gcnew System::Windows::Forms::TextBox());
			this->CommentLabel = (gcnew System::Windows::Forms::Label());
			this->NewFilmButton = (gcnew System::Windows::Forms::Button());
			this->CatalogDisplayBox = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(19, 43);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(279, 23);
			this->AddButton->TabIndex = 0;
			this->AddButton->Text = L"Add the Movie";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &MyForm::AddButton_Click);
			// 
			// ModifyButton
			// 
			this->ModifyButton->Location = System::Drawing::Point(19, 72);
			this->ModifyButton->Name = L"ModifyButton";
			this->ModifyButton->Size = System::Drawing::Size(279, 23);
			this->ModifyButton->TabIndex = 1;
			this->ModifyButton->Text = L"Modify the Movie\'s Informations";
			this->ModifyButton->UseVisualStyleBackColor = true;
			this->ModifyButton->Click += gcnew System::EventHandler(this, &MyForm::ModifyButton_Click);
			// 
			// SimpleDisplayButton
			// 
			this->SimpleDisplayButton->Location = System::Drawing::Point(604, 12);
			this->SimpleDisplayButton->Name = L"SimpleDisplayButton";
			this->SimpleDisplayButton->Size = System::Drawing::Size(195, 23);
			this->SimpleDisplayButton->TabIndex = 2;
			this->SimpleDisplayButton->Text = L"Simple Display";
			this->SimpleDisplayButton->UseVisualStyleBackColor = true;
			this->SimpleDisplayButton->Click += gcnew System::EventHandler(this, &MyForm::SimpleDisplayButton_Click);
			// 
			// DetailedDisplayButton
			// 
			this->DetailedDisplayButton->Location = System::Drawing::Point(604, 43);
			this->DetailedDisplayButton->Name = L"DetailedDisplayButton";
			this->DetailedDisplayButton->Size = System::Drawing::Size(195, 23);
			this->DetailedDisplayButton->TabIndex = 3;
			this->DetailedDisplayButton->Text = L"Detailed Display";
			this->DetailedDisplayButton->UseVisualStyleBackColor = true;
			this->DetailedDisplayButton->Click += gcnew System::EventHandler(this, &MyForm::DetailedDisplayButton_Click);
			// 
			// QuitButton
			// 
			this->QuitButton->Location = System::Drawing::Point(604, 411);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(195, 23);
			this->QuitButton->TabIndex = 4;
			this->QuitButton->Text = L"Save & Quit";
			this->QuitButton->UseVisualStyleBackColor = true;
			this->QuitButton->Click += gcnew System::EventHandler(this, &MyForm::QuitButton_Click);
			// 
			// TitleLabel
			// 
			this->TitleLabel->AutoSize = true;
			this->TitleLabel->Location = System::Drawing::Point(16, 118);
			this->TitleLabel->Name = L"TitleLabel";
			this->TitleLabel->Size = System::Drawing::Size(39, 16);
			this->TitleLabel->TabIndex = 5;
			this->TitleLabel->Text = L"Title :";
			this->TitleLabel->Click += gcnew System::EventHandler(this, &MyForm::TitleLabel_Click);
			// 
			// TitleBox
			// 
			this->TitleBox->Location = System::Drawing::Point(19, 137);
			this->TitleBox->Name = L"TitleBox";
			this->TitleBox->Size = System::Drawing::Size(396, 22);
			this->TitleBox->TabIndex = 6;
			this->TitleBox->TextChanged += gcnew System::EventHandler(this, &MyForm::TitleBox_TextChanged);
			// 
			// MarkBox
			// 
			this->MarkBox->Location = System::Drawing::Point(19, 181);
			this->MarkBox->Name = L"MarkBox";
			this->MarkBox->Size = System::Drawing::Size(396, 22);
			this->MarkBox->TabIndex = 8;
			this->MarkBox->TextChanged += gcnew System::EventHandler(this, &MyForm::MarkBox_TextChanged);
			// 
			// MarkLabel
			// 
			this->MarkLabel->AutoSize = true;
			this->MarkLabel->Location = System::Drawing::Point(16, 162);
			this->MarkLabel->Name = L"MarkLabel";
			this->MarkLabel->Size = System::Drawing::Size(96, 16);
			this->MarkLabel->TabIndex = 7;
			this->MarkLabel->Text = L"Mark (out of 5) :";
			this->MarkLabel->Click += gcnew System::EventHandler(this, &MyForm::MarkLabel_Click);
			// 
			// DirectorBox
			// 
			this->DirectorBox->Location = System::Drawing::Point(19, 225);
			this->DirectorBox->Name = L"DirectorBox";
			this->DirectorBox->Size = System::Drawing::Size(396, 22);
			this->DirectorBox->TabIndex = 10;
			this->DirectorBox->TextChanged += gcnew System::EventHandler(this, &MyForm::DirectorBox_TextChanged);
			// 
			// DirectorLabel
			// 
			this->DirectorLabel->AutoSize = true;
			this->DirectorLabel->Location = System::Drawing::Point(16, 206);
			this->DirectorLabel->Name = L"DirectorLabel";
			this->DirectorLabel->Size = System::Drawing::Size(60, 16);
			this->DirectorLabel->TabIndex = 9;
			this->DirectorLabel->Text = L"Director :";
			this->DirectorLabel->Click += gcnew System::EventHandler(this, &MyForm::DirectorLabel_Click);
			// 
			// YearBox
			// 
			this->YearBox->Location = System::Drawing::Point(19, 269);
			this->YearBox->Name = L"YearBox";
			this->YearBox->Size = System::Drawing::Size(396, 22);
			this->YearBox->TabIndex = 12;
			this->YearBox->TextChanged += gcnew System::EventHandler(this, &MyForm::YearBox_TextChanged);
			// 
			// YearLabel
			// 
			this->YearLabel->AutoSize = true;
			this->YearLabel->Location = System::Drawing::Point(16, 250);
			this->YearLabel->Name = L"YearLabel";
			this->YearLabel->Size = System::Drawing::Size(42, 16);
			this->YearLabel->TabIndex = 11;
			this->YearLabel->Text = L"Year :";
			this->YearLabel->Click += gcnew System::EventHandler(this, &MyForm::YearLabel_Click);
			// 
			// CommentBox
			// 
			this->CommentBox->Location = System::Drawing::Point(19, 313);
			this->CommentBox->Name = L"CommentBox";
			this->CommentBox->Size = System::Drawing::Size(396, 22);
			this->CommentBox->TabIndex = 17;
			this->CommentBox->TextChanged += gcnew System::EventHandler(this, &MyForm::CommentBox_TextChanged);
			// 
			// CommentLabel
			// 
			this->CommentLabel->AutoSize = true;
			this->CommentLabel->Location = System::Drawing::Point(16, 294);
			this->CommentLabel->Name = L"CommentLabel";
			this->CommentLabel->Size = System::Drawing::Size(70, 16);
			this->CommentLabel->TabIndex = 16;
			this->CommentLabel->Text = L"Comment :";
			this->CommentLabel->Click += gcnew System::EventHandler(this, &MyForm::CommentLabel_Click);
			// 
			// NewFilmButton
			// 
			this->NewFilmButton->Location = System::Drawing::Point(19, 14);
			this->NewFilmButton->Name = L"NewFilmButton";
			this->NewFilmButton->Size = System::Drawing::Size(279, 23);
			this->NewFilmButton->TabIndex = 18;
			this->NewFilmButton->Text = L"Enter new Film";
			this->NewFilmButton->UseVisualStyleBackColor = true;
			this->NewFilmButton->Click += gcnew System::EventHandler(this, &MyForm::NewFilmButton_Click);
			// 
			// CatalogDisplayBox
			// 
			this->CatalogDisplayBox->FormattingEnabled = true;
			this->CatalogDisplayBox->ItemHeight = 16;
			this->CatalogDisplayBox->Location = System::Drawing::Point(421, 80);
			this->CatalogDisplayBox->Name = L"CatalogDisplayBox";
			this->CatalogDisplayBox->Size = System::Drawing::Size(377, 324);
			this->CatalogDisplayBox->TabIndex = 19;
			this->CatalogDisplayBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::CatalogDisplayBox_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 446);
			this->Controls->Add(this->CatalogDisplayBox);
			this->Controls->Add(this->NewFilmButton);
			this->Controls->Add(this->CommentBox);
			this->Controls->Add(this->CommentLabel);
			this->Controls->Add(this->YearBox);
			this->Controls->Add(this->YearLabel);
			this->Controls->Add(this->DirectorBox);
			this->Controls->Add(this->DirectorLabel);
			this->Controls->Add(this->MarkBox);
			this->Controls->Add(this->MarkLabel);
			this->Controls->Add(this->TitleBox);
			this->Controls->Add(this->TitleLabel);
			this->Controls->Add(this->QuitButton);
			this->Controls->Add(this->DetailedDisplayButton);
			this->Controls->Add(this->SimpleDisplayButton);
			this->Controls->Add(this->ModifyButton);
			this->Controls->Add(this->AddButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CommentLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void CommentBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void YearBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void YearLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void DirectorBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void DirectorLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void MarkBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void MarkLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void TitleBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void TitleLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		//nothing
	}
	private: System::Void QuitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//save the catalog in a save-file and quit the interface
	}
	private: System::Void DetailedDisplayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//display all the film infos
	}
	private: System::Void SimpleDisplayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//display only the title and the note of the film
	}
	private: System::Void ModifyButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//modify the Film in both the catalog and the listBox (display)
	}
	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//add the film to the catalog and to the listBox (display)
	}
	private: System::Void NewFilmButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//set all textboxes to ""
	}
	private: System::Void CatalogDisplayBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//when selected, put the film in all the TextBoxes in order to allow the user to change its caracteristics
	}
	};
}
