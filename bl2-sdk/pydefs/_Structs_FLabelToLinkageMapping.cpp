#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLabelToLinkageMapping(py::object m)
{
    py::class_< FLabelToLinkageMapping >(m, "FLabelToLinkageMapping")
        .def_readwrite("LabelName", &FLabelToLinkageMapping::LabelName)
        .def_readwrite("LinkageName", &FLabelToLinkageMapping::LinkageName)
  ;
}