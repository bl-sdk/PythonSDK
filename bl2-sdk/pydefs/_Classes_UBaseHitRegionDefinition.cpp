#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBaseHitRegionDefinition()
{
    class_< UBaseHitRegionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBaseHitRegionDefinition", no_init)
        .def("StaticClass", &UBaseHitRegionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}