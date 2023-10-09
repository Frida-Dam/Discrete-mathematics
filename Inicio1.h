#pragma once
#include "Indicaciones.h"
#include "Matriz.h";
#include "Autora.h";


namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Inicio1
	/// </summary>
	public ref class Inicio1 : public System::Windows::Forms::Form
	{
	public:
		Inicio1(void)
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
		~Inicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lavender;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(105, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Arequipa";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Inicio1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lavender;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(412, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Lima";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lavender;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(738, 291);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(184, 100);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Tacna";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Inicio1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(738, 478);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 54);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Autora";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Inicio1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Rockwell", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(314, 159);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(377, 58);
			this->button5->TabIndex = 4;
			this->button5->Text = L"¿Como funciona\?";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Inicio1::button5_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(262, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 86);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Weather Wizard";
			this->label1->Click += gcnew System::EventHandler(this, &Inicio1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(360, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Selecciona una ciudad de Perú";
			this->label2->Click += gcnew System::EventHandler(this, &Inicio1::label2_Click);
			// 
			// pictureBox1
			// 
			//this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(785, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(195, 194);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Inicio1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			//this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-10, 358);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(681, 362);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Inicio1::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			//this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(2, 55);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(329, 228);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			// 
			// Inicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1053, 568);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"Inicio1";
			this->Text = L"Inicio1";
			this->Load += gcnew System::EventHandler(this, &Inicio1::Inicio1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Inicio1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		asignar();
		imprimir();
		Nclimas();
		ClimaSiguiente();
		MatrizPorbabilidad();
		ImprimirMatrizProbabilidad();
		VectorIni();
		ImprimirVectorIni();
		PorbUno();
		ImprimirPorbUno();
		MatrizDiaDos();
		ImprimirMatrizDos();
		MatrizDiaTres();
		ImprimirMatrizTres();
		MatrizDiaCuatro();
		ImprimirMatrizCuatro();
		LimpiarArr();

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		asignar();
		imprimir();
		Nclimas();
		ClimaSiguiente();
		MatrizPorbabilidad();
		ImprimirMatrizProbabilidad();
		VectorIni();
		ImprimirVectorIni();
		PorbUno();
		ImprimirPorbUno();
		MatrizDiaDos();
		ImprimirMatrizDos();
		MatrizDiaTres();
		ImprimirMatrizTres();
		MatrizDiaCuatro();
		ImprimirMatrizCuatro();
		LimpiarArr();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		asignar();
		imprimir();
		Nclimas();
		ClimaSiguiente();
		MatrizPorbabilidad();
		ImprimirMatrizProbabilidad();
		VectorIni();
		ImprimirVectorIni();
		PorbUno();
		ImprimirPorbUno();
		MatrizDiaDos();
		ImprimirMatrizDos();
		MatrizDiaTres();
		ImprimirMatrizTres();
		MatrizDiaCuatro();
		ImprimirMatrizCuatro();
		LimpiarArr();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Autora^ form2 = gcnew Autora();
		form2->Show();
	}
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			   Indicaciones^ form3 = gcnew Indicaciones();
			   form3->Show();
		   }
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
};