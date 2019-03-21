#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DisplayTrainingDefinitionMessage()
{
    py::class_< USeqAct_DisplayTrainingDefinitionMessage,  USequenceAction   >("USeqAct_DisplayTrainingDefinitionMessage")
        .def_readwrite("Duration", &USeqAct_DisplayTrainingDefinitionMessage::Duration)
        .def("StaticClass", &USeqAct_DisplayTrainingDefinitionMessage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}