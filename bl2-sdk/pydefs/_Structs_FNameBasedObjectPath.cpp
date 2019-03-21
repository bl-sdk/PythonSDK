#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNameBasedObjectPath()
{
    class_< FNameBasedObjectPath >("FNameBasedObjectPath", no_init)
        .def_readonly("PathComponentNames", &FNameBasedObjectPath::PathComponentNames)
        .def_readwrite("IsSubobjectMask", &FNameBasedObjectPath::IsSubobjectMask)
  ;
}