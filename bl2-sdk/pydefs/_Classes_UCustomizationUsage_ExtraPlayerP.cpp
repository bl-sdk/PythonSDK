#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerP(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerP,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerP")
          ;
}