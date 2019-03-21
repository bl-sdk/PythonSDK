#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeScaleRateBySpeed()
{
    py::class_< UAnimNodeScaleRateBySpeed,  UAnimNodeBlendBase   >("UAnimNodeScaleRateBySpeed")
        .def_readwrite("BaseSpeed", &UAnimNodeScaleRateBySpeed::BaseSpeed)
        .def_readwrite("ScaleByValue", &UAnimNodeScalePlayRate::ScaleByValue)
        .def("StaticClass", &UAnimNodeScaleRateBySpeed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}