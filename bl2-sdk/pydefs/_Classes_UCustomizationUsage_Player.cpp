#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Player(py::object m)
{
    py::class_< UCustomizationUsage_Player,  UGBXDefinition   >(m, "UCustomizationUsage_Player")
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
        .def("StaticClass", &UCustomizationUsage_Player::StaticClass, py::return_value_policy::reference)
          ;
}