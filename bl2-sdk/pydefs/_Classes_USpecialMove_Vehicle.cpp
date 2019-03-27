#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Vehicle(py::module &m)
{
    py::class_< USpecialMove_Vehicle,  UWillowAnimDefinition   >(m, "USpecialMove_Vehicle")
		.def_static("StaticClass", &USpecialMove_Vehicle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TransitionType", &USpecialMove_Vehicle::TransitionType)
        .def_readwrite("CameraLerpKeyFrames", &USpecialMove_Vehicle::CameraLerpKeyFrames)
        .def("PlayAnim", &USpecialMove_Vehicle::PlayAnim)
        .def("eventAuthorityCanPlay", &USpecialMove_Vehicle::eventAuthorityCanPlay)
          ;
}