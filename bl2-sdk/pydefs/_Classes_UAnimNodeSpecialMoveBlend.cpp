#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSpecialMoveBlend(py::object m)
{
    py::class_< UAnimNodeSpecialMoveBlend,  UAnimNodeSlot   >(m, "UAnimNodeSpecialMoveBlend")
        .def_readwrite("AnimState", &UAnimNodeSpecialMoveBlend::AnimState)
        .def_readwrite("SavedBlendOutTime", &UAnimNodeSpecialMoveBlend::SavedBlendOutTime)
        .def_readwrite("SMI", &UAnimNodeSpecialMoveBlend::SMI)
        .def_readwrite("AnimParameters", &UAnimNodeSpecialMoveBlend::AnimParameters)
        .def("StaticClass", &UAnimNodeSpecialMoveBlend::StaticClass, py::return_value_policy::reference)
        .def("IsPlaying", &UAnimNodeSpecialMoveBlend::IsPlaying)
        .def("SetRootMotion", &UAnimNodeSpecialMoveBlend::SetRootMotion)
        .def("GetCurrentAnimDef", &UAnimNodeSpecialMoveBlend::GetCurrentAnimDef, py::return_value_policy::reference)
        .def("GetCurrentAnimName", &UAnimNodeSpecialMoveBlend::GetCurrentAnimName)
        .def("Finish", &UAnimNodeSpecialMoveBlend::Finish)
        .def("Stop", &UAnimNodeSpecialMoveBlend::Stop)
        .def("PlayData", &UAnimNodeSpecialMoveBlend::PlayData)
        .def("Play", &UAnimNodeSpecialMoveBlend::Play)
          ;
}