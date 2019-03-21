#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AIDestructibleObject()
{
    class_< AIDestructibleObject, bases< AActor >  , boost::noncopyable>("AIDestructibleObject", no_init)
        .def("StaticClass", &AIDestructibleObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}