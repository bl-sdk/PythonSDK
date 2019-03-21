#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerClassCountOverride()
{
    class_< FPlayerClassCountOverride >("FPlayerClassCountOverride", no_init)
        .def_readwrite("Override", &FPlayerClassCountOverride::Override)
        .def_readwrite("PlayerClassIdDef", &FPlayerClassCountOverride::PlayerClassIdDef)
  ;
}