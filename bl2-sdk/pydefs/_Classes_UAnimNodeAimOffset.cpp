#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeAimOffset()
{
    py::class_< UAnimNodeAimOffset,  UAnimNodeBlendBase   >("UAnimNodeAimOffset")
        .def_readwrite("Aim", &UAnimNodeAimOffset::Aim)
        .def_readwrite("AngleOffset", &UAnimNodeAimOffset::AngleOffset)
        .def_readwrite("PassThroughAtOrAboveLOD", &UAnimNodeAimOffset::PassThroughAtOrAboveLOD)
        .def_readwrite("ForcedAimDir", &UAnimNodeAimOffset::ForcedAimDir)
        .def_readwrite("RequiredBones", &UAnimNodeAimOffset::RequiredBones)
        .def_readwrite("AimCpntIndexLUT", &UAnimNodeAimOffset::AimCpntIndexLUT)
        .def_readwrite("TemplateNode", &UAnimNodeAimOffset::TemplateNode)
        .def_readwrite("Profiles", &UAnimNodeAimOffset::Profiles)
        .def_readwrite("CurrentProfileIndex", &UAnimNodeAimOffset::CurrentProfileIndex)
        .def("StaticClass", &UAnimNodeAimOffset::StaticClass, py::return_value_policy::reference)
        .def("SetActiveProfileByIndex", &UAnimNodeAimOffset::SetActiveProfileByIndex)
        .def("SetActiveProfileByName", &UAnimNodeAimOffset::SetActiveProfileByName)
        .staticmethod("StaticClass")
  ;
}