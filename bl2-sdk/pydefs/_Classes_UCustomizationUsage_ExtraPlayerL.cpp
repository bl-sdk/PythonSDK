#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerL(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerL,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerL")
          ;
}