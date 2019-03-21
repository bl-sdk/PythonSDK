#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryCardGFx()
{
    py::class_< UInventoryCardGFx,  UObject   >("UInventoryCardGFx")
        .def("StaticClass", &UInventoryCardGFx::StaticClass, py::return_value_policy::reference)
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