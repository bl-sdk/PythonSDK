#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Player(py::module &m)
{
    py::class_< UCustomizationUsage_Player,  UGBXDefinition   >(m, "UCustomizationUsage_Player")
		.def_static("StaticClass", &UCustomizationUsage_Player::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
          ;
}