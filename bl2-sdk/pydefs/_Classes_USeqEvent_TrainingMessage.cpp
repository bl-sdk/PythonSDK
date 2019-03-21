#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_TrainingMessage(py::object m)
{
    py::class_< USeqEvent_TrainingMessage,  USequenceEvent   >(m, "USeqEvent_TrainingMessage")
        .def_readwrite("TrainingMessageDefinition", &USeqEvent_TrainingMessage::TrainingMessageDefinition)
        .def("StaticClass", &USeqEvent_TrainingMessage::StaticClass, py::return_value_policy::reference)
          ;
}