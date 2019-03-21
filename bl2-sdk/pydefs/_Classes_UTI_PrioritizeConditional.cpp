#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTI_PrioritizeConditional()
{
    py::class_< UTI_PrioritizeConditional,  UTI_Prioritize   >("UTI_PrioritizeConditional")
        .def_readwrite("Condition", &UTI_PrioritizeConditional::Condition)
        .def("StaticClass", &UTI_PrioritizeConditional::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}