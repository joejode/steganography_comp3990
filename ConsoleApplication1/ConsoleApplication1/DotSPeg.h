#pragma once
#include <msclr\marshal_cppstd.h>
#include <bitset>
#include <string.h>
#include <iostream>
#include <fstream>
#include "Header.h"

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
	private: System::Windows::Forms::PictureBox^  lena;
	protected:

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
	private: System::Windows::Forms::Label^  exMsgLbl;


	private: System::Windows::Forms::Button^  convExMsg2Str;
	private: System::Windows::Forms::TextBox^  exMsg;

	private: System::Windows::Forms::Label^  exMsgBinLbl;
	private: System::Windows::Forms::Label^  stegoImg;
	private: System::Windows::Forms::TextBox^  exBinMsg;

	private: System::Windows::Forms::PictureBox^  encodedImg;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  nVal;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  boats;
	private: System::Windows::Forms::PictureBox^  couple;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::Windows::Forms::TextBox^  sImgFileName;
	private: System::Windows::Forms::Button^  loadSImg;

	private: System::Windows::Forms::ToolTip^  toolTip1;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DotSPeg::typeid));
			this->lena = (gcnew System::Windows::Forms::PictureBox());
			this->convertMsg2Bin = (gcnew System::Windows::Forms::Button());
			this->inputSecretMsg = (gcnew System::Windows::Forms::TextBox());
			this->origImgLbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->secretMsgBin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->encodeMsg = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->couple = (gcnew System::Windows::Forms::PictureBox());
			this->boats = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nVal = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->sImgFileName = (gcnew System::Windows::Forms::TextBox());
			this->loadSImg = (gcnew System::Windows::Forms::Button());
			this->exMsgLbl = (gcnew System::Windows::Forms::Label());
			this->convExMsg2Str = (gcnew System::Windows::Forms::Button());
			this->exMsg = (gcnew System::Windows::Forms::TextBox());
			this->exMsgBinLbl = (gcnew System::Windows::Forms::Label());
			this->stegoImg = (gcnew System::Windows::Forms::Label());
			this->exBinMsg = (gcnew System::Windows::Forms::TextBox());
			this->encodedImg = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lena))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->couple))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boats))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nVal))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->encodedImg))->BeginInit();
			this->SuspendLayout();
			// 
			// lena
			// 
			this->lena->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lena.Image")));
			this->lena->Location = System::Drawing::Point(22, 63);
			this->lena->Name = L"lena";
			this->lena->Size = System::Drawing::Size(256, 256);
			this->lena->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->lena->TabIndex = 0;
			this->lena->TabStop = false;
			this->lena->Visible = false;
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
			this->origImgLbl->Location = System::Drawing::Point(95, 18);
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
			this->encodeMsg->Click += gcnew System::EventHandler(this, &DotSPeg::encodeMsg_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(687, 357);
			this->tabControl1->TabIndex = 17;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->couple);
			this->tabPage1->Controls->Add(this->boats);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->nVal);
			this->tabPage1->Controls->Add(this->encodeMsg);
			this->tabPage1->Controls->Add(this->secretMsgBin);
			this->tabPage1->Controls->Add(this->convertMsg2Bin);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->inputSecretMsg);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->lena);
			this->tabPage1->Controls->Add(this->origImgLbl);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(679, 331);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Encode Message";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// couple
			// 
			this->couple->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"couple.Image")));
			this->couple->Location = System::Drawing::Point(22, 63);
			this->couple->Name = L"couple";
			this->couple->Size = System::Drawing::Size(256, 256);
			this->couple->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->couple->TabIndex = 12;
			this->couple->TabStop = false;
			this->couple->Visible = false;
			// 
			// boats
			// 
			this->boats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boats.Image")));
			this->boats->Location = System::Drawing::Point(22, 63);
			this->boats->Name = L"boats";
			this->boats->Size = System::Drawing::Size(256, 256);
			this->boats->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->boats->TabIndex = 11;
			this->boats->TabStop = false;
			this->boats->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Boats", L"Couple", L"Lena" });
			this->comboBox1->Location = System::Drawing::Point(22, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(256, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"Choose Image";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DotSPeg::comboBox1_SelectedIndexChanged);
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
			this->nVal->ValueChanged += gcnew System::EventHandler(this, &DotSPeg::nVal_ValueChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->sImgFileName);
			this->tabPage2->Controls->Add(this->loadSImg);
			this->tabPage2->Controls->Add(this->exMsgLbl);
			this->tabPage2->Controls->Add(this->convExMsg2Str);
			this->tabPage2->Controls->Add(this->exMsg);
			this->tabPage2->Controls->Add(this->exMsgBinLbl);
			this->tabPage2->Controls->Add(this->stegoImg);
			this->tabPage2->Controls->Add(this->exBinMsg);
			this->tabPage2->Controls->Add(this->encodedImg);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(679, 331);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Decode Message";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// sImgFileName
			// 
			this->sImgFileName->Location = System::Drawing::Point(21, 36);
			this->sImgFileName->Multiline = true;
			this->sImgFileName->Name = L"sImgFileName";
			this->sImgFileName->Size = System::Drawing::Size(179, 20);
			this->sImgFileName->TabIndex = 24;
			this->sImgFileName->Text = L"Select Image...";
			// 
			// loadSImg
			// 
			this->loadSImg->Location = System::Drawing::Point(199, 35);
			this->loadSImg->Name = L"loadSImg";
			this->loadSImg->Size = System::Drawing::Size(78, 23);
			this->loadSImg->TabIndex = 23;
			this->loadSImg->Text = L"Select Image";
			this->loadSImg->UseVisualStyleBackColor = true;
			this->loadSImg->Click += gcnew System::EventHandler(this, &DotSPeg::loadSImg_Click);
			// 
			// exMsgLbl
			// 
			this->exMsgLbl->AutoSize = true;
			this->exMsgLbl->Location = System::Drawing::Point(397, 212);
			this->exMsgLbl->Name = L"exMsgLbl";
			this->exMsgLbl->Size = System::Drawing::Size(101, 13);
			this->exMsgLbl->TabIndex = 20;
			this->exMsgLbl->Text = L"Extracted Message:";
			// 
			// convExMsg2Str
			// 
			this->convExMsg2Str->Location = System::Drawing::Point(297, 228);
			this->convExMsg2Str->Name = L"convExMsg2Str";
			this->convExMsg2Str->Size = System::Drawing::Size(75, 55);
			this->convExMsg2Str->TabIndex = 9;
			this->convExMsg2Str->Text = L"Convert from Binary";
			this->convExMsg2Str->UseVisualStyleBackColor = true;
			this->convExMsg2Str->Click += gcnew System::EventHandler(this, &DotSPeg::convExMsg2Str_Click);
			// 
			// exMsg
			// 
			this->exMsg->Location = System::Drawing::Point(400, 228);
			this->exMsg->Multiline = true;
			this->exMsg->Name = L"exMsg";
			this->exMsg->ReadOnly = true;
			this->exMsg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->exMsg->Size = System::Drawing::Size(205, 90);
			this->exMsg->TabIndex = 19;
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
			this->stegoImg->Location = System::Drawing::Point(95, 18);
			this->stegoImg->Name = L"stegoImg";
			this->stegoImg->Size = System::Drawing::Size(82, 13);
			this->stegoImg->TabIndex = 17;
			this->stegoImg->Text = L"Encoded Image";
			// 
			// exBinMsg
			// 
			this->exBinMsg->Location = System::Drawing::Point(400, 143);
			this->exBinMsg->Multiline = true;
			this->exBinMsg->Name = L"exBinMsg";
			this->exBinMsg->ReadOnly = true;
			this->exBinMsg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->exBinMsg->Size = System::Drawing::Size(205, 55);
			this->exBinMsg->TabIndex = 16;
			this->exBinMsg->Text = L"100100011001011101100110110011011110100000110100011011111110111010000011000011110"
				L"010110010101000001111001110111111101010111111";
			// 
			// encodedImg
			// 
			this->encodedImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"encodedImg.Image")));
			this->encodedImg->Location = System::Drawing::Point(21, 62);
			this->encodedImg->Name = L"encodedImg";
			this->encodedImg->Size = System::Drawing::Size(256, 256);
			this->encodedImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->encodedImg->TabIndex = 15;
			this->encodedImg->TabStop = false;
			this->encodedImg->Visible = false;
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
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"boat.png");
			this->imageList1->Images->SetKeyName(1, L"couple.png");
			this->imageList1->Images->SetKeyName(2, L"lena512.bmp");
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"EncodedImage";
			this->openFileDialog1->Filter = L"\" (*.bmp;*.gif;*.jpg;*tif;*.png)|*.bmp;*gif;*.jpg;*.tif;*.png)\"";
			this->openFileDialog1->InitialDirectory = L"S\"C:\\\\\";";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"(*.bmp;*.gif;*.jpg;*.tif;*.png|*.bmp;*.gif;*.jpg;*.tif;*.png)";
			// 
			// DotSPeg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 360);
			this->Controls->Add(this->tabControl1);
			this->Name = L"DotSPeg";
			this->Text = L"DotSPeg";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lena))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->couple))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boats))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nVal))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->encodedImg))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Variables used :
		char *vq;
		FILE *vqIndex;
		int N;
