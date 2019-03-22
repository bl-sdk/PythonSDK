#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogEventData(py::module &m)
{
    py::class_< UGearboxDialogEventData,  UObject   >(m, "UGearboxDialogEventData")
        .def_readwrite("EventInfo", &UGearboxDialogEventData::EventInfo)
        .def_readwrite("Instigator", &UGearboxDialogEventData::Instigator)
        .def_readwrite("Other", &UGearboxDialogEventData::Other)
        .def_readwrite("ObjectParameter", &UGearboxDialogEventData::ObjectParameter)
        .def_readwrite("LastTalker", &UGearboxDialogEventData::LastTalker)
        .def_readwrite("LiveTalkAction", &UGearboxDialogEventData::LiveTalkAction)
        .def_readwrite("LiveTalkActionDataID", &UGearboxDialogEventData::LiveTalkActionDataID)
        .def_readwrite("TemplateEventInfo", &UGearboxDialogEventData::TemplateEventInfo)
        .def_readwrite("LiveTriggerAction", &UGearboxDialogEventData::LiveTriggerAction)
        .def_readwrite("PlayingInfo", &UGearboxDialogEventData::PlayingInfo)
        .def_readwrite("TalkFinishTime", &UGearboxDialogEventData::TalkFinishTime)
        .def_readwrite("UseCount", &UGearboxDialogEventData::UseCount)
        .def("StaticClass", &UGearboxDialogEventData::StaticClass, py::return_value_policy::reference)
        .def("IsActive", &UGearboxDialogEventData::IsActive)
          ;
}