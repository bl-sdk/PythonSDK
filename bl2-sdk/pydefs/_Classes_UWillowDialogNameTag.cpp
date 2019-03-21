#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogNameTag()
{
    class_< UWillowDialogNameTag, bases< UGearboxDialogNameTag >  , boost::noncopyable>("UWillowDialogNameTag", no_init)
        .def_readwrite("CallerName", &UWillowDialogNameTag::CallerName)
        .def_readwrite("DefaultEchoPortrait", &UWillowDialogNameTag::DefaultEchoPortrait)
        .def_readwrite("EmotePortraits", &UWillowDialogNameTag::EmotePortraits)
        .def_readwrite("EmoteStances", &UWillowDialogNameTag::EmoteStances)
        .def_readwrite("DlcExpansion", &UWillowDialogNameTag::DlcExpansion)
        .def("StaticClass", &UWillowDialogNameTag::StaticClass, return_value_policy< reference_existing_object >())
        .def("EndStance", &UWillowDialogNameTag::EndStance)
        .def("BeginStance", &UWillowDialogNameTag::BeginStance)
        .def("StaticHideEchoPortrait", &UWillowDialogNameTag::StaticHideEchoPortrait)
        .def("StaticShowEchoPortrait", &UWillowDialogNameTag::StaticShowEchoPortrait)
        .staticmethod("StaticClass")
  ;
}