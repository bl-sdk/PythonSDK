#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTrainingMessageDefinition()
{
    py::class_< UTrainingMessageDefinition,  UGBXDefinition   >("UTrainingMessageDefinition")
        .def_readwrite("StatId", &UTrainingMessageDefinition::StatId)
        .def_readwrite("StatTargetValue", &UTrainingMessageDefinition::StatTargetValue)
        .def_readwrite("Key", &UTrainingMessageDefinition::Key)
        .def_readwrite("TitleKey", &UTrainingMessageDefinition::TitleKey)
        .def_readwrite("HUDInitializationFrame", &UTrainingMessageDefinition::HUDInitializationFrame)
        .def_readwrite("PauseContinueDelay", &UTrainingMessageDefinition::PauseContinueDelay)
        .def_readwrite("ExceptIfStatId", &UTrainingMessageDefinition::ExceptIfStatId)
        .def_readwrite("ExceptIfGreaterThan", &UTrainingMessageDefinition::ExceptIfGreaterThan)
        .def_readwrite("StatusMenuTab", &UTrainingMessageDefinition::StatusMenuTab)
        .def_readwrite("DialogPriority", &UTrainingMessageDefinition::DialogPriority)
        .def("StaticClass", &UTrainingMessageDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}