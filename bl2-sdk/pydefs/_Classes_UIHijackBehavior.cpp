#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIHijackBehavior(py::module &m)
{
    py::class_< UIHijackBehavior,  UInterface   >(m, "UIHijackBehavior")
        .def("StaticClass", &UIHijackBehavior::StaticClass, py::return_value_policy::reference)
          ;
}