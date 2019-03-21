#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRenderCommandFence_Mirror()
{
    class_< FRenderCommandFence_Mirror >("FRenderCommandFence_Mirror", no_init)
        .def_readwrite("NumPendingFences", &FRenderCommandFence_Mirror::NumPendingFences)
  ;
}