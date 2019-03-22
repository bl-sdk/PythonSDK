#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATemporalField(py::module &m)
{
    py::class_< ATemporalField,  AActor   >(m, "ATemporalField")
        .def_readwrite("StaticMeshComponent", &ATemporalField::StaticMeshComponent)
        .def_readwrite("SkillEffect", &ATemporalField::SkillEffect)
        .def_readwrite("MyTickMultiplier", &ATemporalField::MyTickMultiplier)
        .def_readwrite("TransitionDistancePercent", &ATemporalField::TransitionDistancePercent)
        .def_readwrite("TouchEffectTemplate", &ATemporalField::TouchEffectTemplate)
        .def("StaticClass", &ATemporalField::StaticClass, py::return_value_policy::reference)
        .def("PlayTouchEffect", &ATemporalField::PlayTouchEffect)
        .def("CalculateTickMultiplierForActor", &ATemporalField::CalculateTickMultiplierForActor)
        .def("eventDestroyed", &ATemporalField::eventDestroyed)
        .def("eventUnTouch", &ATemporalField::eventUnTouch)
        .def("eventTouch", &ATemporalField::eventTouch)
        .def("eventPostBeginPlay", &ATemporalField::eventPostBeginPlay)
        .def("GetFieldNormal", &ATemporalField::GetFieldNormal)
        .def("IsTemporalFieldDebugEnabled", &ATemporalField::IsTemporalFieldDebugEnabled)
        .def("ToggleTemporalFieldDebug", &ATemporalField::ToggleTemporalFieldDebug)
          ;
}