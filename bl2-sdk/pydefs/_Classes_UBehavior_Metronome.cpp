#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Metronome()
{
    class_< UBehavior_Metronome, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Metronome", no_init)
        .def_readwrite("MaxTickCount", &UBehavior_Metronome::MaxTickCount)
        .def_readwrite("CurrentTickCount", &UBehavior_Metronome::CurrentTickCount)
        .def_readwrite("Duration", &UBehavior_Metronome::Duration)
        .def_readwrite("TickInterval", &UBehavior_Metronome::TickInterval)
        .def("StaticClass", &UBehavior_Metronome::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Metronome::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}