#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPickupMemento()
{
    class_< FPickupMemento >("FPickupMemento", no_init)
        .def_readwrite("Rotation", &FPickupMemento::Rotation)
  ;
}