#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTI_PrioritizeBonus()
{
    class_< UTI_PrioritizeBonus, bases< UTI_Prioritize >  , boost::noncopyable>("UTI_PrioritizeBonus", no_init)
        .def("StaticClass", &UTI_PrioritizeBonus::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}