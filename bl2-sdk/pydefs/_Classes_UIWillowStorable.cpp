#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWillowStorable()
{
    py::class_< UIWillowStorable,  UInterface   >("UIWillowStorable")
        .def("StaticClass", &UIWillowStorable::StaticClass, py::return_value_policy::reference)
        .def("Put", &UIWillowStorable::Put)
        .def("Get", &UIWillowStorable::Get)
        .def("Swap", &UIWillowStorable::Swap)
        .staticmethod("StaticClass")
  ;
}