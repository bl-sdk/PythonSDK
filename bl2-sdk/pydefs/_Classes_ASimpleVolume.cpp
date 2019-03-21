#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASimpleVolume()
{
    class_< ASimpleVolume, bases< AVolume >  , boost::noncopyable>("ASimpleVolume", no_init)
        .def("StaticClass", &ASimpleVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopsProjectile", &ASimpleVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}