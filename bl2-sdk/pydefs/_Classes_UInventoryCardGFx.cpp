#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryCardGFx()
{
    class_< UInventoryCardGFx, bases< UObject >  , boost::noncopyable>("UInventoryCardGFx", no_init)
        .def("StaticClass", &UInventoryCardGFx::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateCardPanel", &UInventoryCardGFx::UpdateCardPanel)
        .def("SetMissionItemCard", &UInventoryCardGFx::SetMissionItemCard)
        .def("SetItemCard", &UInventoryCardGFx::SetItemCard)
        .def("SetArtifactCard", &UInventoryCardGFx::SetArtifactCard)
        .def("SetClassModCard", &UInventoryCardGFx::SetClassModCard)
        .def("SetGrenadeModCard", &UInventoryCardGFx::SetGrenadeModCard)
        .def("SetShieldCard", &UInventoryCardGFx::SetShieldCard)
        .def("SetWeaponCard", &UInventoryCardGFx::SetWeaponCard)
        .def("SetInventoryCard", &UInventoryCardGFx::SetInventoryCard)
        .def("SetCardUIStats", &UInventoryCardGFx::SetCardUIStats)
        .staticmethod("StaticClass")
  ;
}