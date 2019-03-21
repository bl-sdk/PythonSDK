#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowAICranePawn(py::object m)
{
    py::class_< AWillowAICranePawn,  AWillowAIPawn   >(m, "AWillowAICranePawn")
        .def_readwrite("CraneSplineName", &AWillowAICranePawn::CraneSplineName)
        .def_readwrite("CraneSingleBoneName", &AWillowAICranePawn::CraneSingleBoneName)
        .def_readwrite("CraneSpline", &AWillowAICranePawn::CraneSpline)
        .def_readwrite("CraneSingleBone", &AWillowAICranePawn::CraneSingleBone)
        .def_readwrite("CraneMidPointPercent", &AWillowAICranePawn::CraneMidPointPercent)
        .def_readwrite("CraneMidPointOffset", &AWillowAICranePawn::CraneMidPointOffset)
        .def_readwrite("CraneEndPointOffset", &AWillowAICranePawn::CraneEndPointOffset)
        .def_readwrite("CraneMinDot", &AWillowAICranePawn::CraneMinDot)
        .def_readwrite("CraneMinDistance", &AWillowAICranePawn::CraneMinDistance)
        .def_readwrite("CraneMaxDistance", &AWillowAICranePawn::CraneMaxDistance)
        .def_readwrite("CraneHeightScale", &AWillowAICranePawn::CraneHeightScale)
        .def_readwrite("MyDummy", &AWillowAICranePawn::MyDummy)
        .def_readwrite("GoalLocation", &AWillowAICranePawn::GoalLocation)
        .def("StaticClass", &AWillowAICranePawn::StaticClass, py::return_value_policy::reference)
        .def("Behavior_Destroy", &AWillowAICranePawn::Behavior_Destroy)
        .def("DetachDummy", &AWillowAICranePawn::DetachDummy)
        .def("AttachDummy", &AWillowAICranePawn::AttachDummy)
        .def("FindDummy", &AWillowAICranePawn::FindDummy)
        .def("CanBeBaseForPawn", &AWillowAICranePawn::CanBeBaseForPawn)
        .def("ApplyBodyClassStartingValues", &AWillowAICranePawn::ApplyBodyClassStartingValues)
        .def("Died", &AWillowAICranePawn::Died)
          ;
}