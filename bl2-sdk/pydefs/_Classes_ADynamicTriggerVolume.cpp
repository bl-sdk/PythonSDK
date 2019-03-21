#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicTriggerVolume()
{
    class_< ADynamicTriggerVolume, bases< ATriggerVolume >  , boost::noncopyable>("ADynamicTriggerVolume", no_init)
        .def("StaticClass", &ADynamicTriggerVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostBeginPlay", &ADynamicTriggerVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}