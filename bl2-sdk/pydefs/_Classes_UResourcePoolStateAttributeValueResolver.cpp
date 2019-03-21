#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UResourcePoolStateAttributeValueResolver()
{
    class_< UResourcePoolStateAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UResourcePoolStateAttributeValueResolver", no_init)
        .def_readwrite("PoolState", &UResourcePoolStateAttributeValueResolver::PoolState)
        .def("StaticClass", &UResourcePoolStateAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}