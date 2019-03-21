#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeAimOffset()
{
    class_< UAnimNodeAimOffset, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeAimOffset", no_init)
        .def_readwrite("Aim", &UAnimNodeAimOffset::Aim)
        .def_readwrite("AngleOffset", &UAnimNodeAimOffset::AngleOffset)
        .def_readwrite("PassThroughAtOrAboveLOD", &UAnimNodeAimOffset::PassThroughAtOrAboveLOD)
        .def_readwrite("ForcedAimDir", &UAnimNodeAimOffset::ForcedAimDir)
        .def_readwrite("RequiredBones", &UAnimNodeAimOffset::RequiredBones)
        .def_readwrite("AimCpntIndexLUT", &UAnimNodeAimOffset::AimCpntIndexLUT)
        .def_readwrite("TemplateNode", &UAnimNodeAimOffset::TemplateNode)
        .def_readwrite("Profiles", &UAnimNodeAimOffset::Profiles)
        .def_readwrite("CurrentProfileIndex", &UAnimNodeAimOffset::CurrentProfileIndex)
        .def("StaticClass", &UAnimNodeAimOffset::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetActiveProfileByIndex", &UAnimNodeAimOffset::SetActiveProfileByIndex)
        .def("SetActiveProfileByName", &UAnimNodeAimOffset::SetActiveProfileByName)
        .staticmethod("StaticClass")
  ;
}