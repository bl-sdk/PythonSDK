#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogGroup(py::object m)
{
    py::class_< UGearboxDialogGroup,  UObject   >(m, "UGearboxDialogGroup")
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
        .def("StaticClass", &UGearboxDialogGroup::StaticClass, py::return_value_policy::reference)
        .def("SimpleEvent", &UGearboxDialogGroup::SimpleEvent)
          ;
}