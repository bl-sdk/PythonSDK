#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTI_PrioritizeBonus()
{
    py::class_< UTI_PrioritizeBonus,  UTI_Prioritize   >("UTI_PrioritizeBonus")
        .def("StaticClass", &UTI_PrioritizeBonus::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}