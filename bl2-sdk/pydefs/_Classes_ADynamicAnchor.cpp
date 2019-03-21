#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicAnchor(py::object m)
{
    py::class_< ADynamicAnchor,  ANavigationPoint   >(m, "ADynamicAnchor")
        .def_readwrite("CurrentUser", &ADynamicAnchor::CurrentUser)
        .def("StaticClass", &ADynamicAnchor::StaticClass, py::return_value_policy::reference)
          ;
}