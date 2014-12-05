#pragma once
#include <iostream>

namespace WebScanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WebScannerForm
	/// </summary>
	public ref class WebScannerForm : public System::Windows::Forms::Form
	{
	public:
		WebScannerForm(void)
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
		~WebScannerForm()
		{
			if (components)
			{
				delete components;
			}
		}
  private: System::Windows::Forms::TextBox^  searchTextBox;
  protected: 

  private: System::Windows::Forms::Button^  startButton;
  private: System::Windows::Forms::Label^  startUrlLabel;
  private: System::Windows::Forms::TextBox^  startUrlTextBox;
  private: System::Windows::Forms::Label^  NumThreadsLabel;
  private: System::Windows::Forms::TextBox^  treadsNumberTextBox;
  private: System::Windows::Forms::Label^  scanNumberLabel;
  private: System::Windows::Forms::TextBox^  urlToScanTextBox;
  private: System::Windows::Forms::Label^  textToSearchLabel;
  private: System::Windows::Forms::ProgressBar^  completedProgressBar;
  private: System::Windows::Forms::Label^  percentsLabel;
  private: System::Windows::Forms::Button^  StopButton;
  private: System::Windows::Forms::Button^  exitButton;
  private: System::Windows::Forms::TextBox^  resultsTextBox;
  private: System::Windows::Forms::Label^  resultsLabel;


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
      this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
      this->startButton = (gcnew System::Windows::Forms::Button());
      this->startUrlLabel = (gcnew System::Windows::Forms::Label());
      this->startUrlTextBox = (gcnew System::Windows::Forms::TextBox());
      this->NumThreadsLabel = (gcnew System::Windows::Forms::Label());
      this->treadsNumberTextBox = (gcnew System::Windows::Forms::TextBox());
      this->scanNumberLabel = (gcnew System::Windows::Forms::Label());
      this->urlToScanTextBox = (gcnew System::Windows::Forms::TextBox());
      this->textToSearchLabel = (gcnew System::Windows::Forms::Label());
      this->completedProgressBar = (gcnew System::Windows::Forms::ProgressBar());
      this->percentsLabel = (gcnew System::Windows::Forms::Label());
      this->StopButton = (gcnew System::Windows::Forms::Button());
      this->exitButton = (gcnew System::Windows::Forms::Button());
      this->resultsTextBox = (gcnew System::Windows::Forms::TextBox());
      this->resultsLabel = (gcnew System::Windows::Forms::Label());
      this->SuspendLayout();
      // 
      // searchTextBox
      // 
      this->searchTextBox->Location = System::Drawing::Point(12, 110);
      this->searchTextBox->Multiline = true;
      this->searchTextBox->Name = L"searchTextBox";
      this->searchTextBox->Size = System::Drawing::Size(492, 100);
      this->searchTextBox->TabIndex = 0;
      // 
      // startButton
      // 
      this->startButton->Location = System::Drawing::Point(12, 376);
      this->startButton->Name = L"startButton";
      this->startButton->Size = System::Drawing::Size(160, 26);
      this->startButton->TabIndex = 1;
      this->startButton->Text = L"Start";
      this->startButton->UseVisualStyleBackColor = true;
      this->startButton->Click += gcnew System::EventHandler(this, &WebScannerForm::startButton_Click);
      // 
      // startUrlLabel
      // 
      this->startUrlLabel->AutoSize = true;
      this->startUrlLabel->Location = System::Drawing::Point(12, 12);
      this->startUrlLabel->Name = L"startUrlLabel";
      this->startUrlLabel->Size = System::Drawing::Size(57, 13);
      this->startUrlLabel->TabIndex = 2;
      this->startUrlLabel->Text = L"Start URL:";
      // 
      // startUrlTextBox
      // 
      this->startUrlTextBox->Location = System::Drawing::Point(107, 9);
      this->startUrlTextBox->Name = L"startUrlTextBox";
      this->startUrlTextBox->Size = System::Drawing::Size(397, 20);
      this->startUrlTextBox->TabIndex = 3;
      // 
      // NumThreadsLabel
      // 
      this->NumThreadsLabel->AutoSize = true;
      this->NumThreadsLabel->Location = System::Drawing::Point(12, 38);
      this->NumThreadsLabel->Name = L"NumThreadsLabel";
      this->NumThreadsLabel->Size = System::Drawing::Size(89, 13);
      this->NumThreadsLabel->TabIndex = 4;
      this->NumThreadsLabel->Text = L"Threads Number:";
      // 
      // treadsNumberTextBox
      // 
      this->treadsNumberTextBox->Location = System::Drawing::Point(107, 35);
      this->treadsNumberTextBox->Name = L"treadsNumberTextBox";
      this->treadsNumberTextBox->Size = System::Drawing::Size(397, 20);
      this->treadsNumberTextBox->TabIndex = 5;
      // 
      // scanNumberLabel
      // 
      this->scanNumberLabel->AutoSize = true;
      this->scanNumberLabel->Location = System::Drawing::Point(12, 66);
      this->scanNumberLabel->Name = L"scanNumberLabel";
      this->scanNumberLabel->Size = System::Drawing::Size(81, 13);
      this->scanNumberLabel->TabIndex = 6;
      this->scanNumberLabel->Text = L"URLs To Scan:";
      // 
      // urlToScanTextBox
      // 
      this->urlToScanTextBox->Location = System::Drawing::Point(107, 63);
      this->urlToScanTextBox->Name = L"urlToScanTextBox";
      this->urlToScanTextBox->Size = System::Drawing::Size(397, 20);
      this->urlToScanTextBox->TabIndex = 7;
      // 
      // textToSearchLabel
      // 
      this->textToSearchLabel->AutoSize = true;
      this->textToSearchLabel->Location = System::Drawing::Point(12, 94);
      this->textToSearchLabel->Name = L"textToSearchLabel";
      this->textToSearchLabel->Size = System::Drawing::Size(84, 13);
      this->textToSearchLabel->TabIndex = 8;
      this->textToSearchLabel->Text = L"Text To Search:";
      // 
      // completedProgressBar
      // 
      this->completedProgressBar->Location = System::Drawing::Point(12, 350);
      this->completedProgressBar->Name = L"completedProgressBar";
      this->completedProgressBar->Size = System::Drawing::Size(492, 20);
      this->completedProgressBar->TabIndex = 9;
      // 
      // percentsLabel
      // 
      this->percentsLabel->AutoSize = true;
      this->percentsLabel->Location = System::Drawing::Point(12, 332);
      this->percentsLabel->Name = L"percentsLabel";
      this->percentsLabel->Size = System::Drawing::Size(105, 13);
      this->percentsLabel->TabIndex = 10;
      this->percentsLabel->Text = L"Percents Completed:";
      // 
      // StopButton
      // 
      this->StopButton->Location = System::Drawing::Point(178, 376);
      this->StopButton->Name = L"StopButton";
      this->StopButton->Size = System::Drawing::Size(160, 26);
      this->StopButton->TabIndex = 11;
      this->StopButton->Text = L"Stop";
      this->StopButton->UseVisualStyleBackColor = true;
      // 
      // exitButton
      // 
      this->exitButton->Location = System::Drawing::Point(344, 376);
      this->exitButton->Name = L"exitButton";
      this->exitButton->Size = System::Drawing::Size(160, 25);
      this->exitButton->TabIndex = 12;
      this->exitButton->Text = L"Exit";
      this->exitButton->UseVisualStyleBackColor = true;
      this->exitButton->Click += gcnew System::EventHandler(this, &WebScannerForm::exitButton_Click);
      // 
      // resultsTextBox
      // 
      this->resultsTextBox->Location = System::Drawing::Point(12, 229);
      this->resultsTextBox->Multiline = true;
      this->resultsTextBox->Name = L"resultsTextBox";
      this->resultsTextBox->Size = System::Drawing::Size(492, 100);
      this->resultsTextBox->TabIndex = 13;
      // 
      // resultsLabel
      // 
      this->resultsLabel->AutoSize = true;
      this->resultsLabel->Location = System::Drawing::Point(12, 213);
      this->resultsLabel->Name = L"resultsLabel";
      this->resultsLabel->Size = System::Drawing::Size(45, 13);
      this->resultsLabel->TabIndex = 14;
      this->resultsLabel->Text = L"Results:";
      // 
      // WebScannerForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(517, 411);
      this->Controls->Add(this->resultsLabel);
      this->Controls->Add(this->resultsTextBox);
      this->Controls->Add(this->exitButton);
      this->Controls->Add(this->StopButton);
      this->Controls->Add(this->percentsLabel);
      this->Controls->Add(this->completedProgressBar);
      this->Controls->Add(this->textToSearchLabel);
      this->Controls->Add(this->urlToScanTextBox);
      this->Controls->Add(this->scanNumberLabel);
      this->Controls->Add(this->treadsNumberTextBox);
      this->Controls->Add(this->NumThreadsLabel);
      this->Controls->Add(this->startUrlTextBox);
      this->Controls->Add(this->startUrlLabel);
      this->Controls->Add(this->startButton);
      this->Controls->Add(this->searchTextBox);
      this->Name = L"WebScannerForm";
      this->Text = L"WebScannerForm";
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
  private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
              auto str = this->searchTextBox->Text;
           }
private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) {
           this->Close();
         }
};
}
