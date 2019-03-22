#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTeleporterFeedbackMessage(py::module &m)
{
    py::class_< UTeleporterFeedbackMessage,  ULocalMessage   >(m, "UTeleporterFeedbackMessage")
        .def_readwrite("Teleporter_Disabled", &UTeleporterFeedbackMessage::Teleporter_Disabled)
        .def_readwrite("Teleporter_NoRoom", &UTeleporterFeedbackMessage::Teleporter_NoRoom)
        .def("GetString", &UTeleporterFeedbackMessage::GetString)
          ;
}