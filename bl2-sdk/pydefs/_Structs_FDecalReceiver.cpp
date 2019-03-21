#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDecalReceiver()
{
    class_< FDecalReceiver >("FDecalReceiver", no_init)
        .def_readwrite("Component", &FDecalReceiver::Component)
        .def_readwrite("RenderData", &FDecalReceiver::RenderData)
  ;
}