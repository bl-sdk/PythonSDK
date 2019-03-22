#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APrecomputedVisibilityOverrideVolume(py::module &m)
{
    py::class_< APrecomputedVisibilityOverrideVolume,  AVolume   >(m, "APrecomputedVisibilityOverrideVolume")
        .def_readwrite("OverrideVisibleActors", &APrecomputedVisibilityOverrideVolume::OverrideVisibleActors)
        .def_readwrite("OverrideInvisibleActors", &APrecomputedVisibilityOverrideVolume::OverrideInvisibleActors)
          ;
}