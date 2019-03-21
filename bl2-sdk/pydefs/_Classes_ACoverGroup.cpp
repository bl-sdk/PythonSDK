#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ACoverGroup()
{
    class_< ACoverGroup, bases< AInfo >  , boost::noncopyable>("ACoverGroup", no_init)
        .def_readwrite("CoverLinkRefs", &ACoverGroup::CoverLinkRefs)
        .def_readwrite("AutoSelectRadius", &ACoverGroup::AutoSelectRadius)
        .def_readwrite("AutoSelectHeight", &ACoverGroup::AutoSelectHeight)
        .def("StaticClass", &ACoverGroup::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ACoverGroup::OnToggle)
        .def("ToggleGroup", &ACoverGroup::ToggleGroup)
        .def("DisableGroup", &ACoverGroup::DisableGroup)
        .def("EnableGroup", &ACoverGroup::EnableGroup)
        .staticmethod("StaticClass")
  ;
}