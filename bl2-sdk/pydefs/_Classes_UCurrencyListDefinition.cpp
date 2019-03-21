#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCurrencyListDefinition()
{
    class_< UCurrencyListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UCurrencyListDefinition", no_init)
        .def_readwrite("Currencies", &UCurrencyListDefinition::Currencies)
        .def("StaticClass", &UCurrencyListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}