#pragma once
#include "Metric.h"
#include <msclr\marshal_cppstd.h>

using namespace std;

namespace UnitConverter {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ darkModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxFrom;
	private: System::Windows::Forms::TextBox^ textBoxTo;









	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBoxFrom;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBoxTo;
	private: System::Windows::Forms::Button^ buttonMetric;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ buttonConvert;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxFrom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTo = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBoxFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTo = (gcnew System::Windows::Forms::ComboBox());
			this->buttonMetric = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->buttonConvert = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(127, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Unit Convertor";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(500, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// aToolStripMenuItem
			// 
			this->aToolStripMenuItem->Name = L"aToolStripMenuItem";
			this->aToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aToolStripMenuItem->Text = L"About";
			this->aToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->darkModeToolStripMenuItem });
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// darkModeToolStripMenuItem
			// 
			this->darkModeToolStripMenuItem->Name = L"darkModeToolStripMenuItem";
			this->darkModeToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->darkModeToolStripMenuItem->Text = L"Dark Mode";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// textBoxFrom
			// 
			this->textBoxFrom->Location = System::Drawing::Point(16, 125);
			this->textBoxFrom->Name = L"textBoxFrom";
			this->textBoxFrom->Size = System::Drawing::Size(130, 20);
			this->textBoxFrom->TabIndex = 2;
			this->textBoxFrom->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBoxTo
			// 
			this->textBoxTo->Location = System::Drawing::Point(358, 125);
			this->textBoxTo->Name = L"textBoxTo";
			this->textBoxTo->Size = System::Drawing::Size(130, 20);
			this->textBoxTo->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(388, 463);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 25);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// comboBoxFrom
			// 
			this->comboBoxFrom->FormattingEnabled = true;
			this->comboBoxFrom->Location = System::Drawing::Point(16, 151);
			this->comboBoxFrom->Name = L"comboBoxFrom";
			this->comboBoxFrom->Size = System::Drawing::Size(121, 21);
			this->comboBoxFrom->TabIndex = 12;
			this->comboBoxFrom->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 23);
			this->label4->TabIndex = 13;
			this->label4->Text = L"From:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(354, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 23);
			this->label5->TabIndex = 15;
			this->label5->Text = L"To:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click_1);
			// 
			// comboBoxTo
			// 
			this->comboBoxTo->FormattingEnabled = true;
			this->comboBoxTo->Location = System::Drawing::Point(358, 151);
			this->comboBoxTo->Name = L"comboBoxTo";
			this->comboBoxTo->Size = System::Drawing::Size(121, 21);
			this->comboBoxTo->TabIndex = 14;
			this->comboBoxTo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// buttonMetric
			// 
			this->buttonMetric->Location = System::Drawing::Point(16, 178);
			this->buttonMetric->Name = L"buttonMetric";
			this->buttonMetric->Size = System::Drawing::Size(75, 35);
			this->buttonMetric->TabIndex = 16;
			this->buttonMetric->Text = L"Metric";
			this->buttonMetric->UseVisualStyleBackColor = true;
			this->buttonMetric->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			// 
			// buttonConvert
			// 
			this->buttonConvert->Location = System::Drawing::Point(218, 125);
			this->buttonConvert->Name = L"buttonConvert";
			this->buttonConvert->Size = System::Drawing::Size(75, 35);
			this->buttonConvert->TabIndex = 17;
			this->buttonConvert->Text = L"Convert";
			this->buttonConvert->UseVisualStyleBackColor = true;
			this->buttonConvert->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 500);
			this->Controls->Add(this->buttonConvert);
			this->Controls->Add(this->buttonMetric);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBoxTo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBoxFrom);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBoxTo);
			this->Controls->Add(this->textBoxFrom);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void aToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Metric metric;
	std::vector<std::string> list = metric.getList();
	for (int i = 0; i < list.size(); i++) {
		String^ newSystemString = gcnew String(list[i].c_str());
		comboBoxFrom->Items->Add(newSystemString);
		comboBoxTo->Items->Add(newSystemString);
	}
	this->buttonConvert->Tag = L"Metric";
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	/*String^ tag = gcnew String(this->buttonConvert->Tag->ToString());
	if (tag->CompareTo("Metric"))
	{*/
	Metric metric;
	String^ i1 = textBoxFrom->Text;
	//try {
		float input = (float)(Convert::ToDouble(i1));
	//}
	//catch (FormatException) {
		// handle format error exception here
	//}
	//catch (OverflowException) {
		// handle overflow exception here
	//}
		std::string stringPart = "ABC";
		int intPart = input;
		String^ msg = String::Concat("Message", msclr::interop::marshal_as<System::String^>(stringPart));
		msg = String::Concat(msg, intPart);
		MessageBox::Show(msg);
		metric.setNum(input);
		msclr::interop::marshal_context context;
		std::string source = context.marshal_as<std::string>(this->comboBoxFrom->Text);
		std::string dest = context.marshal_as<std::string>(this->comboBoxTo->Text);
		metric.convert(source, dest, metric.getNum());
		textBoxTo->Text = (String^)(Convert::ToString(metric.convert(source, dest, metric.getNum())));
		
		
		
	}
};
}
