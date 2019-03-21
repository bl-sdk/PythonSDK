#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalTrainingMessage(py::object m)
{
    py::class_< ULocalTrainingMessage,  UWillowLocalMessage   >(m, "ULocalTrainingMessage")
        .def_readwrite("DefaultTrainingMessageColor", &ULocalTrainingMessage::DefaultTrainingMessageColor)
        .def("StaticClass", &ULocalTrainingMessage::StaticClass, py::return_value_policy::reference)
        .def("GetLocalStringForTrainingMessageKey", &ULocalTrainingMessage::GetLocalStringForTrainingMessageKey)
        .def("ClientReceive", &ULocalTrainingMessage::ClientReceive)
          ;
}