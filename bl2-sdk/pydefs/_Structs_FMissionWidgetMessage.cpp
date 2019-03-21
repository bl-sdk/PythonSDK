#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionWidgetMessage(py::object m)
{
    py::class_< FMissionWidgetMessage >(m, "FMissionWidgetMessage")
        .def_readwrite("Type", &FMissionWidgetMessage::Type)
        .def_readwrite("Category", &FMissionWidgetMessage::Category)
        .def_readwrite("MissDef", &FMissionWidgetMessage::MissDef)
        .def_readwrite("ObjDef", &FMissionWidgetMessage::ObjDef)
        .def_readwrite("Slot", &FMissionWidgetMessage::Slot)
        .def_readwrite("SwapFromSlot", &FMissionWidgetMessage::SwapFromSlot)
        .def_readwrite("ModuleNum", &FMissionWidgetMessage::ModuleNum)
        .def_readwrite("EventTime", &FMissionWidgetMessage::EventTime)
  ;
}