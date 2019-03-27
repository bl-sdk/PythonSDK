#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalTrainingMessage(py::module &m)
{
    py::class_< ULocalTrainingMessage,  UWillowLocalMessage   >(m, "ULocalTrainingMessage")
		.def_static("StaticClass", &ULocalTrainingMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultTrainingMessageColor", &ULocalTrainingMessage::DefaultTrainingMessageColor)
        .def("GetLocalStringForTrainingMessageKey", &ULocalTrainingMessage::GetLocalStringForTrainingMessageKey)
        .def("ClientReceive", &ULocalTrainingMessage::ClientReceive)
          ;
}