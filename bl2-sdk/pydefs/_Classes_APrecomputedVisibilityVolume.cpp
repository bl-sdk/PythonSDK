#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APrecomputedVisibilityVolume(py::module &m)
{
    py::class_< APrecomputedVisibilityVolume,  AVolume   >(m, "APrecomputedVisibilityVolume")
        .def("StaticClass", &APrecomputedVisibilityVolume::StaticClass, py::return_value_policy::reference)
          ;
}