#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerC(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerC,  UGBXDefinition   >(m, "UCustomizationUsage_ExtraPlayerC")
		.def_static("StaticClass", &UCustomizationUsage_ExtraPlayerC::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
          ;
}