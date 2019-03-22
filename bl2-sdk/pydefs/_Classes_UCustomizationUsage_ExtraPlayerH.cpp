#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerH(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerH,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerH")
          ;
}