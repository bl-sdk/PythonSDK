#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectReferencer()
{
    class_< UObjectReferencer, bases< UObject >  , boost::noncopyable>("UObjectReferencer", no_init)
        .def_readwrite("ReferencedObjects", &UObjectReferencer::ReferencedObjects)
        .def("StaticClass", &UObjectReferencer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}