#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayer(py::object m)
{
    py::class_< UPlayer,  UObject   >(m, "UPlayer")
        .def_readwrite("VfTable_FExec", &UPlayer::VfTable_FExec)
        .def_readwrite("Actor", &UPlayer::Actor)
        .def_readwrite("CurrentNetSpeed", &UPlayer::CurrentNetSpeed)
        .def_readwrite("ConfiguredInternetSpeed", &UPlayer::ConfiguredInternetSpeed)
        .def_readwrite("ConfiguredLanSpeed", &UPlayer::ConfiguredLanSpeed)
        .def_readwrite("PP_DesaturationMultiplier", &UPlayer::PP_DesaturationMultiplier)
        .def_readwrite("PP_HighlightsMultiplier", &UPlayer::PP_HighlightsMultiplier)
        .def_readwrite("PP_MidTonesMultiplier", &UPlayer::PP_MidTonesMultiplier)
        .def_readwrite("PP_ShadowsMultiplier", &UPlayer::PP_ShadowsMultiplier)
        .def("StaticClass", &UPlayer::StaticClass, py::return_value_policy::reference)
        .def("SwitchController", &UPlayer::SwitchController)
          ;
}