#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGFxMenuScreenTickable()
{
    class_< UIGFxMenuScreenTickable, bases< UInterface >  , boost::noncopyable>("UIGFxMenuScreenTickable", no_init)
        .def("StaticClass", &UIGFxMenuScreenTickable::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnTick", &UIGFxMenuScreenTickable::OnTick)
        .staticmethod("StaticClass")
  ;
}