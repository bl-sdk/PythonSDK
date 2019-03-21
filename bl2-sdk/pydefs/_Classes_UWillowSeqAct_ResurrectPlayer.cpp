#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ResurrectPlayer()
{
    py::class_< UWillowSeqAct_ResurrectPlayer,  USequenceAction   >("UWillowSeqAct_ResurrectPlayer")
        .def("StaticClass", &UWillowSeqAct_ResurrectPlayer::StaticClass, py::return_value_policy::reference)
        .def("eventOnActivated", &UWillowSeqAct_ResurrectPlayer::eventOnActivated)
        .staticmethod("StaticClass")
  ;
}