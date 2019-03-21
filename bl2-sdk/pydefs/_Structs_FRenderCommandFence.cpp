#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRenderCommandFence()
{
    class_< FRenderCommandFence >("FRenderCommandFence", no_init)
        .def_readwrite("NumPendingFences", &FRenderCommandFence::NumPendingFences)
  ;
}