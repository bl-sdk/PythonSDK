#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AExecuteBlockingVolume()
{
    class_< AExecuteBlockingVolume, bases< ABlockingVolume >  , boost::noncopyable>("AExecuteBlockingVolume", no_init)
        .def("StaticClass", &AExecuteBlockingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopsProjectile", &AExecuteBlockingVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}