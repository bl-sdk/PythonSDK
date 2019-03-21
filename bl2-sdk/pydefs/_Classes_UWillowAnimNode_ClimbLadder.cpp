#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_ClimbLadder(py::object m)
{
    py::class_< UWillowAnimNode_ClimbLadder,  UAnimNodeScaleRateBySpeed   >(m, "UWillowAnimNode_ClimbLadder")
        .def("StaticClass", &UWillowAnimNode_ClimbLadder::StaticClass, py::return_value_policy::reference)
          ;
}