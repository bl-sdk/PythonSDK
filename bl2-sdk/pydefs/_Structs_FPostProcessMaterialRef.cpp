#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPostProcessMaterialRef()
{
    class_< FPostProcessMaterialRef >("FPostProcessMaterialRef", no_init)
        .def_readwrite("Effect", &FPostProcessMaterialRef::Effect)
  ;
}