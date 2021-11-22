#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		System::Data::DataSet^ selectionnerToutesLesAdresses(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		void supprimerUnePersonne(int);
		void modifierUnePersonne(int , System::String^ prenom, System::String^ nom );
		
		System::String^ get_nom(int);
		void ajouterUneAdresse(System::String^, System::String^, System::String^, int , int);
	};
}