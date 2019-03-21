#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClanSwitchData()
{
    class_< FClanSwitchData >("FClanSwitchData", no_init)
        .def_readwrite("SwitchName", &FClanSwitchData::SwitchName)
        .def_readwrite("SwitchValue", &FClanSwitchData::SwitchValue)
  ;
}