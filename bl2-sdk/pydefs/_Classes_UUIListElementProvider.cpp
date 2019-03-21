#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIListElementProvider()
{
    class_< UUIListElementProvider, bases< UInterface >  , boost::noncopyable>("UUIListElementProvider", no_init)
        .def("StaticClass", &UUIListElementProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}