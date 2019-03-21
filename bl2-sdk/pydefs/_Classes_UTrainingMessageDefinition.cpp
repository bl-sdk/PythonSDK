#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTrainingMessageDefinition()
{
    class_< UTrainingMessageDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UTrainingMessageDefinition", no_init)
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
        .def("StaticClass", &UTrainingMessageDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}