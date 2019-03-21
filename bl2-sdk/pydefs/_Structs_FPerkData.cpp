#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPerkData()
{
    class_< FPerkData >("FPerkData", no_init)
        .def_readwrite("ButtonChain", &FPerkData::ButtonChain)
        .def_readwrite("Command", &FPerkData::Command)
  ;
}