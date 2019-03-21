#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APerch_Dynamic()
{
    class_< APerch_Dynamic, bases< APerch >  , boost::noncopyable>("APerch_Dynamic", no_init)
        .def("StaticClass", &APerch_Dynamic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}