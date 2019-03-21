#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APlayerBlockingVolume()
{
    class_< APlayerBlockingVolume, bases< ABlockingVolume >  , boost::noncopyable>("APlayerBlockingVolume", no_init)
        .def("StaticClass", &APlayerBlockingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopsProjectile", &APlayerBlockingVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}