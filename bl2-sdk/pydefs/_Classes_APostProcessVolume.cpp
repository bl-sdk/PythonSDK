#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APostProcessVolume()
{
    class_< APostProcessVolume, bases< AVolume >  , boost::noncopyable>("APostProcessVolume", no_init)
        .def_readwrite("Priority", &APostProcessVolume::Priority)
        .def_readwrite("Settings", &APostProcessVolume::Settings)
        .def_readwrite("NextLowerPriorityVolume", &APostProcessVolume::NextLowerPriorityVolume)
        .def("StaticClass", &APostProcessVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &APostProcessVolume::OnToggle)
        .staticmethod("StaticClass")
  ;
}