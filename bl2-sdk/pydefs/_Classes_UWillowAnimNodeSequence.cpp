#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSequence()
{
    class_< UWillowAnimNodeSequence, bases< UAnimNodeSequence >  , boost::noncopyable>("UWillowAnimNodeSequence", no_init)
        .def_readwrite("SeqStack", &UWillowAnimNodeSequence::SeqStack)
        .def("StaticClass", &UWillowAnimNodeSequence::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOnInit", &UWillowAnimNodeSequence::eventOnInit)
        .def("PlayAnimationSet", &UWillowAnimNodeSequence::PlayAnimationSet)
        .def("PlayAnimation", &UWillowAnimNodeSequence::PlayAnimation)
        .staticmethod("StaticClass")
  ;
}