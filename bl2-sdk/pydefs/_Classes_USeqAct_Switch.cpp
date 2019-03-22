#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Switch(py::module &m)
{
    py::class_< USeqAct_Switch,  USequenceAction   >(m, "USeqAct_Switch")
        .def_readwrite("LinkCount", &USeqAct_Switch::LinkCount)
        .def_readwrite("IncrementAmount", &USeqAct_Switch::IncrementAmount)
        .def_readwrite("Indices", &USeqAct_Switch::Indices)
          ;
}