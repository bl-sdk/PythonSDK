#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqOpOutputInputLink(py::module &m)
{
    py::class_< FSeqOpOutputInputLink >(m, "FSeqOpOutputInputLink")
        .def_readwrite("LinkedOp", &FSeqOpOutputInputLink::LinkedOp)
        .def_readwrite("InputLinkIdx", &FSeqOpOutputInputLink::InputLinkIdx)
  ;
}