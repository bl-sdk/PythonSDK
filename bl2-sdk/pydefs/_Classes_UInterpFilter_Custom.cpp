#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpFilter_Custom(py::object m)
{
    py::class_< UInterpFilter_Custom,  UInterpFilter   >(m, "UInterpFilter_Custom")
        .def("StaticClass", &UInterpFilter_Custom::StaticClass, py::return_value_policy::reference)
          ;
}