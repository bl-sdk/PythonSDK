#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_StartNewGameCinematics()
{
    py::class_< UWillowSeqEvent_StartNewGameCinematics,  USequenceEvent   >("UWillowSeqEvent_StartNewGameCinematics")
        .def("StaticClass", &UWillowSeqEvent_StartNewGameCinematics::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}