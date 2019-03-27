#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Mercenary(py::module &m)
{
    py::class_< UCustomizationUsage_Mercenary,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_Mercenary")
		.def_static("StaticClass", &UCustomizationUsage_Mercenary::StaticClass, py::return_value_policy::reference)
          ;
}