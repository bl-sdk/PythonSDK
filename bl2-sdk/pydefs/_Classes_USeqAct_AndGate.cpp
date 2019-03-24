#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AndGate(py::module &m)
{
    py::class_< USeqAct_AndGate,  USequenceAction   >(m, "USeqAct_AndGate")
		.def_static("StaticClass", &USeqAct_AndGate::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LinkedOutputFiredStatus", &USeqAct_AndGate::LinkedOutputFiredStatus)
        .def_readwrite("LinkedOutputs", &USeqAct_AndGate::LinkedOutputs)
          ;
}