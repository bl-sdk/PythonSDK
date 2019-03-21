#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightMapRef()
{
    class_< FLightMapRef >("FLightMapRef", no_init)
        .def_readwrite("Reference", &FLightMapRef::Reference)
  ;
}