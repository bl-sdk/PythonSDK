#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FASColorTransform()
{
    class_< FASColorTransform >("FASColorTransform", no_init)
        .def_readwrite("Multiply", &FASColorTransform::Multiply)
        .def_readwrite("Add", &FASColorTransform::Add)
  ;
}