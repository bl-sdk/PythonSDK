#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlHandlebars(py::module &m)
{
    py::class_< USkelControlHandlebars,  USkelControlSingleBone   >(m, "USkelControlHandlebars")
        .def_readwrite("WheelRollAxis", &USkelControlHandlebars::WheelRollAxis)
        .def_readwrite("HandlebarRotateAxis", &USkelControlHandlebars::HandlebarRotateAxis)
        .def_readwrite("WheelBoneName", &USkelControlHandlebars::WheelBoneName)
        .def_readwrite("SteerWheelBoneIndex", &USkelControlHandlebars::SteerWheelBoneIndex)
        .def("StaticClass", &USkelControlHandlebars::StaticClass, py::return_value_policy::reference)
          ;
}