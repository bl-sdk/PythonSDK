#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTeleporterFeedbackMessage(py::module &m)
{
    py::class_< UTeleporterFeedbackMessage,  ULocalMessage   >(m, "UTeleporterFeedbackMessage")
		.def_static("StaticClass", &UTeleporterFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Teleporter_Disabled", &UTeleporterFeedbackMessage::Teleporter_Disabled)
        .def_readwrite("Teleporter_NoRoom", &UTeleporterFeedbackMessage::Teleporter_NoRoom)
        .def("GetString", &UTeleporterFeedbackMessage::GetString)
          ;
}