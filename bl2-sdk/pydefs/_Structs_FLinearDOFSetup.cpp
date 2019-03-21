#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLinearDOFSetup()
{
    class_< FLinearDOFSetup >("FLinearDOFSetup", no_init)
        .def_readwrite("bLimited", &FLinearDOFSetup::bLimited)
        .def_readwrite("LimitSize", &FLinearDOFSetup::LimitSize)
  ;
}