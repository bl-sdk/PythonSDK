#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayer()
{
    class_< UPlayer, bases< UObject >  , boost::noncopyable>("UPlayer", no_init)
        .def_readwrite("VfTable_FExec", &UPlayer::VfTable_FExec)
        .def_readwrite("Actor", &UPlayer::Actor)
        .def_readwrite("CurrentNetSpeed", &UPlayer::CurrentNetSpeed)
        .def_readwrite("ConfiguredInternetSpeed", &UPlayer::ConfiguredInternetSpeed)
        .def_readwrite("ConfiguredLanSpeed", &UPlayer::ConfiguredLanSpeed)
        .def_readwrite("PP_DesaturationMultiplier", &UPlayer::PP_DesaturationMultiplier)
        .def_readwrite("PP_HighlightsMultiplier", &UPlayer::PP_HighlightsMultiplier)
        .def_readwrite("PP_MidTonesMultiplier", &UPlayer::PP_MidTonesMultiplier)
        .def_readwrite("PP_ShadowsMultiplier", &UPlayer::PP_ShadowsMultiplier)
        .def("StaticClass", &UPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .def("SwitchController", &UPlayer::SwitchController)
        .staticmethod("StaticClass")
  ;
}