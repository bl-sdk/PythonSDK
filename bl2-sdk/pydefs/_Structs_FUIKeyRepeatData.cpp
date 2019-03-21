#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIKeyRepeatData()
{
    class_< FUIKeyRepeatData >("FUIKeyRepeatData", no_init)
        .def_readwrite("CurrentRepeatKey", &FUIKeyRepeatData::CurrentRepeatKey)
        .def_readwrite("NextRepeatTime", &FUIKeyRepeatData::NextRepeatTime)
  ;
}