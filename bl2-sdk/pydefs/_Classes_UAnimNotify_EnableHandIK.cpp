#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_EnableHandIK()
{
    class_< UAnimNotify_EnableHandIK, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_EnableHandIK", no_init)
        .def_readwrite("Hand", &UAnimNotify_EnableHandIK::Hand)
        .def("StaticClass", &UAnimNotify_EnableHandIK::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}