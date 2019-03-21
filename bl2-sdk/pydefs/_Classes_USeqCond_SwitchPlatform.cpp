#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchPlatform()
{
    py::class_< USeqCond_SwitchPlatform,  USequenceCondition   >("USeqCond_SwitchPlatform")
        .def("StaticClass", &USeqCond_SwitchPlatform::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}