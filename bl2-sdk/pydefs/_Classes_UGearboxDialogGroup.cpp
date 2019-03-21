#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogGroup()
{
    class_< UGearboxDialogGroup, bases< UObject >  , boost::noncopyable>("UGearboxDialogGroup", no_init)
        .def_readwrite("EventTagPackages", &UGearboxDialogGroup::EventTagPackages)
        .def_readwrite("NameTags", &UGearboxDialogGroup::NameTags)
        .def_readwrite("EventTags", &UGearboxDialogGroup::EventTags)
        .def_readwrite("ParentGroup", &UGearboxDialogGroup::ParentGroup)
        .def_readwrite("Nodes", &UGearboxDialogGroup::Nodes)
        .def_readwrite("SharedDialogEvent", &UGearboxDialogGroup::SharedDialogEvent)
        .def_readwrite("SharedTalkAct", &UGearboxDialogGroup::SharedTalkAct)
        .def_readwrite("OutputLinksToStructs", &UGearboxDialogGroup::OutputLinksToStructs)
        .def_readwrite("DialogEvents", &UGearboxDialogGroup::DialogEvents)
        .def_readwrite("TalkActs", &UGearboxDialogGroup::TalkActs)
        .def("StaticClass", &UGearboxDialogGroup::StaticClass, return_value_policy< reference_existing_object >())
        .def("SimpleEvent", &UGearboxDialogGroup::SimpleEvent)
        .staticmethod("StaticClass")
  ;
}