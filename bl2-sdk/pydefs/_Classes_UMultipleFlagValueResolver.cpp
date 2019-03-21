#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMultipleFlagValueResolver()
{
    class_< UMultipleFlagValueResolver, bases< UFlagValueResolver >  , boost::noncopyable>("UMultipleFlagValueResolver", no_init)
        .def_readwrite("FlagToLookUp", &UMultipleFlagValueResolver::FlagToLookUp)
        .def_readwrite("AggregationType", &UMultipleFlagValueResolver::AggregationType)
        .def("StaticClass", &UMultipleFlagValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}