#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Siren(py::module &m)
{
    py::class_< UCustomizationUsage_Siren,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_Siren")
		.def_static("StaticClass", &UCustomizationUsage_Siren::StaticClass, py::return_value_policy::reference)
          ;
}