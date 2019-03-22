#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Siren(py::module &m)
{
    py::class_< UCustomizationUsage_Siren,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_Siren")
          ;
}