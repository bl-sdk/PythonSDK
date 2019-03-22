#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTI_PrioritizeBonus(py::module &m)
{
    py::class_< UTI_PrioritizeBonus,  UTI_Prioritize   >(m, "UTI_PrioritizeBonus")
          ;
}