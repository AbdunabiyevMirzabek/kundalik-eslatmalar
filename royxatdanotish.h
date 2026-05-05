#pragma once
#include"Login.h"
namespace kundalikeslatmalar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для royxatdanotish
	/// </summary>
	public ref class royxatdanotish : public System::Windows::Forms::Form
	{
	public:
		royxatdanotish(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~royxatdanotish()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
     private: System::Windows::Forms::Button^ buttonShowPass;
	private: System::Windows::Forms::Button^ buttonShowConfirm;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonShowPass = (gcnew System::Windows::Forms::Button());
			this->buttonShowConfirm = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Snow;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->buttonShowPass);
			this->panel1->Controls->Add(this->buttonShowConfirm);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Location = System::Drawing::Point(260, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(435, 430);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(48, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(340, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ro\'yxatdan o\'tish";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &royxatdanotish::button1_Click);
			// 
			// buttonShowPass
			// 
			this->buttonShowPass->FlatAppearance->BorderSize = 0;
			this->buttonShowPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShowPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8));
			this->buttonShowPass->Location = System::Drawing::Point(176, 236);
			this->buttonShowPass->Name = L"buttonShowPass";
			this->buttonShowPass->Size = System::Drawing::Size(28, 22);
			this->buttonShowPass->TabIndex = 5;
			this->buttonShowPass->Text = L"👁";
			this->buttonShowPass->UseVisualStyleBackColor = true;
			this->buttonShowPass->Click += gcnew System::EventHandler(this, &royxatdanotish::buttonShowPass_Click);
			// 
			// buttonShowConfirm
			// 
			this->buttonShowConfirm->FlatAppearance->BorderSize = 0;
			this->buttonShowConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShowConfirm->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8));
			this->buttonShowConfirm->Location = System::Drawing::Point(366, 236);
			this->buttonShowConfirm->Name = L"buttonShowConfirm";
			this->buttonShowConfirm->Size = System::Drawing::Size(28, 22);
			this->buttonShowConfirm->TabIndex = 6;
			this->buttonShowConfirm->Text = L"👁";
			this->buttonShowConfirm->UseVisualStyleBackColor = true;
			this->buttonShowConfirm->Click += gcnew System::EventHandler(this, &royxatdanotish::buttonShowConfirm_Click);
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->ForeColor = System::Drawing::Color::Gray;
			this->textBox4->Location = System::Drawing::Point(212, 236);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 22);
			this->textBox4->TabIndex = 2;
			this->textBox4->Text = L"Parolni tasdiqlang";
			this->textBox4->Enter += gcnew System::EventHandler(this, &royxatdanotish::textBox_Enter);
			this->textBox4->Leave += gcnew System::EventHandler(this, &royxatdanotish::textBox_Leave);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->ForeColor = System::Drawing::Color::Gray;
			this->textBox3->Location = System::Drawing::Point(48, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(127, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Parol";
			this->textBox3->Enter += gcnew System::EventHandler(this, &royxatdanotish::textBox_Enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &royxatdanotish::textBox_Leave);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(48, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(340, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Elektron pochta";
			this->textBox2->Enter += gcnew System::EventHandler(this, &royxatdanotish::textBox_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &royxatdanotish::textBox_Leave);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBox1->Location = System::Drawing::Point(48, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(340, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Foydalanuvchi nomi";
			this->textBox1->Enter += gcnew System::EventHandler(this, &royxatdanotish::textBox_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &royxatdanotish::textBox_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::SlateGray;
			this->label5->Location = System::Drawing::Point(209, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Parolni tasdiqlash";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::SlateGray;
			this->label4->Location = System::Drawing::Point(45, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Parol";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::SlateGray;
			this->label3->Location = System::Drawing::Point(45, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Elektron pochta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SlateGray;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(45, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Foydalanuvchi nomi";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(83, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ro\'yxatdan O\'tish";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(87, 359);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(267, 16);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Allaqachon hisobingiz bormi\? Tizimga kiting";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &royxatdanotish::linkLabel1_LinkClicked);
			// 
			// royxatdanotish
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(955, 542);
			this->Controls->Add(this->panel1);
			this->Name = L"royxatdanotish";
			this->Text = L"royxatdanotish";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_Enter(System::Object^ sender, System::EventArgs^ e) {
	TextBox^ tb = safe_cast<TextBox^>(sender);
	if (tb->ForeColor == System::Drawing::Color::Gray) {
		tb->Text = L"";
		tb->ForeColor = System::Drawing::Color::Black;
		if (tb == this->textBox3 || tb == this->textBox4) {
			tb->UseSystemPasswordChar = true;
		}
	}
}
private: System::Void textBox_Leave(System::Object^ sender, System::EventArgs^ e) {
	TextBox^ tb = safe_cast<TextBox^>(sender);
	if (String::IsNullOrWhiteSpace(tb->Text)) {
		tb->ForeColor = System::Drawing::Color::Gray;
		if (tb == this->textBox1) tb->Text = L"Foydalanuvchi nomi";
		else if (tb == this->textBox2) tb->Text = L"Elektron pochta";
		else if (tb == this->textBox3) { tb->UseSystemPasswordChar = false; tb->Text = L"Parol"; }
		else if (tb == this->textBox4) { tb->UseSystemPasswordChar = false; tb->Text = L"Parolni tasdiqlang"; }
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Simple validation example
	if (this->textBox1->ForeColor == System::Drawing::Color::Gray || String::IsNullOrWhiteSpace(this->textBox1->Text)) {
		MessageBox::Show(L"Foydalanuvchi nomini kiriting", L"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (this->textBox2->ForeColor == System::Drawing::Color::Gray || String::IsNullOrWhiteSpace(this->textBox2->Text)) {
		MessageBox::Show(L"Email kiriting", L"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (this->textBox3->ForeColor == System::Drawing::Color::Gray || String::IsNullOrWhiteSpace(this->textBox3->Text)) {
		MessageBox::Show(L"Parol kiriting", L"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (this->textBox4->Text != this->textBox3->Text) {
		MessageBox::Show(L"Parollar mos emas", L"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	// 1. Connection string (Ulanish manzili)
// Server Explorer orqali .mdf faylingiz ustiga bosib 'Properties'dan 'Connection String'ni nusxalab oling
	// 1. Manzilni to'g'ri shaklda yozamiz (ikkitalik slesh bilan)
	// 1. Siz bergan manzilni o'zgaruvchiga olamiz
	String^ dbPath = L"C:\\Users\\ibroh\\source\\repos\\kundalik eslatmalar\\kundalik eslatmalar\\database.mdf";

	// 2. Ulanish satri (Initial Catalog qo'shilgan, bu ulanishni barqaror qiladi)
	String^ connString = L"Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=\"" + dbPath + "\";Initial Catalog=LoyihaDB;Integrated Security=True;Connect Timeout=30";

	try {
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		// 3. SQL so'rovi (Id IDENTITY bo'lgani uchun uni kiritmaymiz)
		String^ sqlQuery = "INSERT INTO Foydalanuvchilar (Login, Password) VALUES (@user, @pass);";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

		// Parametrlarni bog'lash
		command->Parameters->AddWithValue("@user", this->textBox1->Text);
		command->Parameters->AddWithValue("@pass", this->textBox3->Text);

		// 4. Bazani ochish va bajarish
		sqlConn->Open();
		command->ExecuteNonQuery();
		sqlConn->Close();

		MessageBox::Show(L"Ma'lumotlar bazaga muvaffaqiyatli saqlandi!", L"Muvaffaqiyat", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		// Xatolik xabarini to'liq ko'rsatish
		MessageBox::Show(L"Xatolik yuz berdi: " + ex->Message, L"Xato", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
{
	Login^ form2 = gcnew Login(this);
	this->Hide();
	form2->ShowDialog();

}

private: System::Void buttonShowPass_Click(System::Object^ sender, System::EventArgs^ e) {
	// toggle password visibility for textBox3
	if (this->textBox3->UseSystemPasswordChar) {
		this->textBox3->UseSystemPasswordChar = false;
		this->buttonShowPass->Text = L"👁";
	}
	else {
		// if it's placeholder, keep not masked
		if (this->textBox3->ForeColor == System::Drawing::Color::Gray) {
			this->textBox3->UseSystemPasswordChar = false;
		}
		else {
			this->textBox3->UseSystemPasswordChar = true;
		}
		this->buttonShowPass->Text = L"👁";
	}
}

private: System::Void buttonShowConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox4->UseSystemPasswordChar) {
		this->textBox4->UseSystemPasswordChar = false;
		this->buttonShowConfirm->Text = L"👁";
	}
	else {
		if (this->textBox4->ForeColor == System::Drawing::Color::Gray) {
			this->textBox4->UseSystemPasswordChar = false;
		}
		else {
			this->textBox4->UseSystemPasswordChar = true;
		}
		this->buttonShowConfirm->Text = L"👁";
	}
}
};
}
