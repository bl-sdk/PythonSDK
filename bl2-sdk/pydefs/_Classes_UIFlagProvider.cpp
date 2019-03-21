#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFlagProvider(py::object m)
{
    py::class_< UIFlagProvider,  UInterface   >(m, "UIFlagProvider")
        .def("StaticClass", &UIFlagProvider::StaticClass, py::return_value_policy::reference)
          ;
}