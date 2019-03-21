#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Audio()
{
    class_< UWillowAnimNode_Audio, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UWillowAnimNode_Audio", no_init)
        .def_readwrite("StartAkEvent", &UWillowAnimNode_Audio::StartAkEvent)
        .def_readwrite("StopAkEvent", &UWillowAnimNode_Audio::StopAkEvent)
        .def("StaticClass", &UWillowAnimNode_Audio::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOnCeaseRelevant", &UWillowAnimNode_Audio::eventOnCeaseRelevant)
        .def("eventOnBecomeRelevant", &UWillowAnimNode_Audio::eventOnBecomeRelevant)
        .def("IsValid", &UWillowAnimNode_Audio::IsValid)
        .staticmethod("StaticClass")
  ;
}