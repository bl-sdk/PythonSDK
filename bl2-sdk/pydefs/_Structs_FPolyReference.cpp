#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPolyReference()
{
    class_< FPolyReference >("FPolyReference", no_init)
        .def_readwrite("OwningPylon", &FPolyReference::OwningPylon)
        .def_readwrite("PolyId", &FPolyReference::PolyId)
        .def_readwrite("CachedPoly", &FPolyReference::CachedPoly)
  ;
}