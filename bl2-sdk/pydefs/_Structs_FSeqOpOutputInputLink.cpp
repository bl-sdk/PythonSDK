#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqOpOutputInputLink()
{
    py::class_< FSeqOpOutputInputLink >("FSeqOpOutputInputLink")
        .def_readwrite("LinkedOp", &FSeqOpOutputInputLink::LinkedOp)
        .def_readwrite("InputLinkIdx", &FSeqOpOutputInputLink::InputLinkIdx)
  ;
}