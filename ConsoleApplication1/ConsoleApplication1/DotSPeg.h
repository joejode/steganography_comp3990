#pragma once
#include <msclr\marshal_cppstd.h>
#include <bitset>
namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DotSPeg
	/// </summary>
	public ref class DotSPeg : public System::Windows::Forms::Form
	{
	public:
		DotSPeg(void)
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
		~DotSPeg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  origImg;
	protected:

	private: System::Windows::Forms::Button^  convertMsg2Bin;
	protected:

	private: System::Windows::Forms::TextBox^  inputSecretMsg;
	private: System::Windows::Forms::Label^  origImgLbl;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  secretMsgBin;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  encodeMsg;













	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  exMsg;
	private: System::Windows::Forms::Button^  convExMsg2Str;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  exMsgBinLbl;
	private: System::Windows::Forms::Label^  stegoImg;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  nVal;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DotSPeg::typeid));
			this->origImg = (gcnew System::Windows::Forms::PictureBox());
			this->convertMsg2Bin = (gcnew System::Windows::Forms::Button());
			this->inputSecretMsg = (gcnew System::Windows::Forms::TextBox());
			this->origImgLbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->secretMsgBin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->encodeMsg = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nVal = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->exMsg = (gcnew System::Windows::Forms::Label());
			this->convExMsg2Str = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->exMsgBinLbl = (gcnew System::Windows::Forms::Label());
			this->stegoImg = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->origImg))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nVal))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// origImg
			// 
			this->origImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"origImg.Image")));
			this->origImg->Location = System::Drawing::Point(22, 63);
			this->origImg->Name = L"origImg";
			this->origImg->Size = System::Drawing::Size(256, 256);
			this->origImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->origImg->TabIndex = 0;
			this->origImg->TabStop = false;
			// 
			// convertMsg2Bin
			// 
			this->convertMsg2Bin->Location = System::Drawing::Point(569, 163);
			this->convertMsg2Bin->Name = L"convertMsg2Bin";
			this->convertMsg2Bin->Size = System::Drawing::Size(75, 38);
			this->convertMsg2Bin->TabIndex = 1;
			this->convertMsg2Bin->Text = L"Convert to Binary";
			this->convertMsg2Bin->UseVisualStyleBackColor = true;
			this->convertMsg2Bin->Click += gcnew System::EventHandler(this, &DotSPeg::convertMsg2Bin_Click);
			// 
			// inputSecretMsg
			// 
			this->inputSecretMsg->Location = System::Drawing::Point(343, 154);
			this->inputSecretMsg->Multiline = true;
			this->inputSecretMsg->Name = L"inputSecretMsg";
			this->inputSecretMsg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->inputSecretMsg->Size = System::Drawing::Size(205, 55);
			this->inputSecretMsg->TabIndex = 2;
			// 
			// origImgLbl
			// 
			this->origImgLbl->AutoSize = true;
			this->origImgLbl->Location = System::Drawing::Point(19, 47);
			this->origImgLbl->Name = L"origImgLbl";
			this->origImgLbl->Size = System::Drawing::Size(74, 13);
			this->origImgLbl->TabIndex = 3;
			this->origImgLbl->Text = L"Original Image";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(340, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Input Secret Message:";
			// 
			// secretMsgBin
			// 
			this->secretMsgBin->Location = System::Drawing::Point(343, 229);
			this->secretMsgBin->Multiline = true;
			this->secretMsgBin->Name = L"secretMsgBin";
			this->secretMsgBin->ReadOnly = true;
			this->secretMsgBin->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->secretMsgBin->Size = System::Drawing::Size(205, 90);
			this->secretMsgBin->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(340, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Secret Message in Binary:";
			// 
			// encodeMsg
			// 
			this->encodeMsg->Location = System::Drawing::Point(569, 257);
			this->encodeMsg->Name = L"encodeMsg";
			this->encodeMsg->Size = System::Drawing::Size(75, 37);
			this->encodeMsg->TabIndex = 7;
			this->encodeMsg->Text = L"Encode Message";
			this->encodeMsg->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(687, 355);
			this->tabControl1->TabIndex = 17;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->nVal);
			this->tabPage1->Controls->Add(this->encodeMsg);
			this->tabPage1->Controls->Add(this->secretMsgBin);
			this->tabPage1->Controls->Add(this->convertMsg2Bin);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->inputSecretMsg);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->origImg);
			this->tabPage1->Controls->Add(this->origImgLbl);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(679, 329);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Encode Message";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(340, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Select Encoding Option:";
			// 
			// nVal
			// 
			this->nVal->Location = System::Drawing::Point(468, 87);
			this->nVal->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->nVal->Name = L"nVal";
			this->nVal->Size = System::Drawing::Size(120, 20);
			this->nVal->TabIndex = 8;
			this->nVal->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->exMsg);
			this->tabPage2->Controls->Add(this->convExMsg2Str);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->exMsgBinLbl);
			this->tabPage2->Controls->Add(this->stegoImg);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(679, 329);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Decode Message";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// exMsg
			// 
			this->exMsg->AutoSize = true;
			this->exMsg->Location = System::Drawing::Point(397, 212);
			this->exMsg->Name = L"exMsg";
			this->exMsg->Size = System::Drawing::Size(101, 13);
			this->exMsg->TabIndex = 20;
			this->exMsg->Text = L"Extracted Message:";
			// 
			// convExMsg2Str
			// 
			this->convExMsg2Str->Location = System::Drawing::Point(297, 228);
			this->convExMsg2Str->Name = L"convExMsg2Str";
			this->convExMsg2Str->Size = System::Drawing::Size(75, 55);
			this->convExMsg2Str->TabIndex = 9;
			this->convExMsg2Str->Text = L"Convert from Binary";
			this->convExMsg2Str->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(400, 228);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(205, 90);
			this->textBox3->TabIndex = 19;
			// 
			// exMsgBinLbl
			// 
			this->exMsgBinLbl->AutoSize = true;
			this->exMsgBinLbl->Location = System::Drawing::Point(397, 127);
			this->exMsgBinLbl->Name = L"exMsgBinLbl";
			this->exMsgBinLbl->Size = System::Drawing::Size(144, 13);
			this->exMsgBinLbl->TabIndex = 18;
			this->exMsgBinLbl->Text = L"Extracted Message in Binary:";
			// 
			// stegoImg
			// 
			this->stegoImg->AutoSize = true;
			this->stegoImg->Location = System::Drawing::Point(18, 46);
			this->stegoImg->Name = L"stegoImg";
			this->stegoImg->Size = System::Drawing::Size(82, 13);
			this->stegoImg->TabIndex = 17;
			this->stegoImg->Text = L"Encoded Image";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(400, 143);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(205, 55);
			this->textBox4->TabIndex = 16;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(21, 62);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(256, 256);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(297, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 55);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Decode Secret Message";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// DotSPeg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 358);
			this->Controls->Add(this->tabControl1);
			this->Name = L"DotSPeg";
			this->Text = L"DotSPeg";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->origImg))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nVal))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void convertMsg2Bin_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ msg;
	msg = inputSecretMsg->Text;

	std::string unmanaged = msclr::interop::marshal_as<std::string>(msg);

	std::string msgBinVal;
	for (std::size_t i = 0; i < unmanaged.size(); ++i)
	{
		std::bitset<7> b(unmanaged.c_str()[i]);
		msgBinVal += b.to_string();
	}

	String^ binOut = gcnew String(msgBinVal.c_str());
	secretMsgBin->Text = binOut;

}
};
}
