#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGravityVolume()
{
    class_< AGravityVolume, bases< APhysicsVolume >  , boost::noncopyable>("AGravityVolume", no_init)
        .def_readwrite("GravityZ", &AGravityVolume::GravityZ)
        .def("StaticClass", &AGravityVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}