#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PlaySound()
{
    class_< UBehavior_PlaySound, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PlaySound", no_init)
        .def_readwrite("Sound", &UBehavior_PlaySound::Sound)
        .def("StaticClass", &UBehavior_PlaySound::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PlaySound::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}