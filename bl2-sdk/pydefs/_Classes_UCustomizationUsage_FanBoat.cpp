#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_FanBoat(py::module &m)
{
    py::class_< UCustomizationUsage_FanBoat,  UCustomizationUsage   >(m, "UCustomizationUsage_FanBoat")
          ;
}