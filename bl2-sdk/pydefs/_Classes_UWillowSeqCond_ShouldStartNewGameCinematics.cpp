#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_ShouldStartNewGameCinematics()
{
    py::class_< UWillowSeqCond_ShouldStartNewGameCinematics,  USequenceCondition   >("UWillowSeqCond_ShouldStartNewGameCinematics")
        .def("StaticClass", &UWillowSeqCond_ShouldStartNewGameCinematics::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}