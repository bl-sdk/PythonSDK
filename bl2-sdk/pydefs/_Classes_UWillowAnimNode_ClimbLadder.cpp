#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_ClimbLadder()
{
    py::class_< UWillowAnimNode_ClimbLadder,  UAnimNodeScaleRateBySpeed   >("UWillowAnimNode_ClimbLadder")
        .def("StaticClass", &UWillowAnimNode_ClimbLadder::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}