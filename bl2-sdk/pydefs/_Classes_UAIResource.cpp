#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIResource()
{
    class_< UAIResource, bases< UGBXDefinition >  , boost::noncopyable>("UAIResource", no_init)
        .def_readwrite("ResourceRestrictions", &UAIResource::ResourceRestrictions)
        .def_readwrite("MaxUsers", &UAIResource::MaxUsers)
        .def_readwrite("MinUsers", &UAIResource::MinUsers)
        .def("StaticClass", &UAIResource::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}