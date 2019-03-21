#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTI_Prioritize()
{
    py::class_< UTI_Prioritize,  UTargetIterator   >("UTI_Prioritize")
        .def_readwrite("Weight", &UTI_Prioritize::Weight)
        .def("StaticClass", &UTI_Prioritize::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}