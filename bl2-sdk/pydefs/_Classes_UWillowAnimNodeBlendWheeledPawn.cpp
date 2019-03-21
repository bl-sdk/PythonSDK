#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendWheeledPawn()
{
    class_< UWillowAnimNodeBlendWheeledPawn, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UWillowAnimNodeBlendWheeledPawn", no_init)
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
        .def("StaticClass", &UWillowAnimNodeBlendWheeledPawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}