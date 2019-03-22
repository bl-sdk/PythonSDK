#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_RandomSwitch(py::module &m)
{
    py::class_< USeqAct_RandomSwitch,  USequenceAction   >(m, "USeqAct_RandomSwitch")
        .def_readwrite("AutoDisabledIndices", &USeqAct_RandomSwitch::AutoDisabledIndices)
        .def_readwrite("LinkCount", &USeqAct_Switch::LinkCount)
        .def_readwrite("IncrementAmount", &USeqAct_Switch::IncrementAmount)
        .def_readwrite("Indices", &USeqAct_Switch::Indices)
        .def("eventGetObjClassVersion", &USeqAct_RandomSwitch::eventGetObjClassVersion)
          ;
}