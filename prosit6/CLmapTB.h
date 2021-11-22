#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ adresse;
		System::String^ ville;
		System::String^ CP;
		int idAdr;
		int idClientAdr;

	public:
		System::String^ Select(void);
		System::String^ SelectAdr(void);
		System::String^ InsertPersonne(void);
		System::String^ InsertAdresse(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setVille(System::String^);
		void setAdresse(System::String^);
		void setCP(System::String^);
		void setIdClientAdr(int);
		void setIdAdr(int);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ updateNom(void);
	};
}