private: System::Void convertMsg2Bin_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ msg;
	msg = inputSecretMsg->Text;

	std::string msgStr = msclr::interop::marshal_as<std::string>(msg);

	std::string msgBinVal;
	for (std::size_t i = 0; i < msgStr.size(); ++i)
	{
		std::bitset<7> b(msgStr.c_str()[i]);
		msgBinVal += b.to_string();
	}

	String^ binOut = gcnew String(msgBinVal.c_str());
	secretMsgBin->Text = binOut;

}

private: System::Void convExMsg2Str_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ binMsg;
	unsigned k = 0;
	int binVal[7];
	int decVal;
	std::string msg;

	binMsg = exBinMsg->Text;
	std::string binMsgStr = msclr::interop::marshal_as<std::string>(binMsg);
	while (k < binMsgStr.size())
	{
		for (int bitCnt = 6; bitCnt >= 0; bitCnt--)
		{
			if (binMsgStr.at(k) == '1')
			{
				binVal[bitCnt] = 1;
			}
			else if (binMsgStr.at(k) == '0')
			{
				binVal[bitCnt] = 0;
			}
			k++;
		}
		

		decVal = getDec(binVal,7);
		char letter = decVal;
		msg += letter;
	}

	String ^msgOut = gcnew String(msg.c_str());
	exMsg->Text = msgOut;
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedItem == "Boats")
	{
		boats->Visible = true;
		couple->Visible = false;
		lena->Visible = false;
		//strcpy(vq, "256\\ITtxt\\BoatsIT.txt");

	}
	if (comboBox1->SelectedItem == "Couple")
	{
		boats->Visible = false;
		couple->Visible = true;
		lena->Visible = false;
	}
	if (comboBox1->SelectedItem == "Lena")
	{
		boats->Visible = false;
		couple->Visible = false;
		lena->Visible = true;
	}
}

private: System::Void loadSImg_Click(System::Object^  sender, System::EventArgs^  e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		encodedImg->Image = Image::FromFile(openFileDialog1->FileName);
		sImgFileName->Text = openFileDialog1->FileName;
		encodedImg->Visible = true;
	}
}

private: System::Void encodeMsg_Click(System::Object^  sender, System::EventArgs^  e) {
	N = static_cast<int>(nVal->Value);
}
};
}
