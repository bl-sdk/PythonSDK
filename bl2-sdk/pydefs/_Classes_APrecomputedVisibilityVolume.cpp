#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APrecomputedVisibilityVolume()
{
    class_< APrecomputedVisibilityVolume, bases< AVolume >  , boost::noncopyable>("APrecomputedVisibilityVolume", no_init)
        .def("StaticClass", &APrecomputedVisibilityVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}