#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLabelToLinkageMapping()
{
    class_< FLabelToLinkageMapping >("FLabelToLinkageMapping", no_init)
        .def_readwrite("LabelName", &FLabelToLinkageMapping::LabelName)
        .def_readwrite("LinkageName", &FLabelToLinkageMapping::LinkageName)
  ;
}