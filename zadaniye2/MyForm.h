#pragma once
#include <math.h>
#include<string.h>
namespace zadaniye2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(36, 444);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->Location = System::Drawing::Point(288, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(232, 85);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->Enter += gcnew System::EventHandler(this, &MyForm::button2_Enter);
			this->button2->Leave += gcnew System::EventHandler(this, &MyForm::button2_Leave);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(288, 325);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"12";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(288, 362);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"4";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(288, 400);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(232, 22);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label1->Location = System::Drawing::Point(333, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(633, 48);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Вычисление значения функции";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label2->Location = System::Drawing::Point(32, 328);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите значение А";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label3->Location = System::Drawing::Point(32, 365);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите значение Х";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label4->Location = System::Drawing::Point(32, 403);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Значение функции У=";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 71);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(484, 225);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label5->Location = System::Drawing::Point(686, 360);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(207, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Значение функции У=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label6->Location = System::Drawing::Point(686, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Введите значение Х";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label7->Location = System::Drawing::Point(686, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 24);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Введите значение А";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(690, 120);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(517, 136);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(940, 285);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(267, 22);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"6,2";
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(940, 322);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(267, 22);
			this->textBox5->TabIndex = 15;
			this->textBox5->Text = L"-1";
			this->textBox5->Leave += gcnew System::EventHandler(this, &MyForm::textBox5_Leave);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(940, 362);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(267, 22);
			this->textBox6->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button3->Location = System::Drawing::Point(690, 403);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 126);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Расчет";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->Location = System::Drawing::Point(965, 403);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(242, 126);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1350, 582);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Выполнил студент группы 23-КФ Лавров Д. В. Задание 2.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double y, x, a;
	//Проверка, что данные для х и а введены
	if ((textBox1->Text != "") && (textBox2->Text != ""))
	{
		//Преобразование из текста в дробное число х и а
		a = Convert::ToDouble(textBox1->Text);
		x = Convert::ToDouble(textBox2->Text);
		if (x <= 0) { y = sin(x * x + a * x); }
		else
			if (x > 0 && x <= a) { y = 1 - (1 + sqrt(x * x + a * x)) / (exp(sin(x)) * (1 + x)); }
			else
			{
				y = (cos(x * x - a * a) / (sqrt(1 - sin(a - x))) - (1 - sin(a - x)) / (exp(sin(x))));
			};
		//Вывод в компоненте ТextBox3 преобразованного в текст значения у
		textBox3->Text = Convert::ToString(y);
	}
	else
					//Вывод окна с сообщением, если не введены данные в компоненты ТextBox1 и ТextBox2
	{
		MessageBox::Show("Введите пожалуйста данные А и Х", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text; l = str->Length;
	//индекс символа, с которым работаем
	t = 0;
//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное
	if (str[t] == '-')
	{
		t++;
	}
	//число не может начинаться с запятой
	if (str[t] == ',') a = false; while (t < l)
{ if (str[t] == ',')
//если запятая стоит последним символом или запятая уже была найдена
{
	if (t == l - 1 || k > 0) a = false; k++;
}

//если t-ый символ не лежит в диапазоне от '0' до '9'
else if (str[t] < '0' || str[t] > '9') a = false; t++;
}
if (a == false)
{
	MessageBox::Show("параметр А не является числом", "Ошибка ввода данных",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//возврат фокуса текстовому полю
	this->textBox1->Focus();
}
}
private: System::Void button2_Leave(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void button2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double y, x, a;
	//Проверка, что данные для х и а введены
	if ((textBox4->Text != " ") && (textBox5->Text != " "))
	{
		//Преобразование из текста в дробное число х и а
		a = Convert::ToDouble(textBox4->Text);
		x = Convert::ToDouble(textBox5->Text);
		if (x <= 0) { y = sqrt((sin(x)*sin(x))+(cos(x)* cos(x)*cos(x)*cos(x))); }
		else
			if (x > 0 && x <= a) { y = (log(x)*log(x))+sqrt(x); }
			else
			{
				y = tan(x)*tan(x)+sqrt(x);
			};
		//Вывод в компоненте ТextBox6 преобразованного в текст значения у
		textBox6->Text = Convert::ToString(y);
	}
	else
		//Вывод окна с сообщением, если не введены данные в компоненты ТextBox4 и ТextBox5
	{
		MessageBox::Show("Введите пожалуйста данные А и Х", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox4->Text; l = str->Length;
	//индекс символа, с которым работаем
	t = 0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное
	if (str[t] == '-')
	{
		t++;
	}
	//число не может начинаться с запятой
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false; k++;
		}

		//если t-ый символ не лежит в диапазоне от '0' до '9'
		else if (str[t] < '0' || str[t] > '9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox4->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	t = 0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное
	if (str[t] == '-')
	{
		t++;
	}
	//число не может начинаться с запятой
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false; k++;
		}
		//если t-ый символ не лежит в диапазоне от '0' до '9'
		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр Х не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю
		this->textBox2->Focus();
	}
}
private: System::Void textBox5_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox5->Text; l = str->Length;
	//индекс символа, с которым работаем
	t = 0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное
	if (str[t] == '-')
	{
		t++;
	}
	//число не может начинаться с запятой
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false; k++;
		}

		//если t-ый символ не лежит в диапазоне от '0' до '9'
		else if (str[t] < '0' || str[t] > '9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю
		this->textBox5->Focus();
	}
}
};
}
