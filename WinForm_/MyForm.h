#pragma once

namespace WinForm {

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
	private: System::Windows::Forms::Button^ closebut;
	private: System::Windows::Forms::Label^ ResultLable;
	private: System::Windows::Forms::Button^ but_divide;




	private: System::Windows::Forms::Button^ but_minplus;

	private: System::Windows::Forms::Button^ but_AC;

	private: System::Windows::Forms::Button^ but_multy;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ but_min;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ but_sum;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ but_equal;
	private: System::Windows::Forms::Button^ but_dot;



	private: System::Windows::Forms::Button^ button20;
	private:float first_num;
	private:char user_action = ' ';
	private:bool is_equal = false;
	private: System::Windows::Forms::Button^ but_percent;
	protected:

	protected:

	protected:


	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->closebut = (gcnew System::Windows::Forms::Button());
			this->ResultLable = (gcnew System::Windows::Forms::Label());
			this->but_divide = (gcnew System::Windows::Forms::Button());
			this->but_minplus = (gcnew System::Windows::Forms::Button());
			this->but_AC = (gcnew System::Windows::Forms::Button());
			this->but_multy = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->but_min = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->but_sum = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->but_equal = (gcnew System::Windows::Forms::Button());
			this->but_dot = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->but_percent = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// closebut
			// 
			this->closebut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->closebut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closebut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closebut->ForeColor = System::Drawing::Color::Azure;
			this->closebut->Location = System::Drawing::Point(12, 12);
			this->closebut->Name = L"closebut";
			this->closebut->Size = System::Drawing::Size(28, 23);
			this->closebut->TabIndex = 0;
			this->closebut->Text = L"X";
			this->closebut->UseVisualStyleBackColor = false;
			this->closebut->Click += gcnew System::EventHandler(this, &MyForm::closebut_Click);
			// 
			// ResultLable
			// 
			this->ResultLable->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultLable->ForeColor = System::Drawing::Color::White;
			this->ResultLable->Location = System::Drawing::Point(12, 12);
			this->ResultLable->Name = L"ResultLable";
			this->ResultLable->Size = System::Drawing::Size(273, 53);
			this->ResultLable->TabIndex = 1;
			this->ResultLable->Text = L"0";
			this->ResultLable->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// but_divide
			// 
			this->but_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->but_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_divide->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_divide->ForeColor = System::Drawing::Color::White;
			this->but_divide->Location = System::Drawing::Point(220, 68);
			this->but_divide->Name = L"but_divide";
			this->but_divide->Size = System::Drawing::Size(65, 56);
			this->but_divide->TabIndex = 9;
			this->but_divide->Text = L"/";
			this->but_divide->UseVisualStyleBackColor = false;
			this->but_divide->Click += gcnew System::EventHandler(this, &MyForm::but_divide_Click);
			// 
			// but_minplus
			// 
			this->but_minplus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_minplus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_minplus->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_minplus->ForeColor = System::Drawing::Color::White;
			this->but_minplus->Location = System::Drawing::Point(78, 68);
			this->but_minplus->Name = L"but_minplus";
			this->but_minplus->Size = System::Drawing::Size(65, 56);
			this->but_minplus->TabIndex = 7;
			this->but_minplus->Text = L"+/-";
			this->but_minplus->UseVisualStyleBackColor = false;
			this->but_minplus->Click += gcnew System::EventHandler(this, &MyForm::but_minplus_Click);
			// 
			// but_AC
			// 
			this->but_AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_AC->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_AC->ForeColor = System::Drawing::Color::White;
			this->but_AC->Location = System::Drawing::Point(7, 68);
			this->but_AC->Name = L"but_AC";
			this->but_AC->Size = System::Drawing::Size(65, 56);
			this->but_AC->TabIndex = 6;
			this->but_AC->Text = L"AC";
			this->but_AC->UseVisualStyleBackColor = false;
			this->but_AC->Click += gcnew System::EventHandler(this, &MyForm::but_AC_Click);
			// 
			// but_multy
			// 
			this->but_multy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->but_multy->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_multy->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_multy->ForeColor = System::Drawing::Color::White;
			this->but_multy->Location = System::Drawing::Point(220, 139);
			this->but_multy->Name = L"but_multy";
			this->but_multy->Size = System::Drawing::Size(65, 56);
			this->but_multy->TabIndex = 13;
			this->but_multy->Text = L"*";
			this->but_multy->UseVisualStyleBackColor = false;
			this->but_multy->Click += gcnew System::EventHandler(this, &MyForm::but_multy_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(149, 139);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 56);
			this->button6->TabIndex = 12;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(78, 139);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 56);
			this->button7->TabIndex = 11;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(7, 139);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 56);
			this->button8->TabIndex = 10;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// but_min
			// 
			this->but_min->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->but_min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_min->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_min->ForeColor = System::Drawing::Color::White;
			this->but_min->Location = System::Drawing::Point(220, 210);
			this->but_min->Name = L"but_min";
			this->but_min->Size = System::Drawing::Size(65, 56);
			this->but_min->TabIndex = 17;
			this->but_min->Text = L"-";
			this->but_min->UseVisualStyleBackColor = false;
			this->but_min->Click += gcnew System::EventHandler(this, &MyForm::but_min_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(149, 210);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 56);
			this->button10->TabIndex = 16;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(78, 210);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 56);
			this->button11->TabIndex = 15;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(7, 210);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 56);
			this->button12->TabIndex = 14;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// but_sum
			// 
			this->but_sum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->but_sum->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_sum->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_sum->ForeColor = System::Drawing::Color::White;
			this->but_sum->Location = System::Drawing::Point(220, 281);
			this->but_sum->Name = L"but_sum";
			this->but_sum->Size = System::Drawing::Size(65, 56);
			this->but_sum->TabIndex = 21;
			this->but_sum->Text = L"+";
			this->but_sum->UseVisualStyleBackColor = false;
			this->but_sum->Click += gcnew System::EventHandler(this, &MyForm::but_sum_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(149, 281);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 56);
			this->button14->TabIndex = 20;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(78, 281);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 56);
			this->button15->TabIndex = 19;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(7, 281);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 56);
			this->button16->TabIndex = 18;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// but_equal
			// 
			this->but_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->but_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_equal->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_equal->ForeColor = System::Drawing::Color::White;
			this->but_equal->Location = System::Drawing::Point(220, 352);
			this->but_equal->Name = L"but_equal";
			this->but_equal->Size = System::Drawing::Size(65, 56);
			this->but_equal->TabIndex = 25;
			this->but_equal->Text = L"=";
			this->but_equal->UseVisualStyleBackColor = false;
			this->but_equal->Click += gcnew System::EventHandler(this, &MyForm::but_equal_Click);
			// 
			// but_dot
			// 
			this->but_dot->BackColor = System::Drawing::Color::Gray;
			this->but_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_dot->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_dot->ForeColor = System::Drawing::Color::White;
			this->but_dot->Location = System::Drawing::Point(149, 352);
			this->but_dot->Name = L"but_dot";
			this->but_dot->Size = System::Drawing::Size(65, 56);
			this->but_dot->TabIndex = 24;
			this->but_dot->Text = L".";
			this->but_dot->UseVisualStyleBackColor = false;
			this->but_dot->Click += gcnew System::EventHandler(this, &MyForm::but_dot_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gray;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(7, 352);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(136, 56);
			this->button20->TabIndex = 22;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// but_percent
			// 
			this->but_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_percent->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Bold));
			this->but_percent->ForeColor = System::Drawing::Color::White;
			this->but_percent->Location = System::Drawing::Point(149, 68);
			this->but_percent->Name = L"but_percent";
			this->but_percent->Size = System::Drawing::Size(65, 56);
			this->but_percent->TabIndex = 26;
			this->but_percent->Text = L"%";
			this->but_percent->UseVisualStyleBackColor = false;
			this->but_percent->Click += gcnew System::EventHandler(this, &MyForm::but_percent_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(297, 421);
			this->Controls->Add(this->but_percent);
			this->Controls->Add(this->but_equal);
			this->Controls->Add(this->but_dot);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->but_sum);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->but_min);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->but_multy);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->but_divide);
			this->Controls->Add(this->but_minplus);
			this->Controls->Add(this->but_AC);
			this->Controls->Add(this->closebut);
			this->Controls->Add(this->ResultLable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void closebut_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ResultLable->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		

		if (this->ResultLable->Text == "0" || is_equal) {
			this->ResultLable->Text = button->Text;
			is_equal = false;
		}
		else
			this->ResultLable->Text = this->ResultLable->Text + button->Text;

		
	}

	private: System::Void but_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math('/');
	}
	private: System::Void but_multy_Click(System::Object^ sender, System::EventArgs^ e) {
		math('*');
	}
	private: System::Void but_min_Click(System::Object^ sender, System::EventArgs^ e) {
		math('-');
	}
	private: System::Void but_sum_Click(System::Object^ sender, System::EventArgs^ e) {
		math('+');
	}
	private: System::Void but_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math('%');
	}
	private: System::Void math(char action) {
		this->first_num = System::Convert::ToDouble(this->ResultLable->Text);
		this->user_action = action;
		this->ResultLable->Text = "0";
	}
private: System::Void but_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ') return;
	float second = System::Convert::ToDouble(this->ResultLable->Text);
	float res;
	switch (this->user_action) {
	case '+': res = this->first_num + second; break;
	case '-': res = this->first_num - second; break;
	case '%': res = this->first_num * second / 100; break;
	case '/':
		if (second == 0) {
			res = 0;
			this->ResultLable->ForeColor = Color::Red;
			MessageBox::Show(this, "Divide by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = this->first_num / second; break;
	case '*':res = this->first_num * second; break;
	}
	this->is_equal = true;
	this->ResultLable->Text = System::Convert::ToString(res);
	
}
private: System::Void but_AC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ResultLable->Text = "0";
	this->ResultLable->ForeColor = Color::White;
	this->first_num = 0;
	this->user_action = ' ';
	this->is_equal = false;

}
private: System::Void but_minplus_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->ResultLable->Text);
	num *= -1;
	this->ResultLable->Text = System::Convert::ToString(num);
}


private: System::Void but_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->ResultLable->Text;
	if (!text->Contains("."))
		this->ResultLable->Text = text + ".";
}
};
}
