#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSequence(py::object m)
{
    py::class_< UWillowAnimNodeSequence,  UAnimNodeSequence   >(m, "UWillowAnimNodeSequence")
        .def_readwrite("SeqStack", &UWillowAnimNodeSequence::SeqStack)
        .def("StaticClass", &UWillowAnimNodeSequence::StaticClass, py::return_value_policy::reference)
        .def("eventOnInit", &UWillowAnimNodeSequence::eventOnInit)
        .def("PlayAnimationSet", &UWillowAnimNodeSequence::PlayAnimationSet)
        .def("PlayAnimation", &UWillowAnimNodeSequence::PlayAnimation)
          ;
}