#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATriggerVolume()
{
    class_< ATriggerVolume, bases< AVolume >  , boost::noncopyable>("ATriggerVolume", no_init)
        .def("StaticClass", &ATriggerVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopsProjectile", &ATriggerVolume::StopsProjectile)
        .def("eventPostBeginPlay", &ATriggerVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}