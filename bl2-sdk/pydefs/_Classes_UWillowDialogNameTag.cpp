#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogNameTag(py::module &m)
{
    py::class_< UWillowDialogNameTag,  UGearboxDialogNameTag   >(m, "UWillowDialogNameTag")
        .def_readwrite("CallerName", &UWillowDialogNameTag::CallerName)
        .def_readwrite("DefaultEchoPortrait", &UWillowDialogNameTag::DefaultEchoPortrait)
        .def_readwrite("EmotePortraits", &UWillowDialogNameTag::EmotePortraits)
        .def_readwrite("EmoteStances", &UWillowDialogNameTag::EmoteStances)
        .def_readwrite("DlcExpansion", &UWillowDialogNameTag::DlcExpansion)
        .def("StaticClass", &UWillowDialogNameTag::StaticClass, py::return_value_policy::reference)
        .def("EndStance", &UWillowDialogNameTag::EndStance)
        .def("BeginStance", &UWillowDialogNameTag::BeginStance)
        .def("StaticHideEchoPortrait", &UWillowDialogNameTag::StaticHideEchoPortrait)
        .def("StaticShowEchoPortrait", &UWillowDialogNameTag::StaticShowEchoPortrait)
          ;
}