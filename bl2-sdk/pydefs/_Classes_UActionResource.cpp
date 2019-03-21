#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActionResource()
{
    class_< UActionResource, bases< UObject >  , boost::noncopyable>("UActionResource", no_init)
        .def("StaticClass", &UActionResource::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}