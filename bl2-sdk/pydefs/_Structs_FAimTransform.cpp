#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAimTransform()
{
    class_< FAimTransform >("FAimTransform", no_init)
        .def_readwrite("Quaternion", &FAimTransform::Quaternion)
        .def_readwrite("Translation", &FAimTransform::Translation)
  ;
}