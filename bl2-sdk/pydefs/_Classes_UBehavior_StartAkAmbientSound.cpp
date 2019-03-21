#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StartAkAmbientSound()
{
    class_< UBehavior_StartAkAmbientSound, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StartAkAmbientSound", no_init)
        .def_readwrite("AkEvent", &UBehavior_StartAkAmbientSound::AkEvent)
        .def_readwrite("SoundGroup", &UBehavior_StartAkAmbientSound::SoundGroup)
        .def("StaticClass", &UBehavior_StartAkAmbientSound::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StartAkAmbientSound::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}