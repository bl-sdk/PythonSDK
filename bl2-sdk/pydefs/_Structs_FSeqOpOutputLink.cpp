#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqOpOutputLink(py::object m)
{
    py::class_< FSeqOpOutputLink >(m, "FSeqOpOutputLink")
        .def_readwrite("Links", &FSeqOpOutputLink::Links)
        .def_readwrite("LinkDesc", &FSeqOpOutputLink::LinkDesc)
        .def_readwrite("LinkedOp", &FSeqOpOutputLink::LinkedOp)
        .def_readwrite("ActivateDelay", &FSeqOpOutputLink::ActivateDelay)
  ;
}