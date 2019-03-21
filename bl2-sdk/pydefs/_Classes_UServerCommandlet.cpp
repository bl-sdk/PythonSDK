#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UServerCommandlet()
{
    class_< UServerCommandlet, bases< UCommandlet >  , boost::noncopyable>("UServerCommandlet", no_init)
        .def("StaticClass", &UServerCommandlet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}