#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerC(py::object m)
{
    py::class_< UCustomizationUsage_ExtraPlayerC,  UGBXDefinition   >(m, "UCustomizationUsage_ExtraPlayerC")
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerC::StaticClass, py::return_value_policy::reference)
          ;
}