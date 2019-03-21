#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSavedTransform()
{
    class_< FSavedTransform >("FSavedTransform", no_init)
        .def_readwrite("Location", &FSavedTransform::Location)
        .def_readwrite("Rotation", &FSavedTransform::Rotation)
  ;
}