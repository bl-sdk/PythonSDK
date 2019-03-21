#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFlyerBlockingVolume()
{
    class_< AFlyerBlockingVolume, bases< ABlockingVolume >  , boost::noncopyable>("AFlyerBlockingVolume", no_init)
        .def("StaticClass", &AFlyerBlockingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopsProjectile", &AFlyerBlockingVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}