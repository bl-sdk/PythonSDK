#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerI(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerI,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerI")
		.def_static("StaticClass", &UCustomizationUsage_ExtraPlayerI::StaticClass, py::return_value_policy::reference)
          ;
}