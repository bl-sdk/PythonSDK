#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimInfo(py::object m)
{
    py::class_< FAnimInfo >(m, "FAnimInfo")
        .def_readwrite("AnimSeqName", &FAnimInfo::AnimSeqName)
        .def_readwrite("AnimSeq", &FAnimInfo::AnimSeq)
        .def_readwrite("AnimLinkupIndex", &FAnimInfo::AnimLinkupIndex)
  ;
}