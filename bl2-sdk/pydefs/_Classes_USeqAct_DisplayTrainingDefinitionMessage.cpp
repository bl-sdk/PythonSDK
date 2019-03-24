#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DisplayTrainingDefinitionMessage(py::module &m)
{
    py::class_< USeqAct_DisplayTrainingDefinitionMessage,  USequenceAction   >(m, "USeqAct_DisplayTrainingDefinitionMessage")
		.def_static("StaticClass", &USeqAct_DisplayTrainingDefinitionMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Duration", &USeqAct_DisplayTrainingDefinitionMessage::Duration)
          ;
}