#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControl_TwistBone()
{
    py::class_< USkelControl_TwistBone,  USkelControlBase   >("USkelControl_TwistBone")
        .def_readwrite("SourceBoneName", &USkelControl_TwistBone::SourceBoneName)
        .def_readwrite("TwistAngleScale", &USkelControl_TwistBone::TwistAngleScale)
        .def("StaticClass", &USkelControl_TwistBone::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}