#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendByStance(py::object m)
{
    py::class_< UWillowAnimNodeBlendByStance,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendByStance")
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendByStance::BlendTime)
        .def_readwrite("ReferencesSpeeds", &UWillowAnimNodeBlendByStance::ReferencesSpeeds)
        .def_readwrite("DefaultStances", &UWillowAnimNodeBlendByStance::DefaultStances)
        .def_readwrite("ChildStanceTypes", &UWillowAnimNodeBlendByStance::ChildStanceTypes)
        .def_readwrite("Scale", &UWillowAnimNodeBlendByStance::Scale)
        .def_readwrite("DiagScale", &UWillowAnimNodeBlendByStance::DiagScale)
        .def_readwrite("CurrentStanceType", &UWillowAnimNodeBlendByStance::CurrentStanceType)
        .def_readwrite("CachedSkelControls", &UWillowAnimNodeBlendByStance::CachedSkelControls)
        .def("StaticClass", &UWillowAnimNodeBlendByStance::StaticClass, py::return_value_policy::reference)
          ;
}