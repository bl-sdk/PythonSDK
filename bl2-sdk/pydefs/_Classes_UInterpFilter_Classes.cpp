#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpFilter_Classes()
{
    py::class_< UInterpFilter_Classes,  UObject   >("UInterpFilter_Classes")
        .def_readwrite("Caption", &UInterpFilter::Caption)
        .def("StaticClass", &UInterpFilter_Classes::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}