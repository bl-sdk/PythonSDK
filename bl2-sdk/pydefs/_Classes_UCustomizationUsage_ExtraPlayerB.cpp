#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerB(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerB,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerB")
		.def_static("StaticClass", &UCustomizationUsage_ExtraPlayerB::StaticClass, py::return_value_policy::reference)
          ;
}