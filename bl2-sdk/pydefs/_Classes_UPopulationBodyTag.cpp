#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationBodyTag()
{
    class_< UPopulationBodyTag, bases< UGBXDefinition >  , boost::noncopyable>("UPopulationBodyTag", no_init)
        .def("StaticClass", &UPopulationBodyTag::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}