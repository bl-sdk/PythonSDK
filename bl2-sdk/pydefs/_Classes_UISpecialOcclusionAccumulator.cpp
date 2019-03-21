#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISpecialOcclusionAccumulator()
{
    py::class_< UISpecialOcclusionAccumulator,  UInterface   >("UISpecialOcclusionAccumulator")
        .def("StaticClass", &UISpecialOcclusionAccumulator::StaticClass, py::return_value_policy::reference)
        .def("RemoveOcclusionProvider", &UISpecialOcclusionAccumulator::RemoveOcclusionProvider)
        .def("SetOcclusionForProvider", &UISpecialOcclusionAccumulator::SetOcclusionForProvider)
        .staticmethod("StaticClass")
  ;
}