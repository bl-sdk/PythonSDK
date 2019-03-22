#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Gate(py::module &m)
{
    py::class_< USeqAct_Gate,  USequenceAction   >(m, "USeqAct_Gate")
        .def_readwrite("AutoCloseCount", &USeqAct_Gate::AutoCloseCount)
        .def_readwrite("CurrentCloseCount", &USeqAct_Gate::CurrentCloseCount)
        .def("StaticClass", &USeqAct_Gate::StaticClass, py::return_value_policy::reference)
          ;
}