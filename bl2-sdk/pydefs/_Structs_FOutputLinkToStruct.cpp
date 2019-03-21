#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOutputLinkToStruct()
{
    class_< FOutputLinkToStruct >("FOutputLinkToStruct", no_init)
        .def_readwrite("FromNodeID", &FOutputLinkToStruct::FromNodeID)
        .def_readwrite("LinkNumber", &FOutputLinkToStruct::LinkNumber)
        .def_readwrite("ToNodeID", &FOutputLinkToStruct::ToNodeID)
  ;
}