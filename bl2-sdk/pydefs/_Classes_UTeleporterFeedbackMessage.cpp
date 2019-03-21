#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTeleporterFeedbackMessage()
{
    py::class_< UTeleporterFeedbackMessage,  ULocalMessage   >("UTeleporterFeedbackMessage")
        .def_readwrite("Teleporter_Disabled", &UTeleporterFeedbackMessage::Teleporter_Disabled)
        .def_readwrite("Teleporter_NoRoom", &UTeleporterFeedbackMessage::Teleporter_NoRoom)
        .def("StaticClass", &UTeleporterFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UTeleporterFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}