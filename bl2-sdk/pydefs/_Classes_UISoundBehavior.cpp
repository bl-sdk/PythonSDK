#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISoundBehavior()
{
    class_< UISoundBehavior, bases< UInterface >  , boost::noncopyable>("UISoundBehavior", no_init)
        .def("StaticClass", &UISoundBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_PostAkEvent", &UISoundBehavior::Behavior_PostAkEvent)
        .def("Behavior_PlaySoundForListener", &UISoundBehavior::Behavior_PlaySoundForListener)
        .def("Behavior_StopSound", &UISoundBehavior::Behavior_StopSound)
        .def("Behavior_PlaySound", &UISoundBehavior::Behavior_PlaySound)
        .staticmethod("StaticClass")
  ;
}