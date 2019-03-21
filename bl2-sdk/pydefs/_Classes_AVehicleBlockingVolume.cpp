#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVehicleBlockingVolume()
{
    class_< AVehicleBlockingVolume, bases< ABlockingVolume >  , boost::noncopyable>("AVehicleBlockingVolume", no_init)
        .def("StaticClass", &AVehicleBlockingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopsProjectile", &AVehicleBlockingVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}