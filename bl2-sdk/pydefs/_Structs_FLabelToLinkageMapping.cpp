#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLabelToLinkageMapping()
{
    py::class_< FLabelToLinkageMapping >("FLabelToLinkageMapping")
        .def_readwrite("LabelName", &FLabelToLinkageMapping::LabelName)
        .def_readwrite("LinkageName", &FLabelToLinkageMapping::LinkageName)
  ;
}