#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSequence()
{
    py::class_< UWillowAnimNodeSequence,  UAnimNodeSequence   >("UWillowAnimNodeSequence")
        .def_readwrite("SeqStack", &UWillowAnimNodeSequence::SeqStack)
        .def("StaticClass", &UWillowAnimNodeSequence::StaticClass, py::return_value_policy::reference)
        .def("eventOnInit", &UWillowAnimNodeSequence::eventOnInit)
        .def("PlayAnimationSet", &UWillowAnimNodeSequence::PlayAnimationSet)
        .def("PlayAnimation", &UWillowAnimNodeSequence::PlayAnimation)
        .staticmethod("StaticClass")
  ;
}