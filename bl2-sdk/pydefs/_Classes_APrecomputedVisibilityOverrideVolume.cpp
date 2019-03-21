#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APrecomputedVisibilityOverrideVolume()
{
    py::class_< APrecomputedVisibilityOverrideVolume,  AVolume   >("APrecomputedVisibilityOverrideVolume")
        .def_readwrite("OverrideVisibleActors", &APrecomputedVisibilityOverrideVolume::OverrideVisibleActors)
        .def_readwrite("OverrideInvisibleActors", &APrecomputedVisibilityOverrideVolume::OverrideInvisibleActors)
        .def("StaticClass", &APrecomputedVisibilityOverrideVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}