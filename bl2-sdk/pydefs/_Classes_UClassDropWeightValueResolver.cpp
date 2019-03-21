#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UClassDropWeightValueResolver()
{
    class_< UClassDropWeightValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UClassDropWeightValueResolver", no_init)
        .def_readwrite("PlayerClassId", &UClassDropWeightValueResolver::PlayerClassId)
        .def("StaticClass", &UClassDropWeightValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}