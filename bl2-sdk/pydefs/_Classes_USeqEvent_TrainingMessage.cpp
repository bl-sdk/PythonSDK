#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_TrainingMessage()
{
    py::class_< USeqEvent_TrainingMessage,  USequenceEvent   >("USeqEvent_TrainingMessage")
        .def_readwrite("TrainingMessageDefinition", &USeqEvent_TrainingMessage::TrainingMessageDefinition)
        .def("StaticClass", &USeqEvent_TrainingMessage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}