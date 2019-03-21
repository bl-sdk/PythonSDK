#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVariableLink()
{
    class_< FVariableLink >("FVariableLink", no_init)
        .def_readwrite("Links", &FVariableLink::Links)
  ;
}