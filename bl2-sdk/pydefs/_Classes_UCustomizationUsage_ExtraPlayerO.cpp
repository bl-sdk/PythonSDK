#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerO(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerO,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerO")
          ;
}