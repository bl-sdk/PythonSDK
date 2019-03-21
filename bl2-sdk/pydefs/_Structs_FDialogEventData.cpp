#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDialogEventData()
{
    class_< FDialogEventData >("FDialogEventData", no_init)
        .def_readwrite("Tag", &FDialogEventData::Tag)
        .def_readwrite("OutputAction", &FDialogEventData::OutputAction)
  ;
}