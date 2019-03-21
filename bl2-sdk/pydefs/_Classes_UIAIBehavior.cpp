#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAIBehavior(py::object m)
{
    py::class_< UIAIBehavior,  UInterface   >(m, "UIAIBehavior")
        .def("StaticClass", &UIAIBehavior::StaticClass, py::return_value_policy::reference)
          ;
}