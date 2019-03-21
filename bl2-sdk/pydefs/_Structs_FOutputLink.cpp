#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOutputLink()
{
    class_< FOutputLink >("FOutputLink", no_init)
        .def_readwrite("Links", &FOutputLink::Links)
  ;
}