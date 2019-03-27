#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetVector(py::module &m)
{
    py::class_< USeqAct_SetVector,  USeqAct_SetSequenceVariable   >(m, "USeqAct_SetVector")
		.def_static("StaticClass", &USeqAct_SetVector::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultValue", &USeqAct_SetVector::DefaultValue)
        .def("eventActivated", &USeqAct_SetVector::eventActivated)
          ;
}