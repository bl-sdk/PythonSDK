#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicAnchor()
{
    py::class_< ADynamicAnchor,  ANavigationPoint   >("ADynamicAnchor")
        .def_readwrite("CurrentUser", &ADynamicAnchor::CurrentUser)
        .def("StaticClass", &ADynamicAnchor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}