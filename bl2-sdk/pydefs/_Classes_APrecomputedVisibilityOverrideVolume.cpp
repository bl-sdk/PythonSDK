#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APrecomputedVisibilityOverrideVolume()
{
    class_< APrecomputedVisibilityOverrideVolume, bases< AVolume >  , boost::noncopyable>("APrecomputedVisibilityOverrideVolume", no_init)
        .def_readwrite("OverrideVisibleActors", &APrecomputedVisibilityOverrideVolume::OverrideVisibleActors)
        .def_readwrite("OverrideInvisibleActors", &APrecomputedVisibilityOverrideVolume::OverrideInvisibleActors)
        .def("StaticClass", &APrecomputedVisibilityOverrideVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}