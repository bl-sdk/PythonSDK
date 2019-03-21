#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StopAkAmbientSound()
{
    class_< UBehavior_StopAkAmbientSound, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StopAkAmbientSound", no_init)
        .def_readwrite("AkEvent", &UBehavior_StopAkAmbientSound::AkEvent)
        .def_readwrite("SoundGroup", &UBehavior_StopAkAmbientSound::SoundGroup)
        .def("StaticClass", &UBehavior_StopAkAmbientSound::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StopAkAmbientSound::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}