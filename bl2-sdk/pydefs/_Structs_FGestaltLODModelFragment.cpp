#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltLODModelFragment()
{
    class_< FGestaltLODModelFragment >("FGestaltLODModelFragment", no_init)
        .def_readwrite("MaterialIndex", &FGestaltLODModelFragment::MaterialIndex)
        .def_readwrite("FirstIndex", &FGestaltLODModelFragment::FirstIndex)
        .def_readwrite("NumPrimitives", &FGestaltLODModelFragment::NumPrimitives)
  ;
}