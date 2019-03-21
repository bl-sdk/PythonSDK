#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingClientTrainingMessage()
{
    py::class_< FPendingClientTrainingMessage >("FPendingClientTrainingMessage")
        .def_readwrite("Message", &FPendingClientTrainingMessage::Message)
        .def_readwrite("TrainingDefinition", &FPendingClientTrainingMessage::TrainingDefinition)
        .def_readwrite("Duration", &FPendingClientTrainingMessage::Duration)
  ;
}