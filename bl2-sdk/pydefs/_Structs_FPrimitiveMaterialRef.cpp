#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPrimitiveMaterialRef()
{
    class_< FPrimitiveMaterialRef >("FPrimitiveMaterialRef", no_init)
        .def_readwrite("Primitive", &FPrimitiveMaterialRef::Primitive)
        .def_readwrite("MaterialIndex", &FPrimitiveMaterialRef::MaterialIndex)
  ;
}