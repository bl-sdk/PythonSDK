#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISeeTargetable()
{
    class_< UISeeTargetable, bases< UInterface >  , boost::noncopyable>("UISeeTargetable", no_init)
        .def("StaticClass", &UISeeTargetable::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetViewLocation", &UISeeTargetable::GetViewLocation)
        .def("GetWorldBody", &UISeeTargetable::GetWorldBody, return_value_policy< reference_existing_object >())
        .def("AddTargetable", &UISeeTargetable::AddTargetable)
        .staticmethod("StaticClass")
  ;
}