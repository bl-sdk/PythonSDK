#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpFilter()
{
    py::class_< UInterpFilter,  UObject   >("UInterpFilter")
        .def_readwrite("Caption", &UInterpFilter::Caption)
        .def("StaticClass", &UInterpFilter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}