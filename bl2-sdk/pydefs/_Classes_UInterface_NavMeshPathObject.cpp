#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathObject()
{
    class_< UInterface_NavMeshPathObject, bases< UInterface >  , boost::noncopyable>("UInterface_NavMeshPathObject", no_init)
        .def("StaticClass", &UInterface_NavMeshPathObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}