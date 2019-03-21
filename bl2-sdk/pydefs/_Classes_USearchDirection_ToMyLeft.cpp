#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_ToMyLeft(py::object m)
{
    py::class_< USearchDirection_ToMyLeft,  USearchDirection   >(m, "USearchDirection_ToMyLeft")
        .def("StaticClass", &USearchDirection_ToMyLeft::StaticClass, py::return_value_policy::reference)
          ;
}