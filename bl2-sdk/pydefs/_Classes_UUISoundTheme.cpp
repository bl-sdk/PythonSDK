#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUISoundTheme()
{
    class_< UUISoundTheme, bases< UObject >  , boost::noncopyable>("UUISoundTheme", no_init)
        .def_readwrite("SoundEventBindings", &UUISoundTheme::SoundEventBindings)
        .def("StaticClass", &UUISoundTheme::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventProcessSoundEvent", &UUISoundTheme::eventProcessSoundEvent)
        .staticmethod("StaticClass")
  ;
}