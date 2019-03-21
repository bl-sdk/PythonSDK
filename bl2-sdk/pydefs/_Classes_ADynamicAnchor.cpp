#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicAnchor()
{
    class_< ADynamicAnchor, bases< ANavigationPoint >  , boost::noncopyable>("ADynamicAnchor", no_init)
        .def_readwrite("CurrentUser", &ADynamicAnchor::CurrentUser)
        .def("StaticClass", &ADynamicAnchor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}