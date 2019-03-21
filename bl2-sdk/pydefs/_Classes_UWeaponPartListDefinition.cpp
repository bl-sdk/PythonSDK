#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponPartListDefinition()
{
    py::class_< UWeaponPartListDefinition,  UGBXDefinition   >("UWeaponPartListDefinition")
        .def_readwrite("VfTable_IIConstructObject", &UWeaponPartListDefinition::VfTable_IIConstructObject)
        .def_readwrite("WeightedParts", &UWeaponPartListDefinition::WeightedParts)
        .def_readwrite("ConsolidatedAttributeInitData", &UWeaponPartListDefinition::ConsolidatedAttributeInitData)
        .def("StaticClass", &UWeaponPartListDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}