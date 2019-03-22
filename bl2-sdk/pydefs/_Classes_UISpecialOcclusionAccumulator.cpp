#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISpecialOcclusionAccumulator(py::module &m)
{
    py::class_< UISpecialOcclusionAccumulator,  UInterface   >(m, "UISpecialOcclusionAccumulator")
        .def("RemoveOcclusionProvider", &UISpecialOcclusionAccumulator::RemoveOcclusionProvider)
        .def("SetOcclusionForProvider", &UISpecialOcclusionAccumulator::SetOcclusionForProvider)
          ;
}