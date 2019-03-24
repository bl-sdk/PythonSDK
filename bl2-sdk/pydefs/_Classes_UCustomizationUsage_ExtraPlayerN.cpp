#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerN(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerN,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerN")
		.def_static("StaticClass", &UCustomizationUsage_ExtraPlayerN::StaticClass, py::return_value_policy::reference)
          ;
}