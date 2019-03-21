#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DuelChallengeIssued()
{
    py::class_< UWillowSeqEvent_DuelChallengeIssued,  USequenceEvent   >("UWillowSeqEvent_DuelChallengeIssued")
        .def("StaticClass", &UWillowSeqEvent_DuelChallengeIssued::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}