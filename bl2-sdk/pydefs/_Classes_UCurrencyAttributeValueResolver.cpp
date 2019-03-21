#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCurrencyAttributeValueResolver()
{
    class_< UCurrencyAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UCurrencyAttributeValueResolver", no_init)
        .def_readwrite("FormOfCurrency", &UCurrencyAttributeValueResolver::FormOfCurrency)
        .def("StaticClass", &UCurrencyAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}