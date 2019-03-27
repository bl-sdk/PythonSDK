#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendWheeledPawn(py::module &m)
{
    py::class_< UWillowAnimNodeBlendWheeledPawn,  UAnimNodeBlendBase   >(m, "UWillowAnimNodeBlendWheeledPawn")
		.def_static("StaticClass", &UWillowAnimNodeBlendWheeledPawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DirChangeRateMin", &UWillowAnimNodeBlendWheeledPawn::DirChangeRateMin)
        .def_readwrite("DirChangeRateMax", &UWillowAnimNodeBlendWheeledPawn::DirChangeRateMax)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendWheeledPawn::BlendTime)
        .def_readwrite("ReferenceSpeed", &UWillowAnimNodeBlendWheeledPawn::ReferenceSpeed)
        .def_readwrite("SpeedUpRate", &UWillowAnimNodeBlendWheeledPawn::SpeedUpRate)
        .def_readwrite("SpeedDownRate", &UWillowAnimNodeBlendWheeledPawn::SpeedDownRate)
        .def_readwrite("BrakeRate", &UWillowAnimNodeBlendWheeledPawn::BrakeRate)
        .def_readwrite("IdleBlendTime", &UWillowAnimNodeBlendWheeledPawn::IdleBlendTime)
        .def_readwrite("DirAngle", &UWillowAnimNodeBlendWheeledPawn::DirAngle)
        .def_readwrite("CurSpeed", &UWillowAnimNodeBlendWheeledPawn::CurSpeed)
          ;
}