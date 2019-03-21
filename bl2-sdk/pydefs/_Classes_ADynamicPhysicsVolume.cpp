#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicPhysicsVolume()
{
    class_< ADynamicPhysicsVolume, bases< APhysicsVolume >  , boost::noncopyable>("ADynamicPhysicsVolume", no_init)
        .def("StaticClass", &ADynamicPhysicsVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostBeginPlay", &ADynamicPhysicsVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}