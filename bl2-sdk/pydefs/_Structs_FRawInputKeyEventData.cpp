#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRawInputKeyEventData()
{
    class_< FRawInputKeyEventData >("FRawInputKeyEventData", no_init)
        .def_readwrite("InputKeyName", &FRawInputKeyEventData::InputKeyName)
        .def_readwrite("ModifierKeyFlags", &FRawInputKeyEventData::ModifierKeyFlags)
  ;
}