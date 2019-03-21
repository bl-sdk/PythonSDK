#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimSlotDesc()
{
    class_< FAnimSlotDesc >("FAnimSlotDesc", no_init)
        .def_readwrite("SlotName", &FAnimSlotDesc::SlotName)
        .def_readwrite("NumChannels", &FAnimSlotDesc::NumChannels)
  ;
}