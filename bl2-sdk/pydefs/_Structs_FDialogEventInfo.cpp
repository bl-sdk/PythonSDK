#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDialogEventInfo()
{
    class_< FDialogEventInfo >("FDialogEventInfo", no_init)
        .def_readwrite("Event", &FDialogEventInfo::Event)
        .def_readwrite("NodeID", &FDialogEventInfo::NodeID)
  ;
}