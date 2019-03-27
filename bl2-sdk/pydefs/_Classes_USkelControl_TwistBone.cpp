#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControl_TwistBone(py::module &m)
{
    py::class_< USkelControl_TwistBone,  USkelControlBase   >(m, "USkelControl_TwistBone")
		.def_static("StaticClass", &USkelControl_TwistBone::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SourceBoneName", &USkelControl_TwistBone::SourceBoneName)
        .def_readwrite("TwistAngleScale", &USkelControl_TwistBone::TwistAngleScale)
          ;
}