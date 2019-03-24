#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSequence(py::module &m)
{
    py::class_< UWillowAnimNodeSequence,  UAnimNodeSequence   >(m, "UWillowAnimNodeSequence")
		.def_static("StaticClass", &UWillowAnimNodeSequence::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SeqStack", &UWillowAnimNodeSequence::SeqStack)
        .def("eventOnInit", &UWillowAnimNodeSequence::eventOnInit)
        .def("PlayAnimationSet", &UWillowAnimNodeSequence::PlayAnimationSet)
        .def("PlayAnimation", &UWillowAnimNodeSequence::PlayAnimation)
          ;
}