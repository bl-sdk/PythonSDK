#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotationRateBySpeed(py::object m)
{
    py::class_< UWillowSkelControl_RotationRateBySpeed,  UWillowSkelControl_RotationRate   >(m, "UWillowSkelControl_RotationRateBySpeed")
        .def_readwrite("SpeedComponent", &UWillowSkelControl_RotationRateBySpeed::SpeedComponent)
        .def_readwrite("MinSpeed", &UWillowSkelControl_RotationRateBySpeed::MinSpeed)
        .def_readwrite("MaxSpeed", &UWillowSkelControl_RotationRateBySpeed::MaxSpeed)
        .def_readwrite("MinRotationRate", &UWillowSkelControl_RotationRateBySpeed::MinRotationRate)
        .def_readwrite("MaxRotationRate", &UWillowSkelControl_RotationRateBySpeed::MaxRotationRate)
        .def("StaticClass", &UWillowSkelControl_RotationRateBySpeed::StaticClass, py::return_value_policy::reference)
          ;
}