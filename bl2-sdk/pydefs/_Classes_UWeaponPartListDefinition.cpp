#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponPartListDefinition(py::module &m)
{
    py::class_< UWeaponPartListDefinition,  UGBXDefinition   >(m, "UWeaponPartListDefinition")
        .def_readwrite("VfTable_IIConstructObject", &UWeaponPartListDefinition::VfTable_IIConstructObject)
        .def_readwrite("WeightedParts", &UWeaponPartListDefinition::WeightedParts)
        .def_readwrite("ConsolidatedAttributeInitData", &UWeaponPartListDefinition::ConsolidatedAttributeInitData)
          ;
}