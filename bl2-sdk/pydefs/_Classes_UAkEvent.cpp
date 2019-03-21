#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkEvent()
{
    class_< UAkEvent, bases< UObject >  , boost::noncopyable>("UAkEvent", no_init)
        .def_readwrite("RequiredBank", &UAkEvent::RequiredBank)
        .def_readwrite("FaceFXAnimSet", &UAkEvent::FaceFXAnimSet)
        .def_readwrite("EnvironmentalEffectUpdateFrequency", &UAkEvent::EnvironmentalEffectUpdateFrequency)
        .def_readwrite("MaxAttenuationRadius", &UAkEvent::MaxAttenuationRadius)
        .def_readwrite("ShortId", &UAkObject::ShortId)
        .def("StaticClass", &UAkEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}