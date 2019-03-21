#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWaterVolume()
{
    class_< AWaterVolume, bases< APhysicsVolume >  , boost::noncopyable>("AWaterVolume", no_init)
        .def_readwrite("EntrySound", &AWaterVolume::EntrySound)
        .def_readwrite("EntryActor", &AWaterVolume::EntryActor)
        .def_readwrite("ExitSound", &AWaterVolume::ExitSound)
        .def_readwrite("ExitActor", &AWaterVolume::ExitActor)
        .def("StaticClass", &AWaterVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayExitSplash", &AWaterVolume::PlayExitSplash)
        .def("eventUnTouch", &AWaterVolume::eventUnTouch)
        .def("PlayEntrySplash", &AWaterVolume::PlayEntrySplash)
        .def("eventTouch", &AWaterVolume::eventTouch)
        .staticmethod("StaticClass")
  ;
}