#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABlockingVolume()
{
    class_< ABlockingVolume, bases< AVolume >  , boost::noncopyable>("ABlockingVolume", no_init)
        .def("StaticClass", &ABlockingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ABlockingVolume::OnToggle)
        .staticmethod("StaticClass")
  ;
}